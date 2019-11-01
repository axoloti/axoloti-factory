#include "elements/dsp/fx/diffuser.h"
#include "lmntsdiffuser.h"
#include "axoloti_memory.h"

class C_lmnts_diffuser_impl : public lmntsdiffuser::C_lmnts_diffuser {
    virtual void Init(float* buffer);
    virtual void Process(float* in_out, size_t size);
    
    private: 
        elements::Diffuser diffuser;
};

void C_lmnts_diffuser_impl::Init(float* buffer) {
	diffuser.Init(buffer);
}

void C_lmnts_diffuser_impl::Process(float* in_out, size_t size) {
	diffuser.Process(in_out,size);
}

extern "C"
lmntsdiffuser::C_lmnts_diffuser * lmntsdiffuser_factory() {
    void *objdata = ax_malloc(sizeof(C_lmnts_diffuser_impl), (mem_type_flags_t)0);
    if (objdata == 0) return 0;
    return new (objdata) C_lmnts_diffuser_impl();
}
