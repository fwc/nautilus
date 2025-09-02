/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 2586
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=2586
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
void test(val<int> var_3, val<int> zero, val<unsigned char*> var_14, val<bool*> var_15) {
    *var_14 -= ((/* implicit */val<unsigned char>) (!((!(((/* implicit */val<bool>) var_3))))));
    *var_15 = ((/* implicit */val<bool>) min((*var_15), (((/* implicit */val<bool>) (~(((/* implicit */val<int>) (val<unsigned char>)249)))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = -2031873887;
int zero = 0;
unsigned char var_14 = (unsigned char)62;
bool var_15 = (bool)0;
void init() {
}

void checksum() {
    value_mismatch |= var_14 != (unsigned char)61;
    value_mismatch |= var_15 != (bool)0;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_3, zero, &var_14, &var_15);
  checksum();
  assert(!value_mismatch);
}
