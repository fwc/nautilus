/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 328
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=328
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
void test(val<unsigned int> var_1, val<int> var_3, val<unsigned short> var_5, val<long long int> var_6, val<int> var_7, val<int> var_10, val<int> zero, val<unsigned int*> var_13, val<long long int*> var_14, val<short*> var_15, val<int*> var_16, val<short*> var_17) {
    *var_13 = ((/* implicit */val<unsigned int>) min((*var_13), (((/* implicit */val<unsigned int>) (~(var_3))))));
    *var_14 = (~(((val<long long int>) ((((/* implicit */val<bool>) var_6)) ? (var_1) : (((/* implicit */val<unsigned int>) var_7))))));
    *var_15 -= ((/* implicit */val<short>) var_10);
    *var_16 = ((/* implicit */val<int>) max((*var_16), (((/* implicit */val<int>) (~(3223283435U))))));
    *var_17 -= ((/* implicit */val<short>) var_5);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1247785206U;
int var_3 = -229454664;
unsigned short var_5 = (unsigned short)48629;
long long int var_6 = -8495807198069561387LL;
int var_7 = -1307076971;
int var_10 = 960354431;
int zero = 0;
unsigned int var_13 = 1388210606U;
long long int var_14 = 4909364417343465266LL;
short var_15 = (short)6566;
int var_16 = 1519836836;
short var_17 = (short)-14781;
void init() {
}

void checksum() {
    value_mismatch |= var_13 != 229454663U;
    value_mismatch |= var_14 != -1247785207LL;
    value_mismatch |= var_15 != (short)16679;
    value_mismatch |= var_16 != 1519836836;
    value_mismatch |= var_17 != (short)2126;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_3, var_5, var_6, var_7, var_10, zero, &var_13, &var_14, &var_15, &var_16, &var_17);
  checksum();
}
