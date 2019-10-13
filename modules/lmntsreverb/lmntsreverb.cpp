#include "elements/dsp/fx/reverb.h"
#include "lmntsreverb.h"
#include "axoloti_memory.h"

class C_lmnts_reverb_impl : public lmntsreverb::C_lmnts_reverb {
    virtual void Init(uint16_t* buffer);
    virtual void Process(float* left, float* right, size_t size);
    virtual void set_amount(float amount);
    virtual void set_input_gain(float input_gain);
    virtual void set_time(float reverb_time);
    virtual void set_diffusion(float diffusion);
    virtual void set_lp(float lp);
    
    private: 
        elements::Reverb reverb;
};

void C_lmnts_reverb_impl::Init(uint16_t* buffer) {
    reverb.Init(buffer);
}

void C_lmnts_reverb_impl::Process(float* left, float* right, size_t size) {
    reverb.Process(left,right,size);
}

void C_lmnts_reverb_impl::set_amount(float amount) {  
    reverb.set_amount(amount);
}

void C_lmnts_reverb_impl::set_input_gain(float input_gain) {
    reverb.set_input_gain(input_gain);
}

void C_lmnts_reverb_impl::set_time(float reverb_time) {
    reverb.set_time(reverb_time);
}

void C_lmnts_reverb_impl::set_diffusion(float diffusion) {
    reverb.set_diffusion(diffusion);
}

void C_lmnts_reverb_impl::set_lp(float lp) {
    reverb.set_lp(lp);
}

extern "C"
lmntsreverb::C_lmnts_reverb * lmntsreverb_factory() {
    void *objdata = ax_malloc(sizeof(C_lmnts_reverb_impl), (mem_type_flags_t)0);
    if (objdata == 0) return 0;
    return new (objdata) C_lmnts_reverb_impl();    
}