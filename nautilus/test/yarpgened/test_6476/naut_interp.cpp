/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 6476
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=6476
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
void test(val<short> var_0, val<short> var_1, val<unsigned short> var_2, val<bool> var_8, val<int> var_12, val<int> zero, val<unsigned short*> var_20, val<unsigned short*> var_21, val<bool*> var_22, val<unsigned long long int*> var_23) {
    *var_20 = ((/* implicit */val<unsigned short>) var_0);
    *var_21 = ((/* implicit */val<unsigned short>) ((var_8) ? (((/* implicit */val<int>) max(((val<unsigned short>)65535), (((/* implicit */val<unsigned short>) ((val<short>) var_8)))))) : (((/* implicit */val<int>) var_2))));
    *var_22 = ((/* implicit */val<bool>) ((val<int>) min((((var_12) & (((/* implicit */val<int>) var_0)))), ((~(((/* implicit */val<int>) var_1)))))));
    *var_23 = ((/* implicit */val<unsigned long long int>) (val<unsigned short>)65535);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)21628;
short var_1 = (short)-22846;
unsigned short var_2 = (unsigned short)30059;
bool var_8 = (bool)1;
int var_12 = 1655435109;
int zero = 0;
unsigned short var_20 = (unsigned short)18162;
unsigned short var_21 = (unsigned short)27754;
bool var_22 = (bool)0;
unsigned long long int var_23 = 14179959537805595788ULL;
void init() {
}

void checksum() {
    value_mismatch |= var_20 != (unsigned short)21628;
    value_mismatch |= var_21 != (unsigned short)65535;
    value_mismatch |= var_22 != (bool)1;
    value_mismatch |= var_23 != 65535ULL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_2, var_8, var_12, zero, &var_20, &var_21, &var_22, &var_23);
  checksum();
  assert(!value_mismatch);
}
