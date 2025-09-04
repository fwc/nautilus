/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 2802
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=2802
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
void test(val<unsigned int> var_2, val<bool> var_3, val<int> zero, val<signed char*> var_14, val<unsigned short*> var_15) {
    *var_14 += ((/* implicit */val<signed char>) ((5051724397783393864LL) < (((/* implicit */val<long long int>) ((((/* implicit */val<bool>) (val<unsigned short>)59816)) ? (((/* implicit */val<int>) var_3)) : (((/* implicit */val<int>) (!(var_3)))))))));
    *var_15 += ((/* implicit */val<unsigned short>) var_2);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 447688510U;
bool var_3 = (bool)0;
int zero = 0;
signed char var_14 = (signed char)20;
unsigned short var_15 = (unsigned short)36202;
void init() {
}

void checksum() {
    value_mismatch |= var_14 != (signed char)20;
    value_mismatch |= var_15 != (unsigned short)48296;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_2, var_3, zero, &var_14, &var_15);
  checksum();
  assert(!value_mismatch);
}
