/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 2254
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=2254
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
void test(val<unsigned int> var_2, val<short> var_5, val<signed char> var_9, val<long long int> var_10, val<int> zero, val<short*> var_11, val<signed char*> var_12, val<short*> var_13) {
    *var_11 = ((/* implicit */val<short>) var_9);
    *var_12 = ((/* implicit */val<signed char>) ((val<long long int>) (~(((/* implicit */val<int>) max(((val<signed char>)62), (((/* implicit */val<signed char>) (val<bool>)1))))))));
    *var_13 = ((/* implicit */val<short>) (((val<bool>)1) ? (((/* implicit */val<long long int>) ((/* implicit */val<int>) (val<signed char>)-61))) : ((((!(((/* implicit */val<bool>) var_9)))) ? (((/* implicit */val<long long int>) ((/* implicit */val<int>) var_5))) : (min((((/* implicit */val<long long int>) var_2)), (var_10)))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 3551511556U;
short var_5 = (short)-11624;
signed char var_9 = (signed char)1;
long long int var_10 = 8024926302979392766LL;
int zero = 0;
short var_11 = (short)7148;
signed char var_12 = (signed char)-106;
short var_13 = (short)10571;
void init() {
}

void checksum() {
    value_mismatch |= var_11 != (short)1;
    value_mismatch |= var_12 != (signed char)-63;
    value_mismatch |= var_13 != (short)-61;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_2, var_5, var_9, var_10, zero, &var_11, &var_12, &var_13);
  checksum();
}
