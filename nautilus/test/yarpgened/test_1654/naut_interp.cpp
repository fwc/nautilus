/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 1654
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=1654
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
void test(val<short> var_3, val<unsigned char> var_15, val<long long int> var_17, val<int> var_18, val<int> zero, val<unsigned int*> var_19, val<unsigned int*> var_20, val<int*> var_21) {
    *var_19 *= ((max((((val<unsigned int>) var_17)), (((/* implicit */val<unsigned int>) (-2147483647 - 1))))) - (max((((/* implicit */val<unsigned int>) (-2147483647 - 1))), (2573024184U))));
    *var_20 = ((/* implicit */val<unsigned int>) min((*var_20), (((/* implicit */val<unsigned int>) min((((/* implicit */val<int>) (val<short>)-17219)), (min((((/* implicit */val<int>) max(((val<short>)0), (((/* implicit */val<short>) (val<unsigned char>)244))))), (var_18))))))));
    *var_21 = ((/* implicit */val<int>) max((((/* implicit */val<unsigned long long int>) ((((2147483647) / (((/* implicit */val<int>) (val<unsigned char>)56)))) & (((/* implicit */val<int>) max((var_3), (((/* implicit */val<short>) var_15)))))))), (min((((/* implicit */val<unsigned long long int>) (val<unsigned char>)244)), (((9058268942882460052ULL) - (((/* implicit */val<unsigned long long int>) -7050027126608223259LL))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)-5570;
unsigned char var_15 = (unsigned char)145;
long long int var_17 = 6313742576193624414LL;
int var_18 = -165640962;
int zero = 0;
unsigned int var_19 = 2945716558U;
unsigned int var_20 = 608968153U;
int var_21 = 1956658228;
void init() {
}

void checksum() {
    value_mismatch |= var_19 != 468455060U;
    value_mismatch |= var_20 != 608968153U;
    value_mismatch |= var_21 != 244;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_3, var_15, var_17, var_18, zero, &var_19, &var_20, &var_21);
  checksum();
  assert(!value_mismatch);
}
