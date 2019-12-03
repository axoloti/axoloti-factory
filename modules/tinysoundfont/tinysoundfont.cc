#include <new>
#include <math.h>
#include "tinysoundfont.h"
#include "axoloti_memory.h"
#include "logging.h"
#include "midi.h"
#include "fatfs/ff.h"

#define TSF_IMPLEMENTATION

#define TSF_NO_STDIO
#define TSF_STATIC 1

#define TSF_MALLOC(x)  my_malloc(x)
#define TSF_FREE(x)    my_free(x)
#define TSF_REALLOC    my_realloc

#define TSF_POW     powf
#define TSF_POWF    powf
#define TSF_EXPF    expf
#define TSF_LOG     logf
#define TSF_TAN     tanf
#define TSF_LOG10   log10f
#define TSF_SQRT    sqrtf
#define TSF_SQRTF   sqrtf

void *my_malloc(int sz) {
	void *d = ax_malloc(sz, mem_type_hint_large);
	// LogTextMessage("TSF: alloc %d", sz);
	return d;
}

void my_free(void *ptr) {
	if (ptr) {
		ax_free(ptr);
	}
}

void *my_realloc(void *ptr, size_t newLength) {
	LogTextMessage("TSF: insufficient voices, going to crash!");
	chThdSleepMilliseconds(50);
	return 0;
}

#define double float

#include "tsf.h"

using namespace tinysoundfont;

class C_tinysoundfont_impl : public C_tinysoundfont {
public:
	C_tinysoundfont_impl(const char *filename);
	virtual ~C_tinysoundfont_impl();
    virtual void render_float(float* out_stereo, size_t size);
    virtual void process_midi(midi_message_t midi_message);
private:
    tsf* tsf_;
};

C_tinysoundfont_impl::C_tinysoundfont_impl(const char *filename) {
	int size;
	void* buffer;
	FIL fil;
	UINT br;
	FRESULT fresult;
	fresult = f_open (&fil, filename, FA_READ | FA_OPEN_EXISTING);
	if (fresult!=FR_OK) {
		LogTextMessage("TSF: open failed");
		return;
	}
	size = f_size(&fil);
	buffer = ax_malloc(size, mem_type_hint_large);
	if (!buffer) {
		LogTextMessage("TSF: alloc failed");
		return;
	}
	fresult = f_read(&fil, buffer, size, &br);
	if (fresult!=FR_OK) {
		LogTextMessage("TSF: read failed");
		return;
	}
	if (size!=br) {
		LogTextMessage("TSF: read failed (2)");
		return;
	}
	f_close(&fil);
//	int i;
//	int *p = (int *)buffer;
//	for(i=0;i<20;i++) {
//		LogTextMessage("sf2 %8X ", *p++);
//	}

	// TODO: load by streaming via fatfs
	tsf_ = tsf_load_memory(buffer, size);
	ax_free(buffer);
	tsf_->voiceNum = 10;
	tsf_->voices = (struct tsf_voice*)ax_malloc(tsf_->voiceNum * sizeof(struct tsf_voice), (mem_type_flags_t)0);
	TSF_MEMSET(tsf_->voices, 0, tsf_->voiceNum * sizeof(struct tsf_voice));
	int i;
	for(i=0;i<tsf_->voiceNum;i++) {
		tsf_->voices[i].playingPreset = -1;
	}
	tsf_set_output(tsf_, TSF_STEREO_INTERLEAVED, 48000, 0);
}

extern "C" void _ZdlPvj(void) {
	// TODO: ????
}

C_tinysoundfont_impl::~C_tinysoundfont_impl() {
	tsf_close(tsf_);
}

void C_tinysoundfont_impl::render_float(float* out_stereo, size_t size) {
	tsf_render_float(tsf_, out_stereo, size, 0);
}

void C_tinysoundfont_impl::process_midi(midi_message_t midi_message) {
	uint8_t status = midiMessageGetB0(midi_message);
	uint8_t data1 = midiMessageGetB1(midi_message);
	uint8_t data2 = midiMessageGetB2(midi_message);
//	LogTextMessage("m %2x %2x %2x", status,data1,data2);
	uint8_t chan = 1 + (status & 0x0F);
	if ((status & 0x0F0) == MIDI_NOTE_ON) {
		if (data2>0) {
//			LogTextMessage("on %d", data1);
//			tsf_channel_note_on(tsf_, status & 0x0F, data1, data2/128.0f);
			tsf_note_on(tsf_, chan, data1, data2/128.0f);
		} else {
//			tsf_channel_note_off(tsf_, status & 0x0F, data1);
			tsf_note_off(tsf_, chan, data1);
		}
	} else if ((status & 0x0F0) == MIDI_NOTE_OFF) {
//		LogTextMessage("off %d", data1);
//		tsf_channel_note_off(tsf_, status & 0x0F, data1);
		tsf_note_off(tsf_, chan, data1);
	}

}

extern "C"
tinysoundfont::C_tinysoundfont * tinysoundfont_factory(const char *filename) {
    void *objdata = ax_malloc(sizeof(C_tinysoundfont_impl), (mem_type_flags_t)0);
    if (objdata == 0) return 0;
    return new (objdata) C_tinysoundfont_impl(filename);
}
