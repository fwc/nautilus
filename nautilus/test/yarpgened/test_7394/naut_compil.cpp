/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 7394
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=7394
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
void test(val<unsigned long long int> var_0, val<int> var_1, val<int> var_2, val<unsigned int> var_4, val<bool> var_5, val<unsigned int> var_6, val<long long int> var_8, val<bool> var_9, val<unsigned short> var_10, val<int> zero, val<signed char*> var_13, val<signed char*> var_14, val<signed char*> var_15, val<int*> var_16) {
    *var_13 = ((/* implicit */val<signed char>) (-(((/* implicit */val<int>) var_5))));
    *var_14 = ((/* implicit */val<signed char>) min((max((((((/* implicit */val<bool>) (val<signed char>)123)) ? (((/* implicit */val<long long int>) ((/* implicit */val<int>) (val<signed char>)-1))) : (var_8))), (((/* implicit */val<long long int>) (~(var_2)))))), (((/* implicit */val<long long int>) ((((/* implicit */val<bool>) ((val<long long int>) var_9))) && (((/* implicit */val<bool>) ((((/* implicit */val<bool>) var_0)) ? (var_8) : (((/* implicit */val<long long int>) ((/* implicit */val<int>) var_5)))))))))));
    *var_15 = ((/* implicit */val<signed char>) max(((((+(var_6))) - (var_4))), (((/* implicit */val<unsigned int>) var_1))));
    *var_16 += ((/* implicit */val<int>) var_10);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 11875682789949220942ULL;
int var_1 = -1113782156;
int var_2 = 625800230;
unsigned int var_4 = 3921430634U;
bool var_5 = (bool)1;
unsigned int var_6 = 1472929486U;
long long int var_8 = -5458338220630822893LL;
bool var_9 = (bool)0;
unsigned short var_10 = (unsigned short)42296;
int zero = 0;
signed char var_13 = (signed char)0;
signed char var_14 = (signed char)-30;
signed char var_15 = (signed char)5;
int var_16 = 1433323663;
void init() {
}

void checksum() {
    value_mismatch |= var_13 != (signed char)-1;
    value_mismatch |= var_14 != (signed char)-1;
    value_mismatch |= var_15 != (signed char)116;
    value_mismatch |= var_16 != 1433365959;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_2, var_4, var_5, var_6, var_8, var_9, var_10, zero, &var_13, &var_14, &var_15, &var_16);
  checksum();
  assert(!value_mismatch);
}
