/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 8840
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=8840
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
void test(val<unsigned long long int> var_4, val<long long int> var_7, val<int> zero, val<int*> var_19, val<unsigned long long int*> var_20, val<signed char*> var_21) {
    *var_19 |= ((/* implicit */val<int>) (~((-(var_4)))));
    *var_20 = ((/* implicit */val<unsigned long long int>) ((((/* implicit */val<bool>) 18446744073709551615ULL)) && ((!(((/* implicit */val<bool>) var_7))))));
    *var_21 = ((/* implicit */val<signed char>) max((*var_21), (((/* implicit */val<signed char>) (~(524272U))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 4211637667506354362ULL;
long long int var_7 = 1936720594119785040LL;
int zero = 0;
int var_19 = 1557462604;
unsigned long long int var_20 = 5788882739700058404ULL;
signed char var_21 = (signed char)109;
void init() {
}

void checksum() {
    value_mismatch |= var_19 != -18940163;
    value_mismatch |= var_20 != 0ULL;
    value_mismatch |= var_21 != (signed char)109;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_4, var_7, zero, &var_19, &var_20, &var_21);
  checksum();
  assert(!value_mismatch);
}
