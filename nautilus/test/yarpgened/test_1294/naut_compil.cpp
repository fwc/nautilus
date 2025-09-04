/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 1294
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=1294
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
void test(val<long long int> var_3, val<int> var_6, val<unsigned int> var_8, val<int> zero, val<int*> var_19, val<unsigned short*> var_20, val<unsigned long long int*> var_21, val<long long int*> var_22) {
    *var_19 = var_6;
    *var_20 += ((/* implicit */val<unsigned short>) min((((/* implicit */val<int>) (val<short>)2933)), (-1)));
    *var_21 = ((/* implicit */val<unsigned long long int>) var_3);
    *var_22 = ((/* implicit */val<long long int>) var_8);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = -1652964112355877570LL;
int var_6 = 626504580;
unsigned int var_8 = 2408686470U;
int zero = 0;
int var_19 = 880442396;
unsigned short var_20 = (unsigned short)29630;
unsigned long long int var_21 = 12347710115014826628ULL;
long long int var_22 = 939453580439934441LL;
void init() {
}

void checksum() {
    value_mismatch |= var_19 != 626504580;
    value_mismatch |= var_20 != (unsigned short)29629;
    value_mismatch |= var_21 != 16793779961353674046ULL;
    value_mismatch |= var_22 != 2408686470LL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_3, var_6, var_8, zero, &var_19, &var_20, &var_21, &var_22);
  checksum();
  assert(!value_mismatch);
}
