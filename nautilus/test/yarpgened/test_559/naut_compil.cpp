/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 559
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=559
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
void test(val<unsigned char> var_0, val<signed char> var_7, val<unsigned int> var_13, val<long long int> var_14, val<int> zero, val<bool*> var_15, val<unsigned char*> var_16, val<unsigned int*> var_17) {
    *var_15 = ((/* implicit */val<bool>) var_14);
    *var_16 = ((/* implicit */val<unsigned char>) ((((/* implicit */val<bool>) ((((/* implicit */val<int>) ((((/* implicit */val<int>) var_7)) >= (((/* implicit */val<int>) (val<signed char>)119))))) | (((/* implicit */val<int>) var_0))))) ? (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) (val<signed char>)119))) : (var_13)));
    *var_17 = var_13;
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)221;
signed char var_7 = (signed char)72;
unsigned int var_13 = 2196063286U;
long long int var_14 = 4274885003461067886LL;
int zero = 0;
bool var_15 = (bool)0;
unsigned char var_16 = (unsigned char)219;
unsigned int var_17 = 3848806743U;
void init() {
}

void checksum() {
    value_mismatch |= var_15 != (bool)1;
    value_mismatch |= var_16 != (unsigned char)119;
    value_mismatch |= var_17 != 2196063286U;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_7, var_13, var_14, zero, &var_15, &var_16, &var_17);
  checksum();
  assert(!value_mismatch);
}
