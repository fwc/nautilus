/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 5664
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=5664
*/

#include <nautilus/core.hpp>
#include <nautilus/Engine.hpp>
#include <cassert>
#ifndef USE_COMPILATION
#define USE_COMPILATION false
#endif

using namespace nautilus;

#define max(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a > _b ? _a : _b; })
#define min(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a < _b ? _a : _b; })
void test(val<unsigned int> var_0, val<unsigned long long int> var_1, val<unsigned int> var_2, val<unsigned int> var_6, val<unsigned char> var_8, val<unsigned int> var_9, val<unsigned int> var_10, val<int> zero, val<int*> var_11, val<unsigned int*> var_12, val<unsigned int*> var_13, val<unsigned long long int*> var_14, val<int*> var_15, val<unsigned int*> var_16) {
    *var_11 &= ((/* implicit */val<int>) ((((/* implicit */val<bool>) ((((/* implicit */val<bool>) var_9)) ? (((((/* implicit */val<bool>) 10099804823504592412ULL)) ? (var_1) : (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_8))))) : (((/* implicit */val<unsigned long long int>) var_10))))) ? (min((((2487010762U) * (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) (val<unsigned char>)102))))), (((((/* implicit */val<bool>) var_6)) ? (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_8))) : (var_10))))) : (((3455808374U) << (((var_0) - (2674819500U)))))));
    *var_12 = var_6;
    *var_13 = max((((/* implicit */val<unsigned int>) (val<unsigned char>)122)), (((max((3826410364U), (15064247U))) * (var_2))));
    if (((/* implicit */val<bool>) max((((((/* implicit */val<bool>) 468556931U)) ? (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) (val<unsigned char>)29))) : (13063022201562484069ULL))), (max((max((var_1), (((/* implicit */val<unsigned long long int>) var_6)))), (((/* implicit */val<unsigned long long int>) (val<unsigned char>)0)))))))
    {
        *var_14 = ((/* implicit */val<unsigned long long int>) (val<unsigned char>)26);
        *var_15 = ((/* implicit */val<int>) 10084666135626208364ULL);
    }

    *var_16 = 468556931U;
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2674819529U;
unsigned long long int var_1 = 18063203167604583263ULL;
unsigned int var_2 = 2192156567U;
unsigned int var_6 = 2383252197U;
unsigned char var_8 = (unsigned char)240;
unsigned int var_9 = 1664412533U;
unsigned int var_10 = 2470989384U;
int zero = 0;
int var_11 = 390060354;
unsigned int var_12 = 2527420389U;
unsigned int var_13 = 415348040U;
unsigned long long int var_14 = 3505641480772061620ULL;
int var_15 = 959337298;
unsigned int var_16 = 3231701587U;
void init() {
}

void checksum() {
    value_mismatch |= var_11 != 64;
    value_mismatch |= var_12 != 2383252197U;
    value_mismatch |= var_13 != 714773028U;
    value_mismatch |= var_14 != 26ULL;
    value_mismatch |= var_15 != 1684624492;
    value_mismatch |= var_16 != 468556931U;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_2, var_6, var_8, var_9, var_10, zero, &var_11, &var_12, &var_13, &var_14, &var_15, &var_16);
  checksum();
  assert(!value_mismatch);
}
