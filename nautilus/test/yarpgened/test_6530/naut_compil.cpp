/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 6530
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=6530
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
void test(val<unsigned int> var_0, val<int> var_3, val<signed char> var_13, val<unsigned char> var_14, val<int> zero, val<short*> var_20, val<unsigned int*> var_21) {
    *var_20 = ((/* implicit */val<short>) ((val<unsigned long long int>) var_13));
    *var_21 = ((/* implicit */val<unsigned int>) (+(((((/* implicit */val<bool>) max((var_0), (((/* implicit */val<unsigned int>) (val<short>)3968))))) ? (((/* implicit */val<int>) ((((/* implicit */val<bool>) 2493528187U)) && (((/* implicit */val<bool>) var_14))))) : (var_3)))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 481469810U;
int var_3 = 1943041017;
signed char var_13 = (signed char)-125;
unsigned char var_14 = (unsigned char)16;
int zero = 0;
short var_20 = (short)7670;
unsigned int var_21 = 942915496U;
void init() {
}

void checksum() {
    value_mismatch |= var_20 != (short)-125;
    value_mismatch |= var_21 != 1U;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_3, var_13, var_14, zero, &var_20, &var_21);
  checksum();
  assert(!value_mismatch);
}
