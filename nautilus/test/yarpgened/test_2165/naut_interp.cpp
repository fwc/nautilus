/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 2165
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=2165
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
void test(val<unsigned int> var_0, val<unsigned short> var_2, val<unsigned short> var_13, val<int> var_15, val<int> zero, val<signed char*> var_18, val<unsigned short*> var_19) {
    *var_18 *= ((/* implicit */val<signed char>) ((((/* implicit */val<int>) ((val<signed char>) max((var_15), (((/* implicit */val<int>) var_2)))))) > (((/* implicit */val<int>) var_13))));
    *var_19 *= ((/* implicit */val<unsigned short>) var_0);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2609424090U;
unsigned short var_2 = (unsigned short)7117;
unsigned short var_13 = (unsigned short)10527;
int var_15 = 1469037312;
int zero = 0;
signed char var_18 = (signed char)-80;
unsigned short var_19 = (unsigned short)37705;
void init() {
}

void checksum() {
    value_mismatch |= var_18 != (signed char)0;
    value_mismatch |= var_19 != (unsigned short)49706;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_2, var_13, var_15, zero, &var_18, &var_19);
  checksum();
  assert(!value_mismatch);
}
