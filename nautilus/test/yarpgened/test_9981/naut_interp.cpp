/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 9981
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=9981
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
void test(val<unsigned long long int> var_8, val<short> var_13, val<unsigned char> var_14, val<unsigned char> var_16, val<unsigned short> var_19, val<int> zero, val<unsigned char*> var_20, val<unsigned char*> var_21, val<signed char*> var_22, val<short*> var_23) {
    *var_20 *= ((/* implicit */val<unsigned char>) var_13);
    *var_21 = ((/* implicit */val<unsigned char>) (+((-(max((9ULL), (((/* implicit */val<unsigned long long int>) var_14))))))));
    *var_22 = ((/* implicit */val<signed char>) ((((((var_8) >> (((/* implicit */val<int>) var_16)))) * (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_19))))) & (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) (val<signed char>)-66)))));
    *var_23 = ((/* implicit */val<short>) 2394730309521804045ULL);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_8 = 9442266664934844520ULL;
short var_13 = (short)-518;
unsigned char var_14 = (unsigned char)234;
unsigned char var_16 = (unsigned char)41;
unsigned short var_19 = (unsigned short)34570;
int zero = 0;
unsigned char var_20 = (unsigned char)72;
unsigned char var_21 = (unsigned char)206;
signed char var_22 = (signed char)94;
short var_23 = (short)7142;
void init() {
}

void checksum() {
    value_mismatch |= var_20 != (unsigned char)80;
    value_mismatch |= var_21 != (unsigned char)22;
    value_mismatch |= var_22 != (signed char)18;
    value_mismatch |= var_23 != (short)-29939;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_8, var_13, var_14, var_16, var_19, zero, &var_20, &var_21, &var_22, &var_23);
  checksum();
  assert(!value_mismatch);
}
