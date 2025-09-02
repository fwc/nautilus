/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 2139
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=2139
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
void test(val<unsigned long long int> var_0, val<int> var_1, val<unsigned int> var_2, val<short> var_3, val<long long int> var_4, val<int> var_6, val<int> zero, val<long long int*> var_13, val<bool*> var_14, val<bool*> var_15, val<long long int*> var_16) {
    *var_13 = ((/* implicit */val<long long int>) ((((/* implicit */val<bool>) var_1)) ? (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) ((var_4) != (((((/* implicit */val<bool>) var_6)) ? (((/* implicit */val<long long int>) var_6)) : (var_4))))))) : (var_0)));
    *var_14 = ((/* implicit */val<bool>) (~(((/* implicit */val<int>) max((var_3), (var_3))))));
    *var_15 = ((val<bool>) min((((/* implicit */val<short>) (!(((/* implicit */val<bool>) (val<short>)2622))))), (var_3)));
    *var_16 = ((/* implicit */val<long long int>) var_2);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 2508024836557649970ULL;
int var_1 = -947329762;
unsigned int var_2 = 3715059281U;
short var_3 = (short)23111;
long long int var_4 = -3874104588816979634LL;
int var_6 = -1822269328;
int zero = 0;
long long int var_13 = -5765996412411777014LL;
bool var_14 = (bool)1;
bool var_15 = (bool)1;
long long int var_16 = -1943592930568000875LL;
void init() {
}

void checksum() {
    value_mismatch |= var_13 != 1LL;
    value_mismatch |= var_14 != (bool)1;
    value_mismatch |= var_15 != (bool)0;
    value_mismatch |= var_16 != 3715059281LL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_2, var_3, var_4, var_6, zero, &var_13, &var_14, &var_15, &var_16);
  checksum();
  assert(!value_mismatch);
}
