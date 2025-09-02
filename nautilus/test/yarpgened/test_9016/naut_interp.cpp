/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 9016
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=9016
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
void test(val<unsigned int> var_0, val<bool> var_2, val<unsigned long long int> var_3, val<bool> var_5, val<unsigned int> var_6, val<unsigned long long int> var_8, val<bool> var_10, val<int> zero, val<bool*> var_13, val<short*> var_14, val<bool*> var_15) {
    *var_13 = ((/* implicit */val<bool>) ((val<unsigned long long int>) (+((+(var_8))))));
    *var_14 = ((/* implicit */val<short>) var_5);
    *var_15 = ((/* implicit */val<bool>) (-(((((/* implicit */val<bool>) min((var_3), (((/* implicit */val<unsigned long long int>) var_6))))) ? ((((val<bool>)1) ? (var_0) : (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_2))))) : (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_10)))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1121401883U;
bool var_2 = (bool)1;
unsigned long long int var_3 = 17093203396198669598ULL;
bool var_5 = (bool)1;
unsigned int var_6 = 1562775444U;
unsigned long long int var_8 = 15174494982722728457ULL;
bool var_10 = (bool)0;
int zero = 0;
bool var_13 = (bool)1;
short var_14 = (short)1815;
bool var_15 = (bool)0;
void init() {
}

void checksum() {
    value_mismatch |= var_13 != (bool)1;
    value_mismatch |= var_14 != (short)1;
    value_mismatch |= var_15 != (bool)1;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_2, var_3, var_5, var_6, var_8, var_10, zero, &var_13, &var_14, &var_15);
  checksum();
  assert(!value_mismatch);
}
