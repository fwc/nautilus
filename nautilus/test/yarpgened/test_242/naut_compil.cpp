/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 242
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=242
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
void test(val<signed char> var_5, val<unsigned int> var_8, val<long long int> var_11, val<int> zero, val<long long int*> var_18, val<unsigned int*> var_19) {
    *var_18 = ((/* implicit */val<long long int>) var_5);
    *var_19 = ((/* implicit */val<unsigned int>) min((var_11), (((/* implicit */val<long long int>) var_8))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_5 = (signed char)116;
unsigned int var_8 = 1646705773U;
long long int var_11 = 1843499334162393757LL;
int zero = 0;
long long int var_18 = -3716714759399033136LL;
unsigned int var_19 = 2688762341U;
void init() {
}

void checksum() {
    value_mismatch |= var_18 != 116LL;
    value_mismatch |= var_19 != 1646705773U;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_5, var_8, var_11, zero, &var_18, &var_19);
  checksum();
  assert(!value_mismatch);
}
