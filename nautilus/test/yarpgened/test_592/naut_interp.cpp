/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 592
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=592
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
void test(val<int> var_0, val<bool> var_5, val<bool> var_8, val<bool> var_11, val<int> var_12, val<unsigned char> var_13, val<int> zero, val<bool*> var_15, val<bool*> var_16, val<bool*> var_17, val<int*> var_18) {
    *var_15 ^= ((/* implicit */val<bool>) min((min((((/* implicit */val<int>) (val<bool>)1)), (-165036836))), (-1205984577)));
    *var_16 *= ((/* implicit */val<bool>) -1);
    *var_17 ^= ((/* implicit */val<bool>) ((var_8) ? (((((/* implicit */val<bool>) var_0)) ? (var_12) : (((var_11) ? (((/* implicit */val<int>) var_5)) : (((/* implicit */val<int>) var_13)))))) : (((/* implicit */val<int>) var_11))));
    *var_18 = (~(-1467494308));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -2080641052;
bool var_5 = (bool)1;
bool var_8 = (bool)0;
bool var_11 = (bool)0;
int var_12 = 785229881;
unsigned char var_13 = (unsigned char)86;
int zero = 0;
bool var_15 = (bool)0;
bool var_16 = (bool)1;
bool var_17 = (bool)0;
int var_18 = 834386569;
void init() {
}

void checksum() {
    value_mismatch |= var_15 != (bool)1;
    value_mismatch |= var_16 != (bool)1;
    value_mismatch |= var_17 != (bool)0;
    value_mismatch |= var_18 != 1467494307;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_5, var_8, var_11, var_12, var_13, zero, &var_15, &var_16, &var_17, &var_18);
  checksum();
  assert(!value_mismatch);
}
