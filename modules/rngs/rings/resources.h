// Copyright 2015 Olivier Gillet.
//
// Author: Olivier Gillet (ol.gillet@gmail.com)
//
// Permission is hereby granted, free of charge, to any person obtaining a copy
// of this software and associated documentation files (the "Software"), to deal
// in the Software without restriction, including without limitation the rights
// to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
// copies of the Software, and to permit persons to whom the Software is
// furnished to do so, subject to the following conditions:
// 
// The above copyright notice and this permission notice shall be included in
// all copies or substantial portions of the Software.
// 
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
// THE SOFTWARE.
// 
// See http://creativecommons.org/licenses/MIT/ for more information.
//
// -----------------------------------------------------------------------------
//
// Resources definitions.
//
// Automatically generated with:
// make resources


#pragma once

#include "stmlib/stmlib.h"


namespace rings {

typedef uint8_t ResourceId;

extern const int16_t* lookup_table_int16_table[];

extern const uint32_t* lookup_table_uint32_table[];

extern const float* lookup_table_table[];

const int LUT_SINE = 0;
const int LUT_SINE_SIZE = 5121;
const int LUT_4_DECADES = 1;
const int LUT_4_DECADES_SIZE = 257;
const int LUT_SVF_SHIFT = 2;
const int LUT_SVF_SHIFT_SIZE = 257;
const int LUT_STIFFNESS = 3;
const int LUT_STIFFNESS_SIZE = 257;
const int LUT_FM_FREQUENCY_QUANTIZER = 4;
const int LUT_FM_FREQUENCY_QUANTIZER_SIZE = 129;


extern const float lut_sine[];
extern const float lut_4_decades[];
extern const float lut_svf_shift[];
extern const float lut_stiffness[];
extern const float lut_fm_frequency_quantizer[];


}  // namespace rings

