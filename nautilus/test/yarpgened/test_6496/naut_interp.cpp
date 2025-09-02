/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 6496
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=6496
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
void test(val<signed char> var_3, val<unsigned int> var_4, val<bool> var_5, val<bool> var_6, val<unsigned char> var_8, val<unsigned long long int> var_9, val<signed char> var_10, val<signed char> var_12, val<int> zero, val<signed char*> var_13, val<unsigned long long int*> var_14) {
    *var_13 = var_10;
    *var_14 = ((/* implicit */val<unsigned long long int>) ((((((/* implicit */val<unsigned int>) ((/* implicit */val<int>) max((((/* implicit */val<unsigned char>) var_12)), (var_8))))) & (((var_6) ? (var_4) : (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_6))))))) | (((((/* implicit */val<bool>) ((((/* implicit */val<unsigned long long int>) -799515438963073183LL)) ^ (var_9)))) ? (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) min((var_3), (((/* implicit */val<signed char>) var_5)))))) : (((((/* implicit */val<bool>) var_12)) ? (84225955U) : (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_8)))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)-9;
unsigned int var_4 = 1794184298U;
bool var_5 = (bool)1;
bool var_6 = (bool)1;
unsigned char var_8 = (unsigned char)220;
unsigned long long int var_9 = 544530873760184142ULL;
signed char var_10 = (signed char)-124;
signed char var_12 = (signed char)-96;
int zero = 0;
signed char var_13 = (signed char)39;
unsigned long long int var_14 = 6317380762303739600ULL;
void init() {
}

void checksum() {
    value_mismatch |= var_13 != (signed char)-124;
    value_mismatch |= var_14 != 4294967295ULL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_3, var_4, var_5, var_6, var_8, var_9, var_10, var_12, zero, &var_13, &var_14);
  checksum();
  assert(!value_mismatch);
}
