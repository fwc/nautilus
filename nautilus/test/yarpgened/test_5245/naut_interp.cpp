/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 5245
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=5245
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
void test(val<bool> var_0, val<bool> var_4, val<bool> var_6, val<bool> var_9, val<signed char> var_10, val<unsigned long long int> var_13, val<unsigned long long int> var_14, val<signed char> var_16, val<int> zero, val<signed char*> var_20, val<signed char*> var_21, val<bool*> var_22, val<bool*> var_23) {
    *var_20 = var_16;
    *var_21 = ((/* implicit */val<signed char>) max(((~(((/* implicit */val<int>) var_9)))), (((var_4) ? (((/* implicit */val<int>) max(((val<bool>)1), (var_0)))) : (((/* implicit */val<int>) var_6))))));
    *var_22 = ((/* implicit */val<bool>) var_10);
    *var_23 = ((/* implicit */val<bool>) (-(((((((/* implicit */val<bool>) var_13)) ? (var_13) : (var_14))) >> ((((-(5803826361401406373ULL))) - (12642917712308145194ULL)))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

bool var_0 = (bool)1;
bool var_4 = (bool)0;
bool var_6 = (bool)1;
bool var_9 = (bool)0;
signed char var_10 = (signed char)-56;
unsigned long long int var_13 = 16664189158446498387ULL;
unsigned long long int var_14 = 8544101386460541229ULL;
signed char var_16 = (signed char)29;
int zero = 0;
signed char var_20 = (signed char)22;
signed char var_21 = (signed char)-76;
bool var_22 = (bool)1;
bool var_23 = (bool)0;
void init() {
}

void checksum() {
    value_mismatch |= var_20 != (signed char)29;
    value_mismatch |= var_21 != (signed char)1;
    value_mismatch |= var_22 != (bool)1;
    value_mismatch |= var_23 != (bool)1;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_4, var_6, var_9, var_10, var_13, var_14, var_16, zero, &var_20, &var_21, &var_22, &var_23);
  checksum();
  assert(!value_mismatch);
}
