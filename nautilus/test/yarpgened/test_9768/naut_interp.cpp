/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 9768
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=9768
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
void test(val<short> var_0, val<unsigned long long int> var_1, val<int> var_3, val<unsigned short> var_4, val<unsigned short> var_9, val<unsigned int> var_10, val<unsigned short> var_11, val<unsigned int> var_14, val<int> zero, val<long long int*> var_15, val<int*> var_16, val<long long int*> var_17, val<unsigned char*> var_18) {
    *var_15 = ((/* implicit */val<long long int>) ((((/* implicit */val<bool>) ((((/* implicit */val<bool>) ((((/* implicit */val<bool>) var_3)) ? (((/* implicit */val<int>) (val<short>)32739)) : (((/* implicit */val<int>) (val<short>)-1944))))) ? (((/* implicit */val<int>) ((var_1) == (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_4)))))) : (((/* implicit */val<int>) (val<bool>)0))))) ? (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_11))) : (((((/* implicit */val<bool>) ((((/* implicit */val<bool>) (-2147483647 - 1))) ? (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) (val<signed char>)-48))) : (4095U)))) ? (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) (val<unsigned short>)30004))) : (((((/* implicit */val<bool>) var_0)) ? (((/* implicit */val<unsigned long long int>) var_10)) : (var_1)))))));
    *var_16 = ((/* implicit */val<int>) var_10);
    *var_17 = ((/* implicit */val<long long int>) ((val<int>) ((((/* implicit */val<bool>) ((12279362046926846034ULL) * (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_9)))))) ? (((/* implicit */val<unsigned long long int>) var_14)) : ((+(4653400875391545657ULL))))));
    *var_18 = ((/* implicit */val<unsigned char>) min((*var_18), (((/* implicit */val<unsigned char>) ((val<unsigned short>) ((((/* implicit */val<bool>) 5639601508665882585LL)) ? (((/* implicit */val<int>) var_11)) : (((((/* implicit */val<bool>) var_4)) ? (-746481738) : (((/* implicit */val<int>) (val<short>)9083))))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)11159;
unsigned long long int var_1 = 8687225420554729978ULL;
int var_3 = 1293556729;
unsigned short var_4 = (unsigned short)36832;
unsigned short var_9 = (unsigned short)11480;
unsigned int var_10 = 2748545413U;
unsigned short var_11 = (unsigned short)10380;
unsigned int var_14 = 2462933125U;
int zero = 0;
long long int var_15 = 893963921091168056LL;
int var_16 = 1163373137;
long long int var_17 = 7422341026764015564LL;
unsigned char var_18 = (unsigned char)124;
void init() {
}

void checksum() {
    value_mismatch |= var_15 != 30004LL;
    value_mismatch |= var_16 != -1546421883;
    value_mismatch |= var_17 != -1832034171LL;
    value_mismatch |= var_18 != (unsigned char)124;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_3, var_4, var_9, var_10, var_11, var_14, zero, &var_15, &var_16, &var_17, &var_18);
  checksum();
  assert(!value_mismatch);
}
