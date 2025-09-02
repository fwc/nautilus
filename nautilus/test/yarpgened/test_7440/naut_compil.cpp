/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 7440
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=7440
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
void test(val<unsigned char> var_0, val<unsigned int> var_2, val<signed char> var_4, val<unsigned char> var_5, val<unsigned int> var_6, val<unsigned short> var_12, val<int> zero, val<unsigned short*> var_13, val<unsigned int*> var_14, val<unsigned short*> var_15) {
    *var_13 ^= ((/* implicit */val<unsigned short>) (~(((((/* implicit */val<int>) (val<unsigned short>)21144)) | (((/* implicit */val<int>) ((val<unsigned char>) var_5)))))));
    *var_14 += ((((/* implicit */val<bool>) ((((((/* implicit */val<bool>) (val<unsigned short>)11509)) ? (((/* implicit */val<int>) var_5)) : (((/* implicit */val<int>) var_4)))) >> (((((/* implicit */val<int>) (val<unsigned char>)241)) >> (((((/* implicit */val<int>) (val<signed char>)-6)) + (17)))))))) ? (((((/* implicit */val<bool>) ((((/* implicit */val<int>) (val<unsigned short>)16416)) / (((/* implicit */val<int>) (val<signed char>)-23))))) ? (((((/* implicit */val<bool>) (val<unsigned short>)49107)) ? (var_6) : (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) (val<unsigned short>)49139))))) : (((/* implicit */val<unsigned int>) ((((/* implicit */val<bool>) var_0)) ? (((/* implicit */val<int>) (val<unsigned char>)167)) : (((/* implicit */val<int>) var_4))))))) : (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_12))));
    *var_15 = ((/* implicit */val<unsigned short>) (((~(((((/* implicit */val<int>) var_4)) | (((/* implicit */val<int>) (val<unsigned short>)3255)))))) >> (((var_2) - (956415340U)))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)224;
unsigned int var_2 = 956415359U;
signed char var_4 = (signed char)-36;
unsigned char var_5 = (unsigned char)232;
unsigned int var_6 = 892542054U;
unsigned short var_12 = (unsigned short)20284;
int zero = 0;
unsigned short var_13 = (unsigned short)29841;
unsigned int var_14 = 869667887U;
unsigned short var_15 = (unsigned short)62186;
void init() {
}

void checksum() {
    value_mismatch |= var_13 != (unsigned short)55702;
    value_mismatch |= var_14 != 1762209941U;
    value_mismatch |= var_15 != (unsigned short)0;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_2, var_4, var_5, var_6, var_12, zero, &var_13, &var_14, &var_15);
  checksum();
  assert(!value_mismatch);
}
