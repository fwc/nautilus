/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 4835
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=4835
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
void test(val<signed char> var_1, val<long long int> var_2, val<long long int> var_10, val<unsigned int> var_14, val<int> zero, val<long long int*> var_15, val<long long int*> var_16, val<signed char*> var_17) {
    *var_15 = ((/* implicit */val<long long int>) ((val<signed char>) max((((/* implicit */val<unsigned int>) max((((/* implicit */val<int>) var_1)), (127)))), ((-(var_14))))));
    *var_16 = var_2;
    *var_17 = ((/* implicit */val<signed char>) (+(var_10)));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-17;
long long int var_2 = 2564454454334753213LL;
long long int var_10 = 6616076744182262163LL;
unsigned int var_14 = 771716953U;
int zero = 0;
long long int var_15 = 5028694542039527622LL;
long long int var_16 = -1280685159073064113LL;
signed char var_17 = (signed char)113;
void init() {
}

void checksum() {
    value_mismatch |= var_15 != -89LL;
    value_mismatch |= var_16 != 2564454454334753213LL;
    value_mismatch |= var_17 != (signed char)-109;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_2, var_10, var_14, zero, &var_15, &var_16, &var_17);
  checksum();
  assert(!value_mismatch);
}
