/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 3588
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=3588
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
void test(val<int> var_1, val<unsigned short> var_2, val<int> var_3, val<long long int> var_9, val<int> zero, val<unsigned long long int*> var_10, val<int*> var_11) {
    *var_10 |= ((/* implicit */val<unsigned long long int>) ((((/* implicit */val<int>) var_2)) != (((((/* implicit */val<bool>) max((11ULL), (((/* implicit */val<unsigned long long int>) var_3))))) ? (((/* implicit */val<int>) ((val<unsigned short>) var_9))) : (var_1)))));
    *var_11 |= ((/* implicit */val<int>) max((((/* implicit */val<unsigned long long int>) var_3)), (6118911080318697982ULL)));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1067635718;
unsigned short var_2 = (unsigned short)721;
int var_3 = -1506875793;
long long int var_9 = -7573499474291892251LL;
int zero = 0;
unsigned long long int var_10 = 7676530438996904105ULL;
int var_11 = -408499425;
void init() {
}

void checksum() {
    value_mismatch |= var_10 != 7676530438996904105ULL;
    value_mismatch |= var_11 != -407965825;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_2, var_3, var_9, zero, &var_10, &var_11);
  checksum();
  assert(!value_mismatch);
}
