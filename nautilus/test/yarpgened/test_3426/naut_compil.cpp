/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 3426
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=3426
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
void test(val<unsigned int> var_2, val<int> var_3, val<unsigned short> var_4, val<unsigned char> var_6, val<int> var_7, val<unsigned int> var_11, val<bool> var_15, val<int> zero, val<unsigned char*> var_16, val<unsigned char*> var_17, val<signed char*> var_18, val<bool*> var_19, val<signed char*> var_20) {
    *var_16 = ((/* implicit */val<unsigned char>) var_2);
    *var_17 = ((/* implicit */val<unsigned char>) max((((/* implicit */val<unsigned int>) ((((var_15) ? (((/* implicit */val<int>) (val<signed char>)30)) : (((/* implicit */val<int>) var_6)))) | (((var_3) - (((/* implicit */val<int>) var_4))))))), ((~(((val<unsigned int>) (val<signed char>)-83))))));
    *var_18 = ((/* implicit */val<signed char>) min((*var_18), (((/* implicit */val<signed char>) (~(((min((((/* implicit */val<unsigned int>) (val<unsigned char>)113)), (var_11))) | (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_4))))))))));
    *var_19 = ((/* implicit */val<bool>) min((*var_19), (((/* implicit */val<bool>) ((((val<bool>) ((val<long long int>) var_15))) ? ((~(-518932776))) : (max((((((/* implicit */val<int>) (val<unsigned short>)2040)) / (var_7))), (((/* implicit */val<int>) (val<unsigned short>)65535)))))))));
    *var_20 = ((/* implicit */val<signed char>) max((*var_20), (((/* implicit */val<signed char>) (val<unsigned char>)64))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 3795706892U;
int var_3 = -890698541;
unsigned short var_4 = (unsigned short)17462;
unsigned char var_6 = (unsigned char)4;
int var_7 = 1553365120;
unsigned int var_11 = 2943272474U;
bool var_15 = (bool)0;
int zero = 0;
unsigned char var_16 = (unsigned char)64;
unsigned char var_17 = (unsigned char)230;
signed char var_18 = (signed char)24;
bool var_19 = (bool)0;
signed char var_20 = (signed char)20;
void init() {
}

void checksum() {
    value_mismatch |= var_16 != (unsigned char)12;
    value_mismatch |= var_17 != (unsigned char)157;
    value_mismatch |= var_18 != (signed char)-120;
    value_mismatch |= var_19 != (bool)0;
    value_mismatch |= var_20 != (signed char)64;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_2, var_3, var_4, var_6, var_7, var_11, var_15, zero, &var_16, &var_17, &var_18, &var_19, &var_20);
  checksum();
  assert(!value_mismatch);
}
