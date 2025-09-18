/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 3062
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=3062
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
void test(val<int> var_1, val<int> var_2, val<short> var_4, val<int> var_6, val<signed char> var_7, val<bool> var_9, val<int> zero, val<signed char*> var_10, val<unsigned char*> var_11) {
    *var_10 = ((/* implicit */val<signed char>) var_1);
    *var_11 = ((/* implicit */val<unsigned char>) ((((/* implicit */val<bool>) ((var_6) - (((/* implicit */val<int>) ((val<unsigned short>) var_2)))))) ? (max((min((((/* implicit */val<int>) var_4)), (var_2))), (((/* implicit */val<int>) var_7)))) : (((/* implicit */val<int>) var_9))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1919917621;
int var_2 = 233726213;
short var_4 = (short)6890;
int var_6 = -607294837;
signed char var_7 = (signed char)8;
bool var_9 = (bool)0;
int zero = 0;
signed char var_10 = (signed char)-100;
unsigned char var_11 = (unsigned char)196;
void init() {
}

void checksum() {
    value_mismatch |= var_10 != (signed char)-53;
    value_mismatch |= var_11 != (unsigned char)234;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_2, var_4, var_6, var_7, var_9, zero, &var_10, &var_11);
  checksum();
}
