/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 216
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=216
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
void test(val<unsigned int> var_2, val<signed char> var_11, val<int> zero, val<unsigned long long int*> var_17, val<unsigned long long int*> var_18) {
    *var_17 = ((/* implicit */val<unsigned long long int>) min(((+(var_2))), (((/* implicit */val<unsigned int>) var_11))));
    *var_18 |= ((/* implicit */val<unsigned long long int>) (val<unsigned char>)100);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 1530788492U;
signed char var_11 = (signed char)65;
int zero = 0;
unsigned long long int var_17 = 17640894203537111356ULL;
unsigned long long int var_18 = 16733024925921757373ULL;
void init() {
}

void checksum() {
    value_mismatch |= var_17 != 65ULL;
    value_mismatch |= var_18 != 16733024925921757437ULL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_2, var_11, zero, &var_17, &var_18);
  checksum();
  assert(!value_mismatch);
}
