/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 7305
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=7305
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
void test(val<bool> var_10, val<int> zero, val<int*> var_15, val<int*> var_16) {
    *var_15 = ((/* implicit */val<int>) ((val<long long int>) (-((+(((/* implicit */val<int>) var_10)))))));
    *var_16 = ((/* implicit */val<int>) var_10);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

bool var_10 = (bool)1;
int zero = 0;
int var_15 = 825736403;
int var_16 = 2040778687;
void init() {
}

void checksum() {
    value_mismatch |= var_15 != -1;
    value_mismatch |= var_16 != 1;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_10, zero, &var_15, &var_16);
  checksum();
}
