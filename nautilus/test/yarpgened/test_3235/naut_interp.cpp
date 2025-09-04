/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 3235
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=3235
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
void test(val<bool> var_1, val<bool> var_3, val<bool> var_5, val<bool> var_13, val<bool> var_15, val<int> zero, val<unsigned long long int*> var_18, val<unsigned long long int*> var_19) {
    *var_18 = ((((/* implicit */val<bool>) max((((var_5) ? (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_13))) : (15512192398347080866ULL))), (max((((/* implicit */val<unsigned long long int>) (val<bool>)1)), (9191479449955657296ULL)))))) ? (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_15))) : (((((3186762651956619017ULL) - (9255264623753894319ULL))) + (((/* implicit */val<unsigned long long int>) ((((/* implicit */val<int>) var_1)) - (((/* implicit */val<int>) var_3))))))));
    *var_19 = ((/* implicit */val<unsigned long long int>) max((*var_19), (((/* implicit */val<unsigned long long int>) var_1))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

bool var_1 = (bool)1;
bool var_3 = (bool)1;
bool var_5 = (bool)0;
bool var_13 = (bool)1;
bool var_15 = (bool)0;
int zero = 0;
unsigned long long int var_18 = 1068952918858388255ULL;
unsigned long long int var_19 = 10434362995541498671ULL;
void init() {
}

void checksum() {
    value_mismatch |= var_18 != 0ULL;
    value_mismatch |= var_19 != 10434362995541498671ULL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_3, var_5, var_13, var_15, zero, &var_18, &var_19);
  checksum();
  assert(!value_mismatch);
}
