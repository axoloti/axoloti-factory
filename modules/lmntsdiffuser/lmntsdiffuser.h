#pragma once

namespace lmntsdiffuser {

class C_lmnts_diffuser {
public:
    virtual void Init(float* buffer) = 0;
    virtual void Process(float* in_out, size_t size) = 0;
};

}

extern "C" {
    lmntsdiffuser::C_lmnts_diffuser * lmntsdiffuser_factory();
}
