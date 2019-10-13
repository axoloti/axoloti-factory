#pragma once

namespace lmntsreverb {

class C_lmnts_reverb {
public:
    virtual void Init(uint16_t* buffer) = 0;
    virtual void Process(float* left, float* right, size_t size) = 0;
    virtual void set_amount(float amount) = 0;
    virtual void set_input_gain(float input_gain) = 0;
    virtual void set_time(float reverb_time) = 0;
    virtual void set_diffusion(float diffusion) = 0;
    virtual void set_lp(float lp) = 0;
};

}

extern "C" {
    lmntsreverb::C_lmnts_reverb * lmntsreverb_factory();
}
