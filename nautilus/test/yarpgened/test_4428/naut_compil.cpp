/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 4428
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=4428
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
void test(val<signed char> var_5, val<signed char> var_7, val<int> zero, val<signed char*> var_15, val<long long int*> var_16) {
    *var_15 = ((/* implicit */val<signed char>) ((((/* implicit */val<long long int>) ((/* implicit */val<int>) var_7))) <= (((val<long long int>) var_5))));
    *var_16 = ((/* implicit */val<long long int>) var_5);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_5 = (signed char)107;
signed char var_7 = (signed char)80;
int zero = 0;
signed char var_15 = (signed char)105;
long long int var_16 = 7502929541810310697LL;
void init() {
}

void checksum() {
    value_mismatch |= var_15 != (signed char)1;
    value_mismatch |= var_16 != 107LL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_5, var_7, zero, &var_15, &var_16);
  checksum();
  assert(!value_mismatch);
}
