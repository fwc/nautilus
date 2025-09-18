/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 656
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=656
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
void test(val<short> var_3, val<unsigned short> var_13, val<int> zero, val<short*> var_14, val<long long int*> var_15, val<long long int*> var_16, val<short*> var_17) {
    *var_14 = ((/* implicit */val<short>) (!(((/* implicit */val<bool>) ((((/* implicit */val<bool>) -1LL)) ? (((/* implicit */val<int>) var_3)) : (((/* implicit */val<int>) var_13)))))));
    *var_15 = (+(max((((/* implicit */val<long long int>) (!(((/* implicit */val<bool>) (val<unsigned short>)57641))))), (min((5132882827179288064LL), (5132882827179288065LL))))));
    *var_16 = 5132882827179288073LL;
    *var_17 = ((/* implicit */val<short>) min((*var_17), ((val<short>)-28896)));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)26428;
unsigned short var_13 = (unsigned short)41914;
int zero = 0;
short var_14 = (short)32485;
long long int var_15 = 2358309628393528118LL;
long long int var_16 = 6912198117385613903LL;
short var_17 = (short)-4874;
void init() {
}

void checksum() {
    value_mismatch |= var_14 != (short)0;
    value_mismatch |= var_15 != 5132882827179288064LL;
    value_mismatch |= var_16 != 5132882827179288073LL;
    value_mismatch |= var_17 != (short)-28896;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_3, var_13, zero, &var_14, &var_15, &var_16, &var_17);
  checksum();
}
