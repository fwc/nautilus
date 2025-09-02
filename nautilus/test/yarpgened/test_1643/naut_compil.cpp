/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 1643
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=1643
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
void test(val<bool> var_0, val<unsigned long long int> var_2, val<unsigned short> var_7, val<int> var_8, val<unsigned int> var_9, val<int> zero, val<bool*> var_11, val<unsigned long long int*> var_12) {
    *var_11 = ((/* implicit */val<bool>) ((val<int>) max((((((/* implicit */val<bool>) var_7)) ? (var_9) : (((/* implicit */val<unsigned int>) var_8)))), (min((((/* implicit */val<unsigned int>) (val<short>)-8834)), (var_9))))));
    *var_12 = max((((((/* implicit */val<unsigned long long int>) ((((/* implicit */val<int>) var_0)) - (((/* implicit */val<int>) var_7))))) - (var_2))), (((/* implicit */val<unsigned long long int>) ((((((/* implicit */val<long long int>) var_8)) > (7875792353743294150LL))) && (((/* implicit */val<bool>) ((((/* implicit */val<bool>) (val<signed char>)80)) ? (-481598252) : (((/* implicit */val<int>) (val<unsigned char>)26)))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

bool var_0 = (bool)1;
unsigned long long int var_2 = 16247631433708259347ULL;
unsigned short var_7 = (unsigned short)37947;
int var_8 = 1836568312;
unsigned int var_9 = 2849040803U;
int zero = 0;
bool var_11 = (bool)1;
unsigned long long int var_12 = 17434465508613511345ULL;
void init() {
}

void checksum() {
    value_mismatch |= var_11 != (bool)1;
    value_mismatch |= var_12 != 2199112640001254323ULL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_2, var_7, var_8, var_9, zero, &var_11, &var_12);
  checksum();
  assert(!value_mismatch);
}
