/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 9670
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=9670
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
void test(val<unsigned int> var_1, val<unsigned long long int> var_4, val<signed char> var_8, val<unsigned int> var_11, val<int> zero, val<signed char*> var_18, val<bool*> var_19) {
    *var_18 = ((/* implicit */val<signed char>) ((val<unsigned int>) var_11));
    *var_19 = ((/* implicit */val<bool>) min((var_4), (((/* implicit */val<unsigned long long int>) ((((/* implicit */val<unsigned long long int>) ((((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_8))) | (var_1)))) < (min((((/* implicit */val<unsigned long long int>) (val<bool>)1)), (0ULL))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2632283593U;
unsigned long long int var_4 = 8993171524521311920ULL;
signed char var_8 = (signed char)-38;
unsigned int var_11 = 1752380734U;
int zero = 0;
signed char var_18 = (signed char)-83;
bool var_19 = (bool)0;
void init() {
}

void checksum() {
    value_mismatch |= var_18 != (signed char)62;
    value_mismatch |= var_19 != (bool)0;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_4, var_8, var_11, zero, &var_18, &var_19);
  checksum();
  assert(!value_mismatch);
}
