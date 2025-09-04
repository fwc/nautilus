/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 1988
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=1988
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
void test(val<bool> var_7, val<int> zero, val<unsigned long long int*> var_12, val<signed char*> var_13) {
    *var_12 = ((/* implicit */val<unsigned long long int>) (-2147483647 - 1));
    *var_13 = ((/* implicit */val<signed char>) var_7);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

bool var_7 = (bool)0;
int zero = 0;
unsigned long long int var_12 = 6385110137476728003ULL;
signed char var_13 = (signed char)98;
void init() {
}

void checksum() {
    value_mismatch |= var_12 != 18446744071562067968ULL;
    value_mismatch |= var_13 != (signed char)0;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_7, zero, &var_12, &var_13);
  checksum();
  assert(!value_mismatch);
}
