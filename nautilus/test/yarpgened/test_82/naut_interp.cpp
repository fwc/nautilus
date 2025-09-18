/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 82
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=82
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
void test(val<signed char> var_0, val<signed char> var_4, val<signed char> var_6, val<unsigned int> var_8, val<int> zero, val<unsigned long long int*> var_20, val<unsigned long long int*> var_21) {
    *var_20 = ((/* implicit */val<unsigned long long int>) ((((/* implicit */val<bool>) var_4)) ? (((/* implicit */val<int>) var_6)) : (((/* implicit */val<int>) var_0))));
    *var_21 = ((/* implicit */val<unsigned long long int>) var_8);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-29;
signed char var_4 = (signed char)95;
signed char var_6 = (signed char)112;
unsigned int var_8 = 2166690859U;
int zero = 0;
unsigned long long int var_20 = 4360147082794123891ULL;
unsigned long long int var_21 = 11339787033174493219ULL;
void init() {
}

void checksum() {
    value_mismatch |= var_20 != 112ULL;
    value_mismatch |= var_21 != 2166690859ULL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_4, var_6, var_8, zero, &var_20, &var_21);
  checksum();
}
