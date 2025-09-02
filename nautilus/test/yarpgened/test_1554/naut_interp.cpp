/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 1554
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=1554
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
void test(val<long long int> var_10, val<unsigned char> var_11, val<int> zero, val<unsigned long long int*> var_14, val<signed char*> var_15) {
    *var_14 = ((/* implicit */val<unsigned long long int>) min((*var_14), (((/* implicit */val<unsigned long long int>) var_11))));
    *var_15 |= ((/* implicit */val<signed char>) var_10);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_10 = 7203212562154982884LL;
unsigned char var_11 = (unsigned char)36;
int zero = 0;
unsigned long long int var_14 = 4530895440328617012ULL;
signed char var_15 = (signed char)-118;
void init() {
}

void checksum() {
    value_mismatch |= var_14 != 36ULL;
    value_mismatch |= var_15 != (signed char)-18;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_10, var_11, zero, &var_14, &var_15);
  checksum();
  assert(!value_mismatch);
}
