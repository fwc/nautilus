/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 2065
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=2065
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
void test(val<unsigned long long int> var_11, val<int> zero, val<int*> var_12, val<int*> var_13, val<short*> var_14) {
    *var_12 = ((/* implicit */val<int>) min((*var_12), (((/* implicit */val<int>) ((((val<unsigned int>) (val<short>)-18245)) / (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) ((val<unsigned char>) (val<short>)-31864)))))))));
    *var_13 = ((/* implicit */val<int>) ((val<bool>) var_11));
    *var_14 = ((/* implicit */val<short>) (-((~((~(-1091144682)))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_11 = 9172583323816087112ULL;
int zero = 0;
int var_12 = -501035642;
int var_13 = 72387681;
short var_14 = (short)-31095;
void init() {
}

void checksum() {
    value_mismatch |= var_12 != -501035642;
    value_mismatch |= var_13 != 1;
    value_mismatch |= var_14 != (short)-29718;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_11, zero, &var_12, &var_13, &var_14);
  checksum();
  assert(!value_mismatch);
}
