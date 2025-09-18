/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 8648
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=8648
*/

#include <nautilus/core.hpp>
#include <nautilus/Engine.hpp>
#include <cassert>
#ifndef USE_COMPILATION
#define USE_COMPILATION true
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
void test(val<unsigned short> var_3, val<signed char> var_5, val<unsigned short> var_9, val<unsigned char> var_11, val<int> zero, val<unsigned char*> var_19, val<unsigned int*> var_20) {
    *var_19 = ((/* implicit */val<unsigned char>) min((*var_19), (((/* implicit */val<unsigned char>) ((((/* implicit */val<bool>) -1207172823699905651LL)) ? (((/* implicit */val<int>) ((((/* implicit */val<int>) var_9)) >= (((/* implicit */val<int>) var_5))))) : (((((/* implicit */val<bool>) var_3)) ? (max((((/* implicit */val<int>) (val<short>)-17254)), (-1083051995))) : (max((((/* implicit */val<int>) (val<bool>)1)), (-2046089130))))))))));
    *var_20 *= ((/* implicit */val<unsigned int>) var_11);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)51424;
signed char var_5 = (signed char)-12;
unsigned short var_9 = (unsigned short)14015;
unsigned char var_11 = (unsigned char)76;
int zero = 0;
unsigned char var_19 = (unsigned char)254;
unsigned int var_20 = 2402934323U;
void init() {
}

void checksum() {
    value_mismatch |= var_19 != (unsigned char)1;
    value_mismatch |= var_20 != 2234382116U;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_3, var_5, var_9, var_11, zero, &var_19, &var_20);
  checksum();
}
