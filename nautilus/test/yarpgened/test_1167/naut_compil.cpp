/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 1167
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=1167
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
void test(val<unsigned long long int> var_3, val<unsigned long long int> var_12, val<int> zero, val<int*> var_17, val<unsigned long long int*> var_18) {
    *var_17 = ((val<int>) -291883104);
    *var_18 = min((var_12), (var_3));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 10028270996555746824ULL;
unsigned long long int var_12 = 8059157818727268620ULL;
int zero = 0;
int var_17 = 2018123012;
unsigned long long int var_18 = 13864682538439964027ULL;
void init() {
}

void checksum() {
    value_mismatch |= var_17 != -291883104;
    value_mismatch |= var_18 != 8059157818727268620ULL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_3, var_12, zero, &var_17, &var_18);
  checksum();
  assert(!value_mismatch);
}
