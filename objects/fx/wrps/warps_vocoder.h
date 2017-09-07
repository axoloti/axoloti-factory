#pragma once

namespace warps_deriv {

enum SampleRateConversionDirection {
  SRC_UP,
  SRC_DOWN
};

template <SampleRateConversionDirection direction, int32_t ratio, int32_t length>
struct SRC_FIR { };


// Generated with:
// 6 * scipy.signal.remez(48, [0, 0.060000 / 6, 0.5 / 6, 0.5], [1, 0])
template<>
struct SRC_FIR<SRC_UP, 6, 48> {
  template<int32_t i> inline float Read() const {
    const float h[] = {
       4.357278576e-04, -2.297029461e-03, -4.703810602e-03, -8.774604727e-03,
      -1.433899145e-02, -2.112793398e-02, -2.853108802e-02, -3.552868193e-02,
      -4.069862931e-02, -4.228981313e-02, -3.836519645e-02, -2.700780696e-02,
      -6.569014106e-03,  2.407089704e-02,  6.526452513e-02,  1.164165703e-01,
       1.758932961e-01,  2.410483237e-01,  3.083744498e-01,  3.737697127e-01,
       4.328923682e-01,  4.815728403e-01,  5.162355916e-01,  5.342582974e-01,
    };
    return h[i];
  }
};

// Generated with:
// 1 * scipy.signal.remez(48, [0, 0.060000 / 6, 0.5 / 6, 0.5], [1, 0])
template<>
struct SRC_FIR<SRC_DOWN, 6, 48> {
  template<int32_t i> inline float Read() const {
    const float h[] = {
       7.262130960e-05, -3.828382434e-04, -7.839684337e-04, -1.462434121e-03,
      -2.389831909e-03, -3.521322331e-03, -4.755181337e-03, -5.921446989e-03,
      -6.783104885e-03, -7.048302188e-03, -6.394199409e-03, -4.501301159e-03,
      -1.094835684e-03,  4.011816173e-03,  1.087742085e-02,  1.940276171e-02,
       2.931554935e-02,  4.017472062e-02,  5.139574163e-02,  6.229495212e-02,
       7.214872804e-02,  8.026214006e-02,  8.603926526e-02,  8.904304957e-02,
    };
    return h[i];
  }
};

// Generated with:
// 4 * scipy.signal.remez(48, [0, 0.105000 / 4, 0.5 / 4, 0.5], [1, 0])
template<>
struct SRC_FIR<SRC_UP, 4, 48> {
  template<int32_t i> inline float Read() const {
    const float h[] = {
      -6.014371929e-04, -1.116027480e-03, -1.547569918e-03, -1.288608084e-03,
       2.786886230e-04,  3.529342828e-03,  8.203156385e-03,  1.308970614e-02,
       1.600199910e-02,  1.419074690e-02,  5.231038872e-03, -1.177915684e-02,
      -3.506738553e-02, -5.953252182e-02, -7.699933415e-02, -7.757902368e-02,
      -5.198496872e-02,  5.703716839e-03,  9.559598586e-02,  2.106660616e-01,
       3.371310483e-01,  4.566603688e-01,  5.500087786e-01,  6.012053946e-01,
    };
    return h[i];
  }
};

// Generated with:
// 1 * scipy.signal.remez(48, [0, 0.105000 / 4, 0.5 / 4, 0.5], [1, 0])
template<>
struct SRC_FIR<SRC_DOWN, 4, 48> {
  template<int32_t i> inline float Read() const {
    const float h[] = {
      -1.503592982e-04, -2.790068700e-04, -3.868924795e-04, -3.221520211e-04,
       6.967215575e-05,  8.823357070e-04,  2.050789096e-03,  3.272426536e-03,
       4.000499774e-03,  3.547686724e-03,  1.307759718e-03, -2.944789209e-03,
      -8.766846381e-03, -1.488313045e-02, -1.924983354e-02, -1.939475592e-02,
      -1.299624218e-02,  1.425929210e-03,  2.389899647e-02,  5.266651541e-02,
       8.428276207e-02,  1.141650922e-01,  1.375021946e-01,  1.503013486e-01,
    };
    return h[i];
  }
};

// Generated with:
// 3 * scipy.signal.remez(36, [0, 0.050000 / 3, 0.5 / 3, 0.5], [1, 0])
template<>
struct SRC_FIR<SRC_UP, 3, 36> {
  template<int32_t i> inline float Read() const {
    const float h[] = {
       2.111177486e-04,  9.399136027e-04,  2.516356933e-03,  4.847507152e-03,
       6.912087023e-03,  6.524576194e-03,  8.579855461e-04, -1.203466052e-02,
      -3.103696515e-02, -5.013495031e-02, -5.827142630e-02, -4.183809689e-02,
       1.038391226e-02,  1.014554664e-01,  2.222529437e-01,  3.515426263e-01,
       4.610075226e-01,  5.238640837e-01,
    };
    return h[i];
  }
};

// Generated with:
// 1 * scipy.signal.remez(36, [0, 0.050000 / 3, 0.5 / 3, 0.5], [1, 0])
template<>
struct SRC_FIR<SRC_DOWN, 3, 36> {
  template<int32_t i> inline float Read() const {
    const float h[] = {
       7.037258286e-05,  3.133045342e-04,  8.387856444e-04,  1.615835717e-03,
       2.304029008e-03,  2.174858731e-03,  2.859951820e-04, -4.011553507e-03,
      -1.034565505e-02, -1.671165010e-02, -1.942380877e-02, -1.394603230e-02,
       3.461304086e-03,  3.381848881e-02,  7.408431457e-02,  1.171808754e-01,
       1.536691742e-01,  1.746213612e-01,
    };
    return h[i];
  }
};


//#include "warps/dsp/sample_rate_conversion_filters.h"

//namespace warps {

template<int32_t N>
struct FilterState {
 public:
  enum {
    n = N
  };
  inline void Push(float value) {
    tail.Push(head);
    head = value;
  }

  template<int32_t i> inline float Read() const {
    return i == 0 ? head : tail.template Read<i - 1>();
  }

  inline void Load(const float* x_state) {
    head = x_state[0];
    tail.Load(x_state + 1);
  }

  inline void Save(float* x_state) {
    x_state[0] = head;
    tail.Save(x_state + 1);
  }

 private:  
  float head;
  FilterState<N-1> tail;
};

template<>
class FilterState<1> {
 public:
  enum {
    n = 1
  };
  inline void Push(float value) {
    head = value;
  }

  template<int32_t i> inline float Read() const {
    return head;
  }

  inline void Load(const float* x_state) {
    head = x_state[0];
  }

  inline void Save(float* x_state) {
    x_state[0] = head;
  }
 private:
  float head;
};

template<int32_t N, int32_t x_stride, int32_t h_stride, int32_t mirror = 0, int32_t i = 0, int32_t h_offset = 0>
struct Accumulator {
  enum {
    h_index = mirror != 0 && h_offset + i * h_stride >= mirror / 2 ?
        mirror - 1 - i * h_stride - h_offset : h_offset + i * h_stride
  };
  
  template<typename IR>
  inline float operator()(const float* x, const IR& h) const {
    Accumulator<N - 1, x_stride, h_stride, mirror, i + 1, h_offset> a;
    return x[i * x_stride] * h.template Read<h_index>() + a(x, h);
  }
  
  template<int32_t NN, typename IR>
  inline float operator()(const FilterState<NN>& x, const IR& h) const {
    Accumulator<N - 1, x_stride, h_stride, mirror, i + 1, h_offset> a;
    return x.template Read<i * x_stride>() * h.template Read<h_index>() + a(x, h);
  }
};

template<int32_t x_stride, int32_t h_stride, int32_t mirror, int32_t i, int32_t h_offset>
struct Accumulator<0, x_stride, h_stride, mirror, i, h_offset> {
  template<typename IR>
  inline float operator()(const float* x, const IR& h) const {
    return 0.0f;
  }

  template<int32_t NN, typename IR>
  inline float operator()(const FilterState<NN>& x, const IR& h) const {
    return 0.0f;
  }
};

template<int32_t K, int32_t mirror = 0, int32_t remaining = K>
struct PolyphaseStage {
  template<typename T, typename IR>
  inline void operator()(float* &y, const T& x, const IR& h) const {
    Accumulator<T::n, 1, K, mirror, 0, K - remaining> a;
    *y++ = a(x, h);
    PolyphaseStage<K, mirror, remaining - 1> p;
    p(y, x, h);
  }
};

template<int32_t K, int32_t mirror>
struct PolyphaseStage<K, mirror, 0> {
  template<typename T, typename IR>
  inline void operator()(float* &y, const T& x, const IR& h) const { }
};

template<
    SampleRateConversionDirection direction,
    int32_t ratio,
    int32_t filter_size>
class SampleRateConverter { };

template<int32_t ratio, int32_t filter_size>
class SampleRateConverter<SRC_UP, ratio, filter_size> {
 private:
  enum {
    N = filter_size / ratio,
    K = ratio
  };
 
 public:
  SampleRateConverter() { }
  ~SampleRateConverter() { }

  inline void Init() {
    std::fill(&x_[0], &x_[N], 0);
  };

  inline int32_t delay() const { return filter_size / ratio / 2; }

  inline void Process(const float* in, float* out, size_t input_size) {
    SRC_FIR<SRC_UP, ratio, filter_size> ir;
    FilterState<N> x;
    x.Load(x_);
    while (input_size--) {
      x.Push(*in++);
      PolyphaseStage<K, filter_size> polyphase_stage;
      polyphase_stage(out, x, ir);
    }
    x.Save(x_);
  }
  
 private:
  float x_[N];

  DISALLOW_COPY_AND_ASSIGN(SampleRateConverter);
};

template<int32_t ratio, int32_t filter_size>
class SampleRateConverter<SRC_DOWN, ratio, filter_size> {
 private:
  enum {
    N = filter_size,
    K = ratio
  };
 
 public:
  SampleRateConverter() { }
  ~SampleRateConverter() { }

  inline void Init() {
    std::fill(&x_[0], &x_[2 * N], 0);
    x_ptr_ = &x_[N - 1];
  };

  inline int32_t delay() const { return filter_size / 2; }

  inline void Process(const float* in, float* out, size_t input_size) {
    // When downsampling, the number of input samples must be a multiple
    // of the downsampling ratio.
    if ((input_size % ratio) != 0) {
      return;
    }

    SRC_FIR<SRC_DOWN, ratio, filter_size> ir;
    if (input_size >= 8 * filter_size) {
      std::copy(&in[0], &in[N], &x_[N - 1]);
      
      // Generate the samples which require access to the history buffer.
      for (int32_t i = 0; i < N; i += ratio) {
        Accumulator<N, -1, 1, filter_size> accumulator;
        *out++ = accumulator(&x_[N - 1 + i], ir);
        in += ratio;
        input_size -= ratio;
      }
        
      // From now on, all the samples we need to access are located inside
      // the input buffer passed as an argument, and since the filter
      // is small, we can unroll the summation loop.
      if ((input_size / ratio) & 1) {
        while (input_size) {
          Accumulator<N, -1, 1, filter_size> accumulator;
          *out++ = accumulator(in, ir);
          input_size -= ratio;
          in += ratio;
        }
      } else {
        while (input_size) {
          Accumulator<N, -1, 1, filter_size> accumulator;
          *out++ = accumulator(in, ir);
          *out++ = accumulator(in + ratio, ir);
          input_size -= 2 * ratio;
          in += 2 * ratio;
        }
      }

      // Copy last input samples to history buffer.
      std::copy(&in[-N + 1], &in[0], &x_[0]);
    } else {
      // Variant which uses a circular buffer to store history.
      while (input_size) {
        for (int32_t i = 0; i < ratio; ++i) {
          x_ptr_[0] = x_ptr_[N] = *in++;
          --x_ptr_;
          if (x_ptr_ < x_) {
            x_ptr_ += N;
          }
        }
        input_size -= ratio;

        Accumulator<N, 1, 1, filter_size> accumulator;
        *out++ = accumulator(&x_ptr_[1], ir);
      }
    }
  }
 
 private:
  float x_[2 * N];
  float* x_ptr_;

  DISALLOW_COPY_AND_ASSIGN(SampleRateConverter);
};
// from limiter.h


class Limiter {
 public:
  Limiter() { }
  ~Limiter() { }

  void Init() {
    peak_ = 0.5f;
  }

  void Process(
      float* in_out,
      float pre_gain,
      size_t size) {
    while (size--) {
      float s = *in_out * pre_gain;
      SLOPE(peak_, fabs(s), 0.05f, 0.00002f);
      float gain = (peak_ <= 1.0f ? 1.0f : 1.0f / peak_);
      *in_out++ = stmlib::SoftLimit(s * gain * 0.8f);
    }
  }

 private:
  float peak_;

  DISALLOW_COPY_AND_ASSIGN(Limiter);
};

// from filterbank.h

const int32_t kNumBands = 20;
const int32_t kLowFactor = 4;
const int32_t kMidFactor = 4;
const int32_t kDelayLineSize = 6144;
const int32_t kMaxFilterBankBlockSize = 16;
const int32_t kSampleMemorySize = kMaxFilterBankBlockSize * kNumBands / 2;

class PooledDelayLine {
 public:
  PooledDelayLine() { }
  ~PooledDelayLine() { }
  
  void Init(float* ptr, int32_t delay) {
    delay_line_ = ptr;
    size_ = delay + 1;
    head_ = 0;
    std::fill(&ptr[0], &ptr[size_], 0.0f);
  }
  
  inline int32_t size() const { return size_; }
  
  float ReadWrite(float value) {
    delay_line_[head_] = value;
    head_ = (head_ + 1) % size_;
    return delay_line_[head_];
  };
  
 private:
  float* delay_line_;
  int32_t size_;
  int32_t head_;
  
  DISALLOW_COPY_AND_ASSIGN(PooledDelayLine);
};

struct Band {
  int32_t group;
  float sample_rate;
  float post_gain;
  stmlib::CrossoverSvf svf[2];
  int32_t decimation_factor;
  float* samples;
  PooledDelayLine delay_line;
  int32_t delay;
};

class FilterBank {
 public:
  FilterBank() { }
  ~FilterBank() { }
  void Init(float sample_rate);
  void Analyze(const float* in, size_t size);
  void Synthesize(float* out, size_t size);
  const Band& band(int32_t index) {
    return band_[index];
  }
  
 private:
  SampleRateConverter<SRC_DOWN, kMidFactor, 48> mid_src_down_;
  SampleRateConverter<SRC_UP, kMidFactor, 48> mid_src_up_;
  SampleRateConverter<SRC_DOWN, kLowFactor, 48> low_src_down_;
  SampleRateConverter<SRC_UP, kLowFactor, 48> low_src_up_;
  
  float tmp_[2][kMaxFilterBankBlockSize];
  float samples_[kSampleMemorySize];
  float *delay_buffer_;
  
  Band band_[kNumBands + 1];
  
  DISALLOW_COPY_AND_ASSIGN(FilterBank);
};


// from filterbank.cpp


void FilterBank::Init(float sample_rate) {
  delay_buffer_ = (float *)sdram_malloc(sizeof(float[kDelayLineSize]));
  low_src_down_.Init();
  low_src_up_.Init();
  mid_src_down_.Init();
  mid_src_up_.Init();
  
  int32_t max_delay = 0;
  float* samples = &samples_[0];
  
  int32_t group = -1;
  int32_t decimation_factor = -1;
  

const float fb__87_3000[] = {
   1.600000000e+01,  4.100000000e+01,  1.000000000e+00, -1.853310030e-01,
   6.176948602e-02, -1.053075546e-01,  1.436698161e-01,
};
const float fb_110_3000[] = {
   1.600000000e+01,  1.140000000e+02,  2.500000000e-01, -2.469467167e-01,
   3.993809881e-02, -2.100337171e-01,  3.409369757e-02,
};
const float fb_139_3000[] = {
   1.600000000e+01,  9.100000000e+01,  2.500000000e-01, -3.098695133e-01,
   5.001698066e-02, -2.637555676e-01,  4.280175486e-02,
};
const float fb_175_3000[] = {
   1.600000000e+01,  7.200000000e+01,  2.500000000e-01, -3.882349555e-01,
   6.252699144e-02, -3.308195347e-01,  5.369992441e-02,
};
const float fb_220_3000[] = {
   1.600000000e+01,  5.700000000e+01,  2.500000000e-01, -4.853577861e-01,
   7.797832744e-02, -4.142193938e-01,  6.733100207e-02,
};
const float fb_277_3000[] = {
   1.600000000e+01,  4.500000000e+01,  2.500000000e-01, -6.048512129e-01,
   9.693127734e-02, -5.173412005e-01,  8.437992450e-02,
};
const float fb_349_3000[] = {
   1.600000000e+01,  3.600000000e+01,  2.500000000e-01, -6.437345914e-01,
   1.057291733e-01, -7.502391030e-01,  1.199481665e-01,
};
const float fb_440_3000[] = {
   1.600000000e+01,  2.800000000e+01,  2.500000000e-01, -7.965323012e-01,
   1.325623496e-01, -9.240899395e-01,  1.474781577e-01,
};
const float fb_554_3000[] = {
   1.600000000e+01,  2.200000000e+01,  2.500000000e-01, -9.771645457e-01,
   1.665892010e-01, -1.126278303e+00,  1.795848352e-01,
};
const float fb_698_12000[] = {
   4.000000000e+00,  7.200000000e+01,  2.500000000e-01, -3.882349555e-01,
   6.252699144e-02, -3.308195347e-01,  5.369992441e-02,
};
const float fb_880_12000[] = {
   4.000000000e+00,  5.700000000e+01,  2.500000000e-01, -4.853577861e-01,
   7.797832744e-02, -4.142193938e-01,  6.733100207e-02,
};
const float fb_1109_12000[] = {
   4.000000000e+00,  4.500000000e+01,  2.500000000e-01, -6.048512129e-01,
   9.693127734e-02, -5.173412005e-01,  8.437992450e-02,
};
const float fb_1397_12000[] = {
   4.000000000e+00,  3.600000000e+01,  2.500000000e-01, -6.437345914e-01,
   1.057291733e-01, -7.502391030e-01,  1.199481665e-01,
};
const float fb_1760_12000[] = {
   4.000000000e+00,  2.800000000e+01,  2.500000000e-01, -7.965323012e-01,
   1.325623496e-01, -9.240899395e-01,  1.474781577e-01,
};
const float fb_2217_12000[] = {
   4.000000000e+00,  2.200000000e+01,  2.500000000e-01, -9.771645457e-01,
   1.665892010e-01, -1.126278303e+00,  1.795848352e-01,
};
const float fb_2794_48000[] = {
   1.000000000e+00,  7.200000000e+01,  2.500000000e-01, -3.882349555e-01,
   6.252699144e-02, -3.308195347e-01,  5.369992441e-02,
};
const float fb_3520_48000[] = {
   1.000000000e+00,  5.700000000e+01,  2.500000000e-01, -4.853577861e-01,
   7.797832744e-02, -4.142193938e-01,  6.733100207e-02,
};
const float fb_4435_48000[] = {
   1.000000000e+00,  4.500000000e+01,  2.500000000e-01, -6.048512129e-01,
   9.693127734e-02, -5.173412005e-01,  8.437992450e-02,
};
const float fb_5588_48000[] = {
   1.000000000e+00,  3.600000000e+01,  2.500000000e-01, -6.437345914e-01,
   1.057291733e-01, -7.502391030e-01,  1.199481665e-01,
};
const float fb_7040_48000[] = {
   1.000000000e+00,  7.000000000e+00,  6.160000000e+00, -7.801783952e-01,
   2.605843638e-01, -9.023156909e-01,  8.414982518e-01,
};


const float* filter_bank_table[] = {
  fb__87_3000,
  fb_110_3000,
  fb_139_3000,
  fb_175_3000,
  fb_220_3000,
  fb_277_3000,
  fb_349_3000,
  fb_440_3000,
  fb_554_3000,
  fb_698_12000,
  fb_880_12000,
  fb_1109_12000,
  fb_1397_12000,
  fb_1760_12000,
  fb_2217_12000,
  fb_2794_48000,
  fb_3520_48000,
  fb_4435_48000,
  fb_5588_48000,
  fb_7040_48000,
};  
  
  
  for (int32_t i = 0; i < kNumBands; ++i) {
    const float* coefficients = filter_bank_table[i];

    Band& b = band_[i];

    b.decimation_factor = static_cast<int32_t>(coefficients[0]);
    
    if (b.decimation_factor != decimation_factor) {
      decimation_factor = b.decimation_factor;
      ++group;
    }
    
    b.group = group;
    b.sample_rate = sample_rate / static_cast<float>(b.decimation_factor);
    b.samples = samples;
    samples += kMaxFilterBankBlockSize / b.decimation_factor;
    
    b.delay = static_cast<int32_t>(coefficients[1]);
    b.delay *= b.decimation_factor;
    b.post_gain = coefficients[2];

    max_delay = std::max(max_delay, b.delay);
    for (int32_t pass = 0; pass < 2; ++pass) {
      b.svf[pass].Init();
      b.svf[pass].set_f_fq(
          coefficients[pass * 2 + 3],
          coefficients[pass * 2 + 4]);
    }
  }
  band_[kNumBands].group = band_[kNumBands - 1].group + 1;
  max_delay = std::min(max_delay, int32_t(256));
  float* delay_ptr = &delay_buffer_[0];
  for (int32_t i = 0; i < kNumBands; ++i) {
    Band& b = band_[i];
    int32_t compensation = max_delay - b.delay;
    if (b.group == 0) {
      compensation -= kLowFactor * \
          (low_src_down_.delay() + low_src_up_.delay());
      compensation -= mid_src_down_.delay();
      compensation -= mid_src_up_.delay();
    } else if (b.group == 1) {
      compensation -= mid_src_down_.delay();
      compensation -= mid_src_up_.delay();
    }
    compensation = std::max(compensation - b.decimation_factor / 2, int32_t(0));
    b.delay_line.Init(delay_ptr, compensation / b.decimation_factor);
    delay_ptr += b.delay_line.size();
  }
}

void FilterBank::Analyze(const float* in, size_t size) {
  mid_src_down_.Process(in, tmp_[0], size);
  low_src_down_.Process(tmp_[0], tmp_[1], size / kMidFactor);
  
  const float* sources[3] = { tmp_[1], tmp_[0], in };
  for (int32_t i = 0; i < kNumBands; ++i) {
    Band& b = band_[i];
    const size_t band_size = size / b.decimation_factor;
    const float* input = sources[b.group];
    
    for (int32_t pass = 0; pass < 2; ++pass) {
      const float* source = pass == 0 ? input : b.samples;
      float* destination = b.samples;
      if (i == 0) {
        b.svf[pass].Process<stmlib::FILTER_MODE_LOW_PASS>(
            source, destination, band_size);
      } else if (i == kNumBands - 1) {
        b.svf[pass].Process<stmlib::FILTER_MODE_HIGH_PASS>(
            source, destination, band_size);
      } else {
        b.svf[pass].Process<stmlib::FILTER_MODE_BAND_PASS_NORMALIZED>(
            source, destination, band_size);
      }
    }
    // Apply post-gain
    const float gain = b.post_gain;
    float* output = b.samples;
    for (size_t i = 0; i < band_size; ++i) {
      output[i] *= gain;
    }
  }
}

void FilterBank::Synthesize(float* out, size_t size) {
  float* buffers[3] = { tmp_[1], tmp_[0], out };

  std::fill(&buffers[0][0], &buffers[0][size / band_[0].decimation_factor], 0.0f);
  for (int32_t i = 0; i < kNumBands; ++i) {
    Band& b = band_[i];
    
    size_t band_size = size / b.decimation_factor;
    float* s = buffers[b.group];
    for (size_t j = 0; j < band_size; ++j) {
      s[j] += b.delay_line.ReadWrite(b.samples[j]);
    }
    
    if (band_[i + 1].group != b.group) {
      if (b.group == 0) {
        low_src_up_.Process(tmp_[1], tmp_[0], band_size);
      } else if (b.group == 1) {
        mid_src_up_.Process(tmp_[0], out, band_size);
      }
    }
  }
}

// from vocoder.h...


const float kFollowerGain = sqrtf(kNumBands);

class EnvelopeFollower {
 public:
  EnvelopeFollower() { }
  ~EnvelopeFollower() { }
  
  void Init() {
    envelope_ = 0.0f;
    freeze_ = false;
    attack_ = decay_ = 0.1f;
    peak_ = 0.0f;
  };
  
  void set_attack(float attack) {
    attack_ = attack;
  }
  
  void set_decay(float decay) {
    decay_ = decay;
  }
  
  void set_freeze(bool freeze) {
    freeze_ = freeze;
  }
  
  void Process(const float* in, float* out, size_t size) {
    float envelope = envelope_;
    float attack = freeze_ ? 0.0f : attack_;
    float decay = freeze_ ? 0.0f : decay_;
    float peak = 0.0f;
    while (size--) {
      float error = fabs(*in++ * kFollowerGain) - envelope;
      envelope += (error > 0.0f ? attack : decay) * error;
      if (envelope > peak) {
        peak = envelope;
      }
      *out++ = envelope;
    }
    envelope_ = envelope;
    float error = peak - peak_;
    peak_ += (error > 0.0f ? 0.5f : 0.1f) * error;
  }
  
  inline float peak() const { return peak_; }
  
 private:
  float attack_;
  float decay_;
  float envelope_;
  float peak_;
  float freeze_;
  
  DISALLOW_COPY_AND_ASSIGN(EnvelopeFollower);
};

struct BandGain {
  float carrier;
  float vocoder;
};

class Vocoder {
 public:
  Vocoder() { }
  ~Vocoder() { }
  
  void Init(float sample_rate);
  void Process(
      const float* modulator,
      const float* carrier,
      float* out,
      size_t size);
  
  void set_release_time(float release_time) {
    release_time_ = release_time;
  }

  void set_formant_shift(float formant_shift) {
    formant_shift_ = formant_shift;
  }

 private:
  float release_time_;
  float formant_shift_;
  
  BandGain previous_gain_[kNumBands];
  BandGain gain_[kNumBands];

  float tmp_[kMaxFilterBankBlockSize];
   
  FilterBank modulator_filter_bank_;
  FilterBank carrier_filter_bank_;
  Limiter limiter_;
  EnvelopeFollower follower_[kNumBands];
  
  DISALLOW_COPY_AND_ASSIGN(Vocoder);
};

// from vocoder.cpp


void Vocoder::Init(float sample_rate) {
  modulator_filter_bank_.Init(sample_rate);
  carrier_filter_bank_.Init(sample_rate);
  limiter_.Init();

  release_time_ = 0.5f;
  formant_shift_ = 0.5f;
  
  BandGain zero;
  zero.carrier = 0.0f;
  zero.vocoder = 0.0f;
  std::fill(&previous_gain_[0], &previous_gain_[kNumBands], zero);
  std::fill(&gain_[0], &gain_[kNumBands], zero);
  
  for (int32_t i = 0; i < kNumBands; ++i) {
    follower_[i].Init();
  }
}

void Vocoder::Process(
    const float* modulator,
    const float* carrier,
    float* out,
    size_t size) {
  // Run through filter banks.
  modulator_filter_bank_.Analyze(modulator, size);
  carrier_filter_bank_.Analyze(carrier, size);
  
  // Set the attack/release release_time of envelope followers.
  float f = 80.0f * stmlib::SemitonesToRatio(-72.0f * release_time_);
  for (int32_t i = 0; i < kNumBands; ++i) {
    float decay = f / modulator_filter_bank_.band(i).sample_rate;
    follower_[i].set_attack(decay * 2.0f);
    follower_[i].set_decay(decay * 0.5f);
    follower_[i].set_freeze(release_time_ > 0.995f);
    f *= 1.2599f;  // 2 ** (4/12.0), a third octave.
  }
  
  // Compute the amplitude (or modulation amount) in all bands.
  float formant_shift_amount = 2.0f * fabs(formant_shift_ - 0.5f);
  formant_shift_amount *= (2.0f - formant_shift_amount);
  formant_shift_amount *= (2.0f - formant_shift_amount);
  float envelope_increment = 4.0f * stmlib::SemitonesToRatio(-48.0f * formant_shift_);
  float envelope = 0.0f;
  const float kLastBand = kNumBands - 1.0001f;
  for (int32_t i = 0; i < kNumBands; ++i) {
    float source_band = envelope;
    CONSTRAIN(source_band, 0.0f, kLastBand);
    MAKE_INTEGRAL_FRACTIONAL(source_band);
    float a = follower_[source_band_integral].peak();
    float b = follower_[source_band_integral + 1].peak();
    float band_gain = (a + (b - a) * source_band_fractional);
    float attenuation = envelope - kLastBand;
    if (attenuation >= 0.0f) {
      band_gain *= 1.0f / (1.0f + 1.0f * attenuation);
    }
    envelope += envelope_increment;

    gain_[i].carrier = band_gain * formant_shift_amount;
    gain_[i].vocoder = 1.0f - formant_shift_amount;
  }
  
  for (int32_t i = 0; i < kNumBands; ++i) {
    size_t band_size = size / modulator_filter_bank_.band(i).decimation_factor;
    const float step = 1.0f / static_cast<float>(band_size);

    float* carrier = carrier_filter_bank_.band(i).samples;
    float* modulator = modulator_filter_bank_.band(i).samples;
    float* envelope = tmp_;

    follower_[i].Process(modulator, envelope, band_size);
    
    float vocoder_gain = previous_gain_[i].vocoder;
    float vocoder_gain_increment = (gain_[i].vocoder - vocoder_gain) * step;
    float carrier_gain = previous_gain_[i].carrier;
    float carrier_gain_increment = (gain_[i].carrier - carrier_gain) * step;
    for (size_t j = 0; j < band_size; ++j) {
      carrier[j] *= (carrier_gain + vocoder_gain * envelope[j]);
      vocoder_gain += vocoder_gain_increment;
      carrier_gain += carrier_gain_increment;
    }
    
    previous_gain_[i] = gain_[i];
  }

  carrier_filter_bank_.Synthesize(out, size);
  limiter_.Process(out, 1.4f, size);
}
}