/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 1741
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=1741
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
void test(val<unsigned char> var_12, val<int> zero, val<long long int*> var_18, val<signed char*> var_19) {
    *var_18 -= ((/* implicit */val<long long int>) var_12);
    *var_19 |= ((/* implicit */val<signed char>) 1119739031);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_12 = (unsigned char)199;
int zero = 0;
long long int var_18 = -8422044320092508249LL;
signed char var_19 = (signed char)101;
void init() {
}

void checksum() {
    value_mismatch |= var_18 != -8422044320092508448LL;
    value_mismatch |= var_19 != (signed char)-9;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_12, zero, &var_18, &var_19);
  checksum();
  assert(!value_mismatch);
}
