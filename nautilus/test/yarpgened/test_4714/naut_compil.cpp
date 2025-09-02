/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 4714
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=4714
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
void test(val<bool> var_6, val<signed char> var_11, val<bool> var_12, val<signed char> var_15, val<bool> var_16, val<int> zero, val<bool*> var_18, val<unsigned long long int*> var_19) {
    *var_18 = ((/* implicit */val<bool>) (((+(((/* implicit */val<int>) var_12)))) + (((((/* implicit */val<bool>) (+(((/* implicit */val<int>) var_15))))) ? (((((/* implicit */val<bool>) var_11)) ? (((/* implicit */val<int>) (val<signed char>)-120)) : (((/* implicit */val<int>) var_6)))) : (((/* implicit */val<int>) var_11))))));
    *var_19 = ((/* implicit */val<unsigned long long int>) var_16);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

bool var_6 = (bool)0;
signed char var_11 = (signed char)59;
bool var_12 = (bool)0;
signed char var_15 = (signed char)124;
bool var_16 = (bool)0;
int zero = 0;
bool var_18 = (bool)1;
unsigned long long int var_19 = 1096402918825492841ULL;
void init() {
}

void checksum() {
    value_mismatch |= var_18 != (bool)1;
    value_mismatch |= var_19 != 0ULL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_6, var_11, var_12, var_15, var_16, zero, &var_18, &var_19);
  checksum();
  assert(!value_mismatch);
}
