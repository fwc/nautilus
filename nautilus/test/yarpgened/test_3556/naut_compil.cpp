/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 3556
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=3556
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
void test(val<long long int> var_3, val<bool> var_8, val<long long int> var_13, val<int> zero, val<long long int*> var_15, val<unsigned long long int*> var_16, val<short*> var_17, val<short*> var_18) {
    *var_15 = var_13;
    *var_16 &= ((/* implicit */val<unsigned long long int>) var_3);
    *var_17 = ((/* implicit */val<short>) var_13);
    *var_18 = ((/* implicit */val<short>) ((val<long long int>) (!(var_8))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = -5313880602151560416LL;
bool var_8 = (bool)0;
long long int var_13 = 7068553623124437577LL;
int zero = 0;
long long int var_15 = -2843054465871644779LL;
unsigned long long int var_16 = 17690921669241911210ULL;
short var_17 = (short)14253;
short var_18 = (short)6634;
void init() {
}

void checksum() {
    value_mismatch |= var_15 != 7068553623124437577LL;
    value_mismatch |= var_16 != 12970443373225218848ULL;
    value_mismatch |= var_17 != (short)-5559;
    value_mismatch |= var_18 != (short)1;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_3, var_8, var_13, zero, &var_15, &var_16, &var_17, &var_18);
  checksum();
  assert(!value_mismatch);
}
