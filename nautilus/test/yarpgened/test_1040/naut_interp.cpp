/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 1040
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=1040
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
void test(val<int> var_2, val<unsigned char> var_10, val<int> zero, val<unsigned char*> var_19, val<signed char*> var_20, val<signed char*> var_21) {
    *var_19 = ((/* implicit */val<unsigned char>) min((*var_19), (((/* implicit */val<unsigned char>) ((val<int>) var_10)))));
    *var_20 = ((/* implicit */val<signed char>) var_10);
    *var_21 = ((/* implicit */val<signed char>) var_2);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 1519893381;
unsigned char var_10 = (unsigned char)6;
int zero = 0;
unsigned char var_19 = (unsigned char)196;
signed char var_20 = (signed char)-27;
signed char var_21 = (signed char)80;
void init() {
}

void checksum() {
    value_mismatch |= var_19 != (unsigned char)6;
    value_mismatch |= var_20 != (signed char)6;
    value_mismatch |= var_21 != (signed char)-123;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_2, var_10, zero, &var_19, &var_20, &var_21);
  checksum();
  assert(!value_mismatch);
}
