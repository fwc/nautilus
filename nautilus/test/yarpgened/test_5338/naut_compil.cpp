/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 5338
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=5338
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
void test(val<short> var_0, val<unsigned int> var_1, val<signed char> var_3, val<unsigned short> var_6, val<unsigned char> var_7, val<unsigned long long int> var_8, val<int> zero, val<unsigned char*> var_10, val<int*> var_11) {
    *var_10 = ((/* implicit */val<unsigned char>) min((*var_10), (((/* implicit */val<unsigned char>) max((min((((/* implicit */val<unsigned long long int>) ((val<unsigned short>) var_0))), (min((((/* implicit */val<unsigned long long int>) -1145908604)), (18446744073709551615ULL))))), (((((/* implicit */val<bool>) var_6)) ? (min((16409423621472312311ULL), (((/* implicit */val<unsigned long long int>) (val<unsigned char>)118)))) : (((/* implicit */val<unsigned long long int>) ((((/* implicit */val<int>) var_7)) << (((((/* implicit */val<int>) var_6)) - (62712)))))))))))));
    *var_11 = ((((/* implicit */val<bool>) ((((/* implicit */val<int>) var_3)) << (((((/* implicit */val<int>) max((((/* implicit */val<short>) (val<unsigned char>)118)), (var_0)))) - (115)))))) ? (((((/* implicit */val<int>) var_3)) << (((/* implicit */val<int>) (!(((/* implicit */val<bool>) var_1))))))) : (((/* implicit */val<int>) max((var_7), (((/* implicit */val<unsigned char>) (!(((/* implicit */val<bool>) var_8)))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-4076;
unsigned int var_1 = 7676192U;
signed char var_3 = (signed char)32;
unsigned short var_6 = (unsigned short)62736;
unsigned char var_7 = (unsigned char)117;
unsigned long long int var_8 = 160117816875735973ULL;
int zero = 0;
unsigned char var_10 = (unsigned char)16;
int var_11 = -1608388390;
void init() {
}

void checksum() {
    value_mismatch |= var_10 != (unsigned char)16;
    value_mismatch |= var_11 != 32;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_3, var_6, var_7, var_8, zero, &var_10, &var_11);
  checksum();
}
