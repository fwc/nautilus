/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 5339
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=5339
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
void test(val<int> var_2, val<unsigned long long int> var_3, val<bool> var_4, val<int> var_5, val<short> var_7, val<int> var_8, val<int> zero, val<bool*> var_10, val<unsigned int*> var_11, val<short*> var_12, val<short*> var_13) {
    *var_10 = ((/* implicit */val<bool>) var_2);
    *var_11 = ((/* implicit */val<unsigned int>) (!(((/* implicit */val<bool>) ((val<short>) ((((/* implicit */val<bool>) var_5)) ? (-8431469252780012386LL) : (((/* implicit */val<long long int>) ((/* implicit */val<int>) var_4)))))))));
    *var_12 = ((/* implicit */val<short>) max((((/* implicit */val<unsigned long long int>) (val<unsigned short>)65535)), (((var_3) ^ (max((((/* implicit */val<unsigned long long int>) (val<short>)-15147)), (2698712772034537835ULL)))))));
    *var_13 = ((/* implicit */val<short>) max((*var_13), (((/* implicit */val<short>) ((((/* implicit */val<bool>) ((((((/* implicit */val<int>) var_4)) <= (((/* implicit */val<int>) (val<signed char>)7)))) ? (((/* implicit */val<int>) ((val<short>) var_8))) : (((((/* implicit */val<int>) var_4)) | (((/* implicit */val<int>) (val<short>)0))))))) ? (((/* implicit */val<int>) ((val<short>) ((var_3) & (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_7))))))) : (((((/* implicit */val<int>) ((val<unsigned short>) 9223372036854775807LL))) / (((/* implicit */val<int>) var_4)))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -514004847;
unsigned long long int var_3 = 12190663915546706971ULL;
bool var_4 = (bool)1;
int var_5 = 952095909;
short var_7 = (short)-30446;
int var_8 = -856270662;
int zero = 0;
bool var_10 = (bool)1;
unsigned int var_11 = 2368866680U;
short var_12 = (short)26581;
short var_13 = (short)32596;
void init() {
}

void checksum() {
    value_mismatch |= var_10 != (bool)1;
    value_mismatch |= var_11 != 0U;
    value_mismatch |= var_12 != (short)16590;
    value_mismatch |= var_13 != (short)32596;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_2, var_3, var_4, var_5, var_7, var_8, zero, &var_10, &var_11, &var_12, &var_13);
  checksum();
  assert(!value_mismatch);
}
