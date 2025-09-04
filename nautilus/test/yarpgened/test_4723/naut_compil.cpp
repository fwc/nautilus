/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 4723
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=4723
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
void test(val<unsigned short> var_3, val<int> var_4, val<short> var_6, val<short> var_8, val<unsigned short> var_11, val<int> zero, val<int*> var_14, val<int*> var_15, val<int*> var_16, val<short*> var_17) {
    *var_14 = (-(((/* implicit */val<int>) var_8)));
    *var_15 = ((/* implicit */val<int>) var_11);
    *var_16 = ((((var_4) & (((/* implicit */val<int>) ((val<unsigned short>) var_6))))) | (((((/* implicit */val<int>) var_3)) * (((/* implicit */val<int>) ((val<short>) 1210179141))))));
    *var_17 = (val<short>)24924;
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)24459;
int var_4 = 1213899221;
short var_6 = (short)12005;
short var_8 = (short)-9337;
unsigned short var_11 = (unsigned short)30373;
int zero = 0;
int var_14 = 1996895002;
int var_15 = -605327310;
int var_16 = -1326385508;
short var_17 = (short)-23468;
void init() {
}

void checksum() {
    value_mismatch |= var_14 != 9337;
    value_mismatch |= var_15 != 30373;
    value_mismatch |= var_16 != -211195145;
    value_mismatch |= var_17 != (short)24924;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_3, var_4, var_6, var_8, var_11, zero, &var_14, &var_15, &var_16, &var_17);
  checksum();
  assert(!value_mismatch);
}
