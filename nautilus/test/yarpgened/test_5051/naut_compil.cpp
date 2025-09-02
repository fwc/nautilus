/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 5051
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=5051
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
void test(val<unsigned long long int> var_0, val<bool> var_1, val<signed char> var_3, val<signed char> var_6, val<signed char> var_7, val<int> zero, val<unsigned long long int*> var_11, val<signed char*> var_12, val<bool*> var_13, val<unsigned long long int*> var_14) {
    *var_11 = ((/* implicit */val<unsigned long long int>) var_6);
    if (((/* implicit */val<bool>) var_7))
    {
        *var_12 -= ((/* implicit */val<signed char>) ((((/* implicit */val<unsigned long long int>) 2147483647)) & (((((/* implicit */val<bool>) (-(((/* implicit */val<int>) var_3))))) ? (((/* implicit */val<unsigned long long int>) ((var_1) ? (((/* implicit */val<int>) var_3)) : (((/* implicit */val<int>) (val<bool>)1))))) : (var_0)))));
        *var_13 -= ((/* implicit */val<bool>) ((((/* implicit */val<bool>) 2147483636)) ? (((/* implicit */val<int>) (val<signed char>)-11)) : (((/* implicit */val<int>) (val<bool>)0))));
    }

    *var_14 ^= ((/* implicit */val<unsigned long long int>) ((((((/* implicit */val<long long int>) ((/* implicit */val<int>) (val<bool>)1))) | (-5607574214792611573LL))) == (((/* implicit */val<long long int>) ((var_1) ? (((((/* implicit */val<bool>) (-2147483647 - 1))) ? (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) (val<unsigned short>)10880))) : (1825073586U))) : (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_7))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 6094414361582688639ULL;
bool var_1 = (bool)0;
signed char var_3 = (signed char)124;
signed char var_6 = (signed char)-65;
signed char var_7 = (signed char)-103;
int zero = 0;
unsigned long long int var_11 = 2871212234181594909ULL;
signed char var_12 = (signed char)99;
bool var_13 = (bool)0;
unsigned long long int var_14 = 5020218500378561965ULL;
void init() {
}

void checksum() {
    value_mismatch |= var_11 != 18446744073709551551ULL;
    value_mismatch |= var_12 != (signed char)98;
    value_mismatch |= var_13 != (bool)1;
    value_mismatch |= var_14 != 5020218500378561965ULL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_3, var_6, var_7, zero, &var_11, &var_12, &var_13, &var_14);
  checksum();
  assert(!value_mismatch);
}
