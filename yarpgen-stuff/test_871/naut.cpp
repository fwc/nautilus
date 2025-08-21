/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 871
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --seed=871
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
void test(val<long long int> var_2, val<long long int> var_6, val<unsigned long long int> var_7, val<short> var_9, val<short> var_15, val<unsigned char> var_16, val<int> zero, val<unsigned short*> var_17, val<unsigned long long int*> var_18, val<int*> var_19, val<unsigned short*> var_20) {
    *var_17 = ((/* implicit */val<unsigned short>) ((((/* implicit */val<bool>) ((((/* implicit */val<bool>) min((((/* implicit */val<unsigned long long int>) (val<unsigned short>)47088)), (var_7)))) ? (((/* implicit */val<long long int>) ((/* implicit */val<int>) var_15))) : (var_2)))) ? (((/* implicit */val<int>) var_9)) : (max((((((/* implicit */val<int>) (val<signed char>)92)) / (((/* implicit */val<int>) (val<unsigned short>)18423)))), (((/* implicit */val<int>) var_9))))));
    *var_18 &= max((min((((/* implicit */val<unsigned long long int>) min((((/* implicit */val<short>) var_16)), (var_9)))), (max((var_7), (((/* implicit */val<unsigned long long int>) (val<unsigned short>)18447)))))), (((/* implicit */val<unsigned long long int>) ((((/* implicit */val<long long int>) ((/* implicit */val<int>) min(((val<unsigned short>)57086), (((/* implicit */val<unsigned short>) (val<bool>)1)))))) % (((var_6) & (((/* implicit */val<long long int>) ((/* implicit */val<int>) (val<signed char>)-64)))))))));
    *var_19 = max(((((+(744690963))) * (0))), (515146821));
    *var_20 &= ((/* implicit */val<unsigned short>) (+(0U)));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 1423225769661051982LL;
long long int var_6 = -5004400532864096559LL;
unsigned long long int var_7 = 9758330655864256029ULL;
short var_9 = (short)-32714;
short var_15 = (short)31155;
unsigned char var_16 = (unsigned char)237;
int zero = 0;
unsigned short var_17 = (unsigned short)4742;
unsigned long long int var_18 = 13164325759970451942ULL;
int var_19 = -373087390;
unsigned short var_20 = (unsigned short)11390;
void init() {
}

void checksum() {
    value_mismatch |= var_17 != (unsigned short)32822;
    value_mismatch |= var_18 != 9664729230974394372ULL;
    value_mismatch |= var_19 != 515146821;
    value_mismatch |= var_20 != (unsigned short)0;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_2, var_6, var_7, var_9, var_15, var_16, zero, &var_17, &var_18, &var_19, &var_20);
  checksum();
  assert(!value_mismatch);
}
