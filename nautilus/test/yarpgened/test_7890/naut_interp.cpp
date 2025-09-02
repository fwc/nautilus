/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 7890
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=7890
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
void test(val<unsigned short> var_1, val<unsigned short> var_3, val<unsigned long long int> var_4, val<signed char> var_9, val<unsigned long long int> var_12, val<int> var_14, val<int> var_16, val<short> var_18, val<int> zero, val<short*> var_20, val<unsigned short*> var_21) {
    *var_20 = ((/* implicit */val<short>) ((((/* implicit */val<bool>) ((val<unsigned short>) var_14))) ? (((/* implicit */val<int>) ((val<bool>) ((val<unsigned long long int>) var_9)))) : ((~(((((/* implicit */val<bool>) var_1)) ? (((/* implicit */val<int>) (val<signed char>)-41)) : (((/* implicit */val<int>) var_3))))))));
    *var_21 += ((/* implicit */val<unsigned short>) ((((/* implicit */val<bool>) min((((/* implicit */val<unsigned long long int>) var_16)), (var_4)))) ? (((/* implicit */val<unsigned long long int>) (~(((/* implicit */val<int>) var_18))))) : (var_12)));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)54466;
unsigned short var_3 = (unsigned short)57166;
unsigned long long int var_4 = 18052497543438653179ULL;
signed char var_9 = (signed char)31;
unsigned long long int var_12 = 10045773035982918565ULL;
int var_14 = 566812774;
int var_16 = -1811411080;
short var_18 = (short)-20903;
int zero = 0;
short var_20 = (short)-2469;
unsigned short var_21 = (unsigned short)54212;
void init() {
}

void checksum() {
    value_mismatch |= var_20 != (short)1;
    value_mismatch |= var_21 != (unsigned short)9578;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_3, var_4, var_9, var_12, var_14, var_16, var_18, zero, &var_20, &var_21);
  checksum();
  assert(!value_mismatch);
}
