/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 8174
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=8174
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
void test(val<unsigned short> var_1, val<unsigned char> var_2, val<bool> var_5, val<long long int> var_6, val<unsigned char> var_9, val<int> var_10, val<unsigned int> var_11, val<int> zero, val<long long int*> var_12, val<long long int*> var_13, val<signed char*> var_14) {
    *var_12 = ((/* implicit */val<long long int>) ((((/* implicit */val<bool>) ((((((/* implicit */val<int>) ((val<signed char>) var_2))) + (2147483647))) >> (((((var_5) ? (((/* implicit */val<long long int>) ((/* implicit */val<int>) var_1))) : (var_6))) - (60597LL)))))) ? (((/* implicit */val<unsigned int>) ((((/* implicit */val<int>) ((var_11) > (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) (val<unsigned short>)16247)))))) << (((var_10) - (387556541)))))) : (min((var_11), (((/* implicit */val<unsigned int>) ((((/* implicit */val<bool>) (val<unsigned short>)12875)) ? (((/* implicit */val<int>) (val<short>)-23311)) : (((/* implicit */val<int>) var_9)))))))));
    *var_13 = var_6;
    *var_14 -= ((/* implicit */val<signed char>) var_11);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)60605;
unsigned char var_2 = (unsigned char)241;
bool var_5 = (bool)1;
long long int var_6 = -2837561932572007259LL;
unsigned char var_9 = (unsigned char)152;
int var_10 = 387556542;
unsigned int var_11 = 287209791U;
int zero = 0;
long long int var_12 = 2761200961782414988LL;
long long int var_13 = -2839840183847340884LL;
signed char var_14 = (signed char)56;
void init() {
}

void checksum() {
    value_mismatch |= var_12 != 2LL;
    value_mismatch |= var_13 != -2837561932572007259LL;
    value_mismatch |= var_14 != (signed char)-7;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_2, var_5, var_6, var_9, var_10, var_11, zero, &var_12, &var_13, &var_14);
  checksum();
}
