/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 7057
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=7057
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
void test(val<unsigned long long int> var_0, val<int> var_1, val<unsigned long long int> var_2, val<unsigned short> var_3, val<unsigned char> var_4, val<unsigned short> var_6, val<long long int> var_8, val<int> zero, val<unsigned long long int*> var_12, val<short*> var_13, val<short*> var_14) {
    *var_12 = max((max((((/* implicit */val<unsigned long long int>) (!(((/* implicit */val<bool>) var_4))))), (min((var_0), (16885352957906376795ULL))))), (max((((/* implicit */val<unsigned long long int>) ((val<short>) 1561391115803174821ULL))), (((((/* implicit */val<bool>) var_6)) ? (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_4))) : (var_2))))));
    *var_13 = ((/* implicit */val<short>) max((*var_13), (((/* implicit */val<short>) ((((/* implicit */val<bool>) var_2)) ? (((/* implicit */val<long long int>) var_1)) : (max((((/* implicit */val<long long int>) ((val<unsigned int>) (val<unsigned char>)88))), ((-(var_8))))))))));
    *var_14 -= ((/* implicit */val<short>) min((((((/* implicit */val<bool>) var_6)) ? (((/* implicit */val<unsigned long long int>) ((((/* implicit */val<bool>) var_4)) ? (4276188266U) : (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_3)))))) : (((((/* implicit */val<bool>) var_4)) ? (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_6))) : (16885352957906376795ULL))))), (((/* implicit */val<unsigned long long int>) ((((/* implicit */val<bool>) 1865477972U)) ? (402409305) : (((/* implicit */val<int>) ((((/* implicit */val<bool>) -361213036)) || (((/* implicit */val<bool>) -1638304699))))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 8007106832895588600ULL;
int var_1 = -157446797;
unsigned long long int var_2 = 974065624217975978ULL;
unsigned short var_3 = (unsigned short)9312;
unsigned char var_4 = (unsigned char)242;
unsigned short var_6 = (unsigned short)44321;
long long int var_8 = 7389540924837198808LL;
int zero = 0;
unsigned long long int var_12 = 10639591006634729448ULL;
short var_13 = (short)-32247;
short var_14 = (short)29833;
void init() {
}

void checksum() {
    value_mismatch |= var_12 != 8007106832895588600ULL;
    value_mismatch |= var_13 != (short)-29325;
    value_mismatch |= var_14 != (short)11568;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_2, var_3, var_4, var_6, var_8, zero, &var_12, &var_13, &var_14);
  checksum();
  assert(!value_mismatch);
}
