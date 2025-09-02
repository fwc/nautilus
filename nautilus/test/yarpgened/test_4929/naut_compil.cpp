/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 4929
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=4929
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
void test(val<unsigned int> var_0, val<unsigned char> var_3, val<short> var_4, val<unsigned long long int> var_6, val<short> var_8, val<int> var_11, val<long long int> var_12, val<short> var_13, val<unsigned long long int> var_15, val<long long int> var_16, val<unsigned char> var_18, val<int> zero, val<short*> var_19, val<unsigned int*> var_20, val<int*> var_21) {
    *var_19 = ((/* implicit */val<short>) min((*var_19), (((/* implicit */val<short>) max((((((/* implicit */val<bool>) (+(((/* implicit */val<int>) var_13))))) ? (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_4))) : (5240126395343902596ULL))), (max((min((((/* implicit */val<unsigned long long int>) var_8)), (var_6))), (((/* implicit */val<unsigned long long int>) (!(((/* implicit */val<bool>) var_3))))))))))));
    *var_20 = ((/* implicit */val<unsigned int>) (~(((((/* implicit */val<bool>) (-(var_11)))) ? (((/* implicit */val<unsigned long long int>) max((1823953510U), (((/* implicit */val<unsigned int>) (val<bool>)1))))) : (((((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_3))) + (var_15)))))));
    *var_21 = ((/* implicit */val<int>) ((((/* implicit */val<bool>) (((+(1048575LL))) - (max((var_12), (((/* implicit */val<long long int>) var_4))))))) ? (((var_16) + (((/* implicit */val<long long int>) ((((/* implicit */val<bool>) (val<unsigned char>)128)) ? (((/* implicit */val<int>) (val<bool>)1)) : (((/* implicit */val<int>) (val<short>)16320))))))) : (((((var_16) - (((/* implicit */val<long long int>) var_0)))) + (((/* implicit */val<long long int>) ((/* implicit */val<int>) var_18)))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2704949475U;
unsigned char var_3 = (unsigned char)19;
short var_4 = (short)3987;
unsigned long long int var_6 = 6527228479500640669ULL;
short var_8 = (short)8168;
int var_11 = 1356384917;
long long int var_12 = 3821506061879540812LL;
short var_13 = (short)29429;
unsigned long long int var_15 = 6232141187857268717ULL;
long long int var_16 = -1200461253876674830LL;
unsigned char var_18 = (unsigned char)36;
int zero = 0;
short var_19 = (short)6280;
unsigned int var_20 = 1131907507U;
int var_21 = -1695682595;
void init() {
}

void checksum() {
    value_mismatch |= var_19 != (short)6280;
    value_mismatch |= var_20 != 2471013785U;
    value_mismatch |= var_21 != -1810919693;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_3, var_4, var_6, var_8, var_11, var_12, var_13, var_15, var_16, var_18, zero, &var_19, &var_20, &var_21);
  checksum();
  assert(!value_mismatch);
}
