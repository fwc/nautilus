/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 1435
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=1435
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
void test(val<bool> var_2, val<bool> var_5, val<short> var_10, val<bool> var_12, val<int> zero, val<unsigned short*> var_16, val<bool*> var_17) {
    *var_16 = ((/* implicit */val<unsigned short>) ((((/* implicit */val<bool>) var_10)) ? (((/* implicit */val<int>) var_2)) : (((/* implicit */val<int>) var_12))));
    *var_17 = var_5;
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

bool var_2 = (bool)0;
bool var_5 = (bool)0;
short var_10 = (short)6827;
bool var_12 = (bool)0;
int zero = 0;
unsigned short var_16 = (unsigned short)47490;
bool var_17 = (bool)0;
void init() {
}

void checksum() {
    value_mismatch |= var_16 != (unsigned short)0;
    value_mismatch |= var_17 != (bool)0;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_2, var_5, var_10, var_12, zero, &var_16, &var_17);
  checksum();
  assert(!value_mismatch);
}
