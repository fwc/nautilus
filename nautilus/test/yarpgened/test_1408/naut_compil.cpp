/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 1408
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=1408
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
void test(val<signed char> var_1, val<bool> var_3, val<bool> var_5, val<unsigned short> var_8, val<signed char> var_13, val<int> zero, val<bool*> var_16, val<long long int*> var_17, val<unsigned short*> var_18, val<unsigned short*> var_19) {
    *var_16 = ((/* implicit */val<bool>) var_8);
    *var_17 = ((/* implicit */val<long long int>) ((((/* implicit */val<bool>) ((val<short>) ((val<signed char>) var_1)))) ? (((/* implicit */val<unsigned int>) ((var_5) ? (((/* implicit */val<int>) var_13)) : (((((/* implicit */val<int>) (val<short>)13611)) | (((/* implicit */val<int>) (val<bool>)1))))))) : (524287U)));
    *var_18 = ((/* implicit */val<unsigned short>) var_5);
    *var_19 |= ((/* implicit */val<unsigned short>) var_3);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)27;
bool var_3 = (bool)0;
bool var_5 = (bool)0;
unsigned short var_8 = (unsigned short)64057;
signed char var_13 = (signed char)25;
int zero = 0;
bool var_16 = (bool)0;
long long int var_17 = 9135174560252875481LL;
unsigned short var_18 = (unsigned short)2110;
unsigned short var_19 = (unsigned short)10954;
void init() {
}

void checksum() {
    value_mismatch |= var_16 != (bool)1;
    value_mismatch |= var_17 != 13611LL;
    value_mismatch |= var_18 != (unsigned short)0;
    value_mismatch |= var_19 != (unsigned short)10954;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_3, var_5, var_8, var_13, zero, &var_16, &var_17, &var_18, &var_19);
  checksum();
  assert(!value_mismatch);
}
