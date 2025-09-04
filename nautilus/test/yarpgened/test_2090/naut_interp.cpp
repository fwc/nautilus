/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 2090
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=2090
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
void test(val<long long int> var_4, val<unsigned short> var_13, val<int> zero, val<unsigned int*> var_18, val<bool*> var_19, val<int*> var_20) {
    *var_18 = ((/* implicit */val<unsigned int>) var_4);
    *var_19 = (!(((/* implicit */val<bool>) (+(((/* implicit */val<int>) (val<short>)-512))))));
    *var_20 = ((/* implicit */val<int>) var_13);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = -7376916437215060539LL;
unsigned short var_13 = (unsigned short)47647;
int zero = 0;
unsigned int var_18 = 3515748729U;
bool var_19 = (bool)1;
int var_20 = -1162918788;
void init() {
}

void checksum() {
    value_mismatch |= var_18 != 3188612549U;
    value_mismatch |= var_19 != (bool)0;
    value_mismatch |= var_20 != 47647;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_4, var_13, zero, &var_18, &var_19, &var_20);
  checksum();
  assert(!value_mismatch);
}
