/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 8427
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=8427
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
void test(val<unsigned int> var_0, val<int> var_1, val<short> var_2, val<int> var_3, val<short> var_9, val<unsigned char> var_13, val<int> zero, val<signed char*> var_19, val<int*> var_20) {
    *var_19 ^= ((/* implicit */val<signed char>) ((((/* implicit */val<bool>) var_1)) ? ((-(((((/* implicit */val<int>) var_13)) >> (((((/* implicit */val<int>) var_2)) + (25966))))))) : (((((/* implicit */val<int>) ((val<short>) var_0))) * (((/* implicit */val<int>) min((var_9), (var_9))))))));
    *var_20 = ((/* implicit */val<int>) (!(((/* implicit */val<bool>) var_3))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3306078688U;
int var_1 = -201104361;
short var_2 = (short)-25959;
int var_3 = 1512318611;
short var_9 = (short)-3093;
unsigned char var_13 = (unsigned char)124;
int zero = 0;
signed char var_19 = (signed char)-29;
int var_20 = 192232540;
void init() {
}

void checksum() {
    value_mismatch |= var_19 != (signed char)-29;
    value_mismatch |= var_20 != 0;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_2, var_3, var_9, var_13, zero, &var_19, &var_20);
  checksum();
}
