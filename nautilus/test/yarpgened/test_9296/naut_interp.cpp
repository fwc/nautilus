/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 9296
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=9296
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
void test(val<int> var_0, val<unsigned int> var_1, val<unsigned short> var_2, val<unsigned int> var_3, val<short> var_4, val<unsigned int> var_5, val<unsigned short> var_7, val<unsigned long long int> var_10, val<unsigned long long int> var_15, val<int> zero, val<unsigned short*> var_17, val<signed char*> var_18, val<bool*> var_19, val<bool*> var_20) {
    *var_17 = ((/* implicit */val<unsigned short>) (-(((/* implicit */val<int>) var_7))));
    *var_18 &= ((/* implicit */val<signed char>) ((((/* implicit */val<bool>) var_3)) ? (((/* implicit */val<int>) ((val<bool>) min((((/* implicit */val<unsigned int>) var_4)), (var_3))))) : (var_0)));
    *var_19 = ((/* implicit */val<bool>) ((val<unsigned int>) max(((+(((/* implicit */val<int>) (val<short>)-16837)))), (((/* implicit */val<int>) max((var_2), (var_2)))))));
    *var_20 *= ((/* implicit */val<bool>) min((((((/* implicit */val<bool>) var_15)) ? (var_10) : (((/* implicit */val<unsigned long long int>) ((val<long long int>) var_5))))), (((/* implicit */val<unsigned long long int>) var_1))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 274774334;
unsigned int var_1 = 4198032971U;
unsigned short var_2 = (unsigned short)15347;
unsigned int var_3 = 1650060430U;
short var_4 = (short)-4517;
unsigned int var_5 = 2840575726U;
unsigned short var_7 = (unsigned short)26752;
unsigned long long int var_10 = 10727199256962291512ULL;
unsigned long long int var_15 = 4567157707329547766ULL;
int zero = 0;
unsigned short var_17 = (unsigned short)7276;
signed char var_18 = (signed char)119;
bool var_19 = (bool)0;
bool var_20 = (bool)0;
void init() {
}

void checksum() {
    value_mismatch |= var_17 != (unsigned short)38784;
    value_mismatch |= var_18 != (signed char)1;
    value_mismatch |= var_19 != (bool)1;
    value_mismatch |= var_20 != (bool)0;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_2, var_3, var_4, var_5, var_7, var_10, var_15, zero, &var_17, &var_18, &var_19, &var_20);
  checksum();
  assert(!value_mismatch);
}
