/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 398
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=398
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
void test(val<signed char> var_2, val<short> var_4, val<signed char> var_6, val<unsigned int> var_7, val<unsigned long long int> var_10, val<bool> var_17, val<int> zero, val<unsigned long long int*> var_18, val<unsigned long long int*> var_19) {
    *var_18 = ((/* implicit */val<unsigned long long int>) ((val<bool>) ((var_10) % (((/* implicit */val<unsigned long long int>) max((4813173793775515708LL), (((/* implicit */val<long long int>) var_4))))))));
    *var_19 = ((/* implicit */val<unsigned long long int>) ((((/* implicit */val<bool>) max((((/* implicit */val<short>) ((var_7) == (11U)))), (max(((val<short>)-25968), (((/* implicit */val<short>) var_2))))))) ? (((((/* implicit */val<bool>) max(((val<signed char>)43), (var_6)))) ? (((/* implicit */val<int>) ((((/* implicit */val<int>) var_4)) != (((/* implicit */val<int>) var_17))))) : (((/* implicit */val<int>) var_17)))) : (((/* implicit */val<int>) var_17))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-40;
short var_4 = (short)-14996;
signed char var_6 = (signed char)-102;
unsigned int var_7 = 966759041U;
unsigned long long int var_10 = 13645711382325727901ULL;
bool var_17 = (bool)0;
int zero = 0;
unsigned long long int var_18 = 5170219041377029759ULL;
unsigned long long int var_19 = 12685207488463653282ULL;
void init() {
}

void checksum() {
    value_mismatch |= var_18 != 1ULL;
    value_mismatch |= var_19 != 0ULL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_2, var_4, var_6, var_7, var_10, var_17, zero, &var_18, &var_19);
  checksum();
  assert(!value_mismatch);
}
