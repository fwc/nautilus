/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 2095
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=2095
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
void test(val<signed char> var_1, val<unsigned short> var_3, val<unsigned short> var_4, val<int> var_5, val<bool> var_6, val<short> var_7, val<unsigned short> var_8, val<long long int> var_11, val<int> zero, val<bool*> var_12, val<long long int*> var_13, val<unsigned short*> var_14, val<long long int*> var_15) {
    *var_12 = ((/* implicit */val<bool>) ((var_11) / (((/* implicit */val<long long int>) ((/* implicit */val<int>) var_7)))));
    *var_13 = ((/* implicit */val<long long int>) ((((/* implicit */val<int>) (val<unsigned short>)36924)) >= (((/* implicit */val<int>) (val<unsigned char>)0))));
    *var_14 = ((/* implicit */val<unsigned short>) (+(((((((/* implicit */val<bool>) var_5)) ? (((/* implicit */val<int>) var_4)) : (((/* implicit */val<int>) var_3)))) - (((/* implicit */val<int>) ((val<signed char>) var_6)))))));
    *var_15 = ((/* implicit */val<long long int>) ((((/* implicit */val<int>) max((var_1), (((/* implicit */val<signed char>) ((((/* implicit */val<int>) var_4)) != (((/* implicit */val<int>) (val<bool>)0)))))))) <= (((/* implicit */val<int>) ((val<signed char>) (+(((/* implicit */val<int>) var_8))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-120;
unsigned short var_3 = (unsigned short)12816;
unsigned short var_4 = (unsigned short)28695;
int var_5 = 1783950460;
bool var_6 = (bool)1;
short var_7 = (short)-8121;
unsigned short var_8 = (unsigned short)62457;
long long int var_11 = 1008283043695452064LL;
int zero = 0;
bool var_12 = (bool)0;
long long int var_13 = 8728804562369218765LL;
unsigned short var_14 = (unsigned short)29976;
long long int var_15 = 2895848892464971222LL;
void init() {
}

void checksum() {
    value_mismatch |= var_12 != (bool)1;
    value_mismatch |= var_13 != 1LL;
    value_mismatch |= var_14 != (unsigned short)28694;
    value_mismatch |= var_15 != 0LL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_3, var_4, var_5, var_6, var_7, var_8, var_11, zero, &var_12, &var_13, &var_14, &var_15);
  checksum();
  assert(!value_mismatch);
}
