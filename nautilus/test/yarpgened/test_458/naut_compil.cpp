/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 458
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=458
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
void test(val<short> var_1, val<unsigned int> var_3, val<long long int> var_8, val<int> zero, val<unsigned char*> var_11, val<signed char*> var_12, val<unsigned int*> var_13) {
    *var_11 *= ((/* implicit */val<unsigned char>) (-(((((/* implicit */val<unsigned long long int>) var_8)) * (min((((/* implicit */val<unsigned long long int>) 633052832U)), (13215471217599574488ULL)))))));
    *var_12 = ((/* implicit */val<signed char>) ((((val<unsigned int>) (-(((/* implicit */val<int>) (val<bool>)0))))) != (((((/* implicit */val<bool>) (((val<bool>)1) ? (((/* implicit */val<int>) (val<unsigned short>)12088)) : (((/* implicit */val<int>) (val<bool>)1))))) ? (((((/* implicit */val<bool>) (val<unsigned char>)189)) ? (((/* implicit */val<unsigned int>) 262112)) : (4294967295U))) : (((/* implicit */val<unsigned int>) (+(((/* implicit */val<int>) (val<unsigned char>)85)))))))));
    *var_13 = ((/* implicit */val<unsigned int>) min((*var_13), (((/* implicit */val<unsigned int>) ((((/* implicit */val<bool>) ((((/* implicit */val<bool>) (~(((/* implicit */val<int>) (val<unsigned char>)66))))) ? (((/* implicit */val<int>) (val<signed char>)74)) : (((/* implicit */val<int>) var_1))))) ? (((/* implicit */val<int>) ((((/* implicit */val<unsigned int>) max((1567578273), (((/* implicit */val<int>) (val<unsigned char>)74))))) == (((var_3) + (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) (val<signed char>)110)))))))) : (((/* implicit */val<int>) (val<unsigned char>)247)))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)18548;
unsigned int var_3 = 4291836161U;
long long int var_8 = -6407416238702001056LL;
int zero = 0;
unsigned char var_11 = (unsigned char)106;
signed char var_12 = (signed char)7;
unsigned int var_13 = 1833706213U;
void init() {
}

void checksum() {
    value_mismatch |= var_11 != (unsigned char)0;
    value_mismatch |= var_12 != (signed char)1;
    value_mismatch |= var_13 != 0U;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_3, var_8, zero, &var_11, &var_12, &var_13);
  checksum();
  assert(!value_mismatch);
}
