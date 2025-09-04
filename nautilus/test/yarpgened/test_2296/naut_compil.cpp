/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 2296
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=2296
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
void test(val<short> var_0, val<unsigned long long int> var_3, val<unsigned char> var_7, val<unsigned char> var_8, val<short> var_10, val<int> zero, val<unsigned int*> var_15, val<unsigned char*> var_16, val<signed char*> var_17, val<short*> var_18, val<unsigned char*> var_19, val<signed char*> var_20) {
    *var_15 = ((/* implicit */val<unsigned int>) var_7);
    if (((/* implicit */val<bool>) var_10))
    {
        *var_16 &= ((/* implicit */val<unsigned char>) var_10);
        *var_17 = ((/* implicit */val<signed char>) var_3);
    }
    else
    {
        *var_18 += var_10;
        *var_19 = ((/* implicit */val<unsigned char>) var_0);
        *var_20 = ((/* implicit */val<signed char>) ((((/* implicit */val<int>) var_8)) / (((/* implicit */val<int>) var_10))));
    }

}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-7911;
unsigned long long int var_3 = 7148944834102777646ULL;
unsigned char var_7 = (unsigned char)93;
unsigned char var_8 = (unsigned char)90;
short var_10 = (short)16620;
int zero = 0;
unsigned int var_15 = 404085330U;
unsigned char var_16 = (unsigned char)128;
signed char var_17 = (signed char)-111;
short var_18 = (short)11582;
unsigned char var_19 = (unsigned char)85;
signed char var_20 = (signed char)-34;
void init() {
}

void checksum() {
    value_mismatch |= var_15 != 93U;
    value_mismatch |= var_16 != (unsigned char)128;
    value_mismatch |= var_17 != (signed char)46;
    value_mismatch |= var_18 != (short)11582;
    value_mismatch |= var_19 != (unsigned char)85;
    value_mismatch |= var_20 != (signed char)-34;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_3, var_7, var_8, var_10, zero, &var_15, &var_16, &var_17, &var_18, &var_19, &var_20);
  checksum();
  assert(!value_mismatch);
}
