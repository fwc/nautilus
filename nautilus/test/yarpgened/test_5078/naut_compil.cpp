/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 5078
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=5078
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
void test(val<long long int> var_7, val<int> var_8, val<unsigned int> var_11, val<bool> var_12, val<bool> var_14, val<int> zero, val<bool*> var_15, val<int*> var_16) {
    *var_15 *= var_14;
    *var_16 = ((/* implicit */val<int>) ((((((/* implicit */val<long long int>) (-(((/* implicit */val<int>) var_12))))) != (2028058286589399821LL))) ? (((((((/* implicit */val<long long int>) ((/* implicit */val<int>) var_14))) < (var_7))) ? (min((9564288744055281423ULL), (((/* implicit */val<unsigned long long int>) var_11)))) : (((/* implicit */val<unsigned long long int>) var_8)))) : (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) (val<bool>)0)))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_7 = -1306656619653047383LL;
int var_8 = 1694371227;
unsigned int var_11 = 1598106216U;
bool var_12 = (bool)0;
bool var_14 = (bool)0;
int zero = 0;
bool var_15 = (bool)1;
int var_16 = 43672836;
void init() {
}

void checksum() {
    value_mismatch |= var_15 != (bool)0;
    value_mismatch |= var_16 != 1694371227;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_7, var_8, var_11, var_12, var_14, zero, &var_15, &var_16);
  checksum();
  assert(!value_mismatch);
}
