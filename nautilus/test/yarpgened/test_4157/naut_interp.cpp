/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 4157
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=4157
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
void test(val<int> var_0, val<long long int> var_2, val<bool> var_8, val<int> var_14, val<int> zero, val<signed char*> var_17, val<int*> var_18) {
    *var_17 = ((/* implicit */val<signed char>) max((*var_17), (((/* implicit */val<signed char>) (!(((/* implicit */val<bool>) -5801926851297254606LL)))))));
    *var_18 = ((/* implicit */val<int>) ((var_8) ? (((/* implicit */val<long long int>) (+(var_0)))) : (max((var_2), (((/* implicit */val<long long int>) var_14))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -398403055;
long long int var_2 = 6866244561532749755LL;
bool var_8 = (bool)1;
int var_14 = 1778540827;
int zero = 0;
signed char var_17 = (signed char)-35;
int var_18 = -772194650;
void init() {
}

void checksum() {
    value_mismatch |= var_17 != (signed char)0;
    value_mismatch |= var_18 != -398403055;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_2, var_8, var_14, zero, &var_17, &var_18);
  checksum();
  assert(!value_mismatch);
}
