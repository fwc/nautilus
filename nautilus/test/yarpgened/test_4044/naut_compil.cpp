/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 4044
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=4044
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
void test(val<int> var_7, val<short> var_8, val<unsigned int> var_15, val<int> zero, val<unsigned int*> var_17, val<signed char*> var_18, val<unsigned short*> var_19) {
    *var_17 = ((/* implicit */val<unsigned int>) max((((/* implicit */val<int>) (!(((/* implicit */val<bool>) var_7))))), ((-(((/* implicit */val<int>) min((var_8), (((/* implicit */val<short>) (val<unsigned char>)0)))))))));
    *var_18 |= ((/* implicit */val<signed char>) (+(min((((/* implicit */val<unsigned int>) (-(((/* implicit */val<int>) (val<bool>)0))))), (((var_15) - (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) (val<unsigned short>)10892)))))))));
    *var_19 = ((/* implicit */val<unsigned short>) var_15);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_7 = -412737205;
short var_8 = (short)-12923;
unsigned int var_15 = 1591350948U;
int zero = 0;
unsigned int var_17 = 1485124321U;
signed char var_18 = (signed char)13;
unsigned short var_19 = (unsigned short)36448;
void init() {
}

void checksum() {
    value_mismatch |= var_17 != 12923U;
    value_mismatch |= var_18 != (signed char)13;
    value_mismatch |= var_19 != (unsigned short)5796;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_7, var_8, var_15, zero, &var_17, &var_18, &var_19);
  checksum();
  assert(!value_mismatch);
}
