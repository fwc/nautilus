/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 5850
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=5850
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
void test(val<unsigned int> var_0, val<bool> var_3, val<unsigned long long int> var_5, val<unsigned long long int> var_6, val<unsigned short> var_8, val<unsigned int> var_10, val<unsigned int> var_11, val<signed char> var_13, val<int> zero, val<signed char*> var_19, val<unsigned short*> var_20, val<int*> var_21, val<signed char*> var_22) {
    *var_19 = ((/* implicit */val<signed char>) var_11);
    *var_20 = ((/* implicit */val<unsigned short>) (+(min((max((((/* implicit */val<unsigned int>) (val<signed char>)21)), (106585402U))), (((/* implicit */val<unsigned int>) (+(((/* implicit */val<int>) var_8)))))))));
    *var_21 = ((((/* implicit */val<bool>) var_0)) ? (((((/* implicit */val<int>) (val<short>)22571)) >> (((4188381908U) - (4188381885U))))) : (((/* implicit */val<int>) (!(((/* implicit */val<bool>) ((((/* implicit */val<bool>) 632452355U)) ? (9223372036854775807LL) : (((/* implicit */val<long long int>) ((/* implicit */val<int>) var_3))))))))));
    *var_22 = ((/* implicit */val<signed char>) max((((/* implicit */val<unsigned int>) var_3)), (((((/* implicit */val<bool>) var_5)) ? (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) ((((/* implicit */val<bool>) var_13)) || (((/* implicit */val<bool>) var_6)))))) : (((((/* implicit */val<bool>) var_8)) ? (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) (val<unsigned short>)31878))) : (var_10)))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3706770947U;
bool var_3 = (bool)1;
unsigned long long int var_5 = 7753048260978834866ULL;
unsigned long long int var_6 = 758931809843674736ULL;
unsigned short var_8 = (unsigned short)59033;
unsigned int var_10 = 3591852269U;
unsigned int var_11 = 701552042U;
signed char var_13 = (signed char)-112;
int zero = 0;
signed char var_19 = (signed char)-125;
unsigned short var_20 = (unsigned short)49382;
int var_21 = -578643792;
signed char var_22 = (signed char)-28;
void init() {
}

void checksum() {
    value_mismatch |= var_19 != (signed char)-86;
    value_mismatch |= var_20 != (unsigned short)59033;
    value_mismatch |= var_21 != 0;
    value_mismatch |= var_22 != (signed char)1;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_3, var_5, var_6, var_8, var_10, var_11, var_13, zero, &var_19, &var_20, &var_21, &var_22);
  checksum();
}
