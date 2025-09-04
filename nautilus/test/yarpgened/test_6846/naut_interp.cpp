/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 6846
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=6846
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
void test(val<bool> var_2, val<signed char> var_3, val<unsigned long long int> var_10, val<int> zero, val<unsigned char*> var_15, val<unsigned int*> var_16) {
    *var_15 = ((/* implicit */val<unsigned char>) ((((/* implicit */val<bool>) var_10)) || (((/* implicit */val<bool>) ((val<unsigned char>) min((((/* implicit */val<signed char>) var_2)), (var_3)))))));
    *var_16 = ((/* implicit */val<unsigned int>) var_2);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

bool var_2 = (bool)1;
signed char var_3 = (signed char)-1;
unsigned long long int var_10 = 5675381797817840502ULL;
int zero = 0;
unsigned char var_15 = (unsigned char)36;
unsigned int var_16 = 527544066U;
void init() {
}

void checksum() {
    value_mismatch |= var_15 != (unsigned char)1;
    value_mismatch |= var_16 != 1U;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_2, var_3, var_10, zero, &var_15, &var_16);
  checksum();
  assert(!value_mismatch);
}
