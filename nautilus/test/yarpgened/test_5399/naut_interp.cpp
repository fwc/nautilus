/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 5399
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=5399
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
void test(val<unsigned int> var_5, val<signed char> var_8, val<short> var_14, val<signed char> var_18, val<int> zero, val<unsigned long long int*> var_19, val<signed char*> var_20, val<bool*> var_21, val<short*> var_22, val<unsigned short*> var_23) {
    *var_19 = ((/* implicit */val<unsigned long long int>) max((*var_19), (((/* implicit */val<unsigned long long int>) var_18))));
    *var_20 = ((/* implicit */val<signed char>) (~(var_5)));
    *var_21 = ((/* implicit */val<bool>) (~((~(((/* implicit */val<int>) var_14))))));
    *var_22 = ((/* implicit */val<short>) (((~(((/* implicit */val<int>) var_14)))) - (((/* implicit */val<int>) (val<unsigned short>)65530))));
    *var_23 = ((/* implicit */val<unsigned short>) (((((~((~(((/* implicit */val<int>) var_8)))))) + (2147483647))) << (((1027817900574476513ULL) - (1027817900574476513ULL)))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_5 = 337051666U;
signed char var_8 = (signed char)-21;
short var_14 = (short)32488;
signed char var_18 = (signed char)40;
int zero = 0;
unsigned long long int var_19 = 13899501683234294792ULL;
signed char var_20 = (signed char)-48;
bool var_21 = (bool)1;
short var_22 = (short)-2967;
unsigned short var_23 = (unsigned short)30779;
void init() {
}

void checksum() {
    value_mismatch |= var_19 != 13899501683234294792ULL;
    value_mismatch |= var_20 != (signed char)-19;
    value_mismatch |= var_21 != (bool)1;
    value_mismatch |= var_22 != (short)-32483;
    value_mismatch |= var_23 != (unsigned short)65514;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_5, var_8, var_14, var_18, zero, &var_19, &var_20, &var_21, &var_22, &var_23);
  checksum();
  assert(!value_mismatch);
}
