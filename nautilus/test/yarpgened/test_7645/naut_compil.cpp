/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 7645
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=7645
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
void test(val<bool> var_6, val<unsigned short> var_9, val<long long int> var_13, val<int> zero, val<unsigned short*> var_16, val<long long int*> var_17, val<bool*> var_18) {
    *var_16 = ((/* implicit */val<unsigned short>) ((val<int>) (+(min((((/* implicit */val<int>) var_6)), (461923975))))));
    *var_17 = var_13;
    *var_18 = ((/* implicit */val<bool>) var_9);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

bool var_6 = (bool)1;
unsigned short var_9 = (unsigned short)36246;
long long int var_13 = 7833507163357274933LL;
int zero = 0;
unsigned short var_16 = (unsigned short)22719;
long long int var_17 = 5373485591095949417LL;
bool var_18 = (bool)0;
void init() {
}

void checksum() {
    value_mismatch |= var_16 != (unsigned short)1;
    value_mismatch |= var_17 != 7833507163357274933LL;
    value_mismatch |= var_18 != (bool)1;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_6, var_9, var_13, zero, &var_16, &var_17, &var_18);
  checksum();
  assert(!value_mismatch);
}
