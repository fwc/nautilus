/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 1525
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=1525
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
void test(val<signed char> var_16, val<int> zero, val<unsigned long long int*> var_18, val<unsigned int*> var_19, val<unsigned char*> var_20) {
    *var_18 = ((/* implicit */val<unsigned long long int>) min((8U), (((/* implicit */val<unsigned int>) (val<bool>)1))));
    *var_19 = ((/* implicit */val<unsigned int>) ((((/* implicit */val<bool>) max((((((/* implicit */val<int>) (val<short>)(-32767 - 1))) & (((/* implicit */val<int>) (val<short>)32767)))), (((/* implicit */val<int>) (val<bool>)1))))) || (((/* implicit */val<bool>) (-(((/* implicit */val<int>) (val<short>)32767)))))));
    *var_20 |= ((/* implicit */val<unsigned char>) ((((/* implicit */val<bool>) (val<short>)32742)) || (((/* implicit */val<bool>) var_16))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_16 = (signed char)104;
int zero = 0;
unsigned long long int var_18 = 5435772185652388423ULL;
unsigned int var_19 = 3351579742U;
unsigned char var_20 = (unsigned char)253;
void init() {
}

void checksum() {
    value_mismatch |= var_18 != 1ULL;
    value_mismatch |= var_19 != 1U;
    value_mismatch |= var_20 != (unsigned char)253;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_16, zero, &var_18, &var_19, &var_20);
  checksum();
  assert(!value_mismatch);
}
