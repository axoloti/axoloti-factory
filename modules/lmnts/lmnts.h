#pragma once


#include "elements/dsp/exciter.h"
#include "elements/dsp/tube.h"
#include "elements/dsp/string.h"
#include "elements/dsp/fx/diffuser.h"
#include "elements/dsp/fx/reverb.h"
#include "elements/dsp/part.h"
#include "elements/dsp/patch.h"

namespace elements {
    bool loadElementsData(int idx, const char* file, int16_t sample_array[], int size);
}
