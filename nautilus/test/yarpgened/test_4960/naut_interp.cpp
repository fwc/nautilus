/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 4960
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=4960
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
void test(val<unsigned int> var_7, val<unsigned short> var_12, val<bool> var_17, val<bool> var_18, val<int> zero, val<unsigned int*> var_19, val<unsigned long long int*> var_20, val<signed char*> var_21) {
    *var_19 = ((/* implicit */val<unsigned int>) max((var_17), (var_18)));
    *var_20 = max((((/* implicit */val<unsigned long long int>) var_12)), ((((-(30ULL))) >> (11ULL))));
    *var_21 = ((/* implicit */val<signed char>) (!(((/* implicit */val<bool>) var_7))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_7 = 44965581U;
unsigned short var_12 = (unsigned short)36618;
bool var_17 = (bool)1;
bool var_18 = (bool)1;
int zero = 0;
unsigned int var_19 = 1075499620U;
unsigned long long int var_20 = 8375775909718426248ULL;
signed char var_21 = (signed char)98;
void init() {
}

void checksum() {
    value_mismatch |= var_19 != 1U;
    value_mismatch |= var_20 != 9007199254740991ULL;
    value_mismatch |= var_21 != (signed char)0;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_7, var_12, var_17, var_18, zero, &var_19, &var_20, &var_21);
  checksum();
  assert(!value_mismatch);
}
