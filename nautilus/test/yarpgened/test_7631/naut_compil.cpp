/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 7631
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=7631
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
void test(val<int> var_7, val<int> zero, val<unsigned long long int*> var_18, val<unsigned long long int*> var_19) {
    *var_18 = ((/* implicit */val<unsigned long long int>) (-2147483647 - 1));
    *var_19 = ((/* implicit */val<unsigned long long int>) var_7);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_7 = -669526359;
int zero = 0;
unsigned long long int var_18 = 16825237830162510350ULL;
unsigned long long int var_19 = 2599538514971865275ULL;
void init() {
}

void checksum() {
    value_mismatch |= var_18 != 18446744071562067968ULL;
    value_mismatch |= var_19 != 18446744073040025257ULL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_7, zero, &var_18, &var_19);
  checksum();
  assert(!value_mismatch);
}
