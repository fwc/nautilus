/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 7832
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=7832
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
void test(val<unsigned int> var_5, val<unsigned long long int> var_6, val<short> var_12, val<unsigned long long int> var_17, val<int> zero, val<long long int*> var_18, val<long long int*> var_19, val<long long int*> var_20) {
    *var_18 = ((/* implicit */val<long long int>) (-((+(var_5)))));
    *var_19 = ((/* implicit */val<long long int>) ((((/* implicit */val<bool>) var_17)) ? (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_12))) : (var_6)));
    *var_20 = ((/* implicit */val<long long int>) (+(((/* implicit */val<int>) (!(((/* implicit */val<bool>) (val<signed char>)-25)))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_5 = 413762490U;
unsigned long long int var_6 = 1398728607713128408ULL;
short var_12 = (short)4220;
unsigned long long int var_17 = 1065760493717554591ULL;
int zero = 0;
long long int var_18 = -4515640630856999796LL;
long long int var_19 = 8329501567647174656LL;
long long int var_20 = -5889830568029840866LL;
void init() {
}

void checksum() {
    value_mismatch |= var_18 != 3881204806LL;
    value_mismatch |= var_19 != 4220LL;
    value_mismatch |= var_20 != 0LL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_5, var_6, var_12, var_17, zero, &var_18, &var_19, &var_20);
  checksum();
}
