
#include <cstddef>
#include "midi.h"

namespace tinysoundfont {

class C_tinysoundfont {
public:
	C_tinysoundfont() {};
	virtual ~C_tinysoundfont() {};
    virtual void render_float(float* out_stereo, size_t size) = 0;
    virtual void process_midi(midi_message_t midi_message) = 0;
};

}

extern "C" {
tinysoundfont::C_tinysoundfont * tinysoundfont_factory(const char *filename, int voices);
}
