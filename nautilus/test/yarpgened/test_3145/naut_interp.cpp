/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 3145
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=3145
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
void test(val<long long int> var_5, val<long long int> var_13, val<int> zero, val<signed char*> var_17, val<unsigned long long int*> var_18) {
    *var_17 = ((/* implicit */val<signed char>) var_5);
    *var_18 ^= ((/* implicit */val<unsigned long long int>) var_13);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_5 = -6932377821275186570LL;
long long int var_13 = 5871208700482698418LL;
int zero = 0;
signed char var_17 = (signed char)68;
unsigned long long int var_18 = 8137825598469043116ULL;
void init() {
}

void checksum() {
    value_mismatch |= var_17 != (signed char)118;
    value_mismatch |= var_18 != 2420091547868974878ULL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_5, var_13, zero, &var_17, &var_18);
  checksum();
  assert(!value_mismatch);
}
