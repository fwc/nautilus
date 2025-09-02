/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 7594
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=7594
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
void test(val<unsigned long long int> var_5, val<bool> var_10, val<int> zero, val<signed char*> var_11, val<unsigned short*> var_12) {
    *var_11 &= ((/* implicit */val<signed char>) (-(var_5)));
    *var_12 = ((/* implicit */val<unsigned short>) min((*var_12), (((/* implicit */val<unsigned short>) var_10))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_5 = 9668459734360798214ULL;
bool var_10 = (bool)0;
int zero = 0;
signed char var_11 = (signed char)52;
unsigned short var_12 = (unsigned short)4528;
void init() {
}

void checksum() {
    value_mismatch |= var_11 != (signed char)48;
    value_mismatch |= var_12 != (unsigned short)0;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_5, var_10, zero, &var_11, &var_12);
  checksum();
  assert(!value_mismatch);
}
