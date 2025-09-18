/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 4087
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=4087
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
void test(val<short> var_0, val<unsigned short> var_3, val<long long int> var_4, val<unsigned long long int> var_9, val<int> zero, val<unsigned short*> var_15, val<signed char*> var_16, val<signed char*> var_17) {
    *var_15 = ((/* implicit */val<unsigned short>) (((val<bool>)1) ? (5363772252032116693LL) : (((/* implicit */val<long long int>) ((/* implicit */val<int>) (val<bool>)1)))));
    *var_16 = ((/* implicit */val<signed char>) (val<bool>)1);
    *var_17 = ((val<signed char>) max((((var_9) | (((/* implicit */val<unsigned long long int>) var_4)))), (((/* implicit */val<unsigned long long int>) ((((/* implicit */val<bool>) (-2147483647 - 1))) ? (((/* implicit */val<int>) var_3)) : (((/* implicit */val<int>) var_0)))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-4843;
unsigned short var_3 = (unsigned short)32876;
long long int var_4 = 9129853896761433530LL;
unsigned long long int var_9 = 1226083657661256643ULL;
int zero = 0;
unsigned short var_15 = (unsigned short)65516;
signed char var_16 = (signed char)-66;
signed char var_17 = (signed char)78;
void init() {
}

void checksum() {
    value_mismatch |= var_15 != (unsigned short)42965;
    value_mismatch |= var_16 != (signed char)1;
    value_mismatch |= var_17 != (signed char)-5;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_3, var_4, var_9, zero, &var_15, &var_16, &var_17);
  checksum();
}
