/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 3242
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=3242
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
void test(val<bool> var_1, val<long long int> var_9, val<int> var_14, val<int> zero, val<long long int*> var_18, val<long long int*> var_19) {
    *var_18 |= ((var_9) + (((/* implicit */val<long long int>) ((/* implicit */val<int>) var_1))));
    *var_19 = ((/* implicit */val<long long int>) var_14);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

bool var_1 = (bool)0;
long long int var_9 = 1759602224709889287LL;
int var_14 = -763842444;
int zero = 0;
long long int var_18 = 2203701118950387577LL;
long long int var_19 = -432491430211273142LL;
void init() {
}

void checksum() {
    value_mismatch |= var_18 != 2233608393803427711LL;
    value_mismatch |= var_19 != -763842444LL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_9, var_14, zero, &var_18, &var_19);
  checksum();
  assert(!value_mismatch);
}
