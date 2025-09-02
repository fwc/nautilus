/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 7588
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=7588
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
void test(val<signed char> var_1, val<int> var_2, val<unsigned int> var_3, val<int> var_4, val<short> var_11, val<short> var_15, val<int> zero, val<bool*> var_19, val<unsigned char*> var_20) {
    *var_19 = ((/* implicit */val<bool>) max((((/* implicit */val<int>) min((var_1), ((val<signed char>)-100)))), (max((((/* implicit */val<int>) (val<short>)-1292)), (((((/* implicit */val<bool>) (val<short>)1294)) ? (var_2) : (((/* implicit */val<int>) (val<bool>)1))))))));
    *var_20 ^= ((/* implicit */val<unsigned char>) ((val<long long int>) ((((((/* implicit */val<bool>) var_2)) && (((/* implicit */val<bool>) var_11)))) ? (((/* implicit */val<unsigned int>) max((((/* implicit */val<int>) var_15)), (var_4)))) : (min((var_3), (((/* implicit */val<unsigned int>) var_1)))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-6;
int var_2 = 891881652;
unsigned int var_3 = 3073299724U;
int var_4 = 461451123;
short var_11 = (short)-16136;
short var_15 = (short)-22376;
int zero = 0;
bool var_19 = (bool)0;
unsigned char var_20 = (unsigned char)145;
void init() {
}

void checksum() {
    value_mismatch |= var_19 != (bool)1;
    value_mismatch |= var_20 != (unsigned char)226;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_2, var_3, var_4, var_11, var_15, zero, &var_19, &var_20);
  checksum();
  assert(!value_mismatch);
}
