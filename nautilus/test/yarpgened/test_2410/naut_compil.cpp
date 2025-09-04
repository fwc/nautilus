/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 2410
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=2410
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
void test(val<unsigned short> var_1, val<bool> var_8, val<long long int> var_9, val<short> var_10, val<long long int> var_12, val<int> zero, val<long long int*> var_19, val<unsigned int*> var_20) {
    *var_19 |= var_9;
    *var_20 = ((/* implicit */val<unsigned int>) ((var_8) ? (((/* implicit */val<int>) ((((/* implicit */val<long long int>) ((val<int>) var_12))) >= (((((/* implicit */val<long long int>) ((/* implicit */val<int>) var_10))) % (var_9)))))) : (((/* implicit */val<int>) var_1))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)52313;
bool var_8 = (bool)1;
long long int var_9 = 7107272981168313344LL;
short var_10 = (short)-17154;
long long int var_12 = -8303258712000540353LL;
int zero = 0;
long long int var_19 = 8706722902767472957LL;
unsigned int var_20 = 1100202594U;
void init() {
}

void checksum() {
    value_mismatch |= var_19 != 8860409366477985085LL;
    value_mismatch |= var_20 != 0U;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_8, var_9, var_10, var_12, zero, &var_19, &var_20);
  checksum();
  assert(!value_mismatch);
}
