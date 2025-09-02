/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 8367
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=8367
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
void test(val<bool> var_0, val<int> var_1, val<bool> var_3, val<long long int> var_4, val<long long int> var_6, val<long long int> var_8, val<unsigned int> var_10, val<unsigned short> var_11, val<unsigned short> var_14, val<long long int> var_16, val<int> zero, val<unsigned long long int*> var_17, val<unsigned short*> var_18, val<unsigned long long int*> var_19) {
    *var_17 = ((/* implicit */val<unsigned long long int>) ((((/* implicit */val<bool>) (-(((/* implicit */val<int>) ((var_0) && (((/* implicit */val<bool>) var_14)))))))) ? (((/* implicit */val<int>) (!((!(((/* implicit */val<bool>) var_4))))))) : ((+(((/* implicit */val<int>) var_3))))));
    *var_18 ^= ((/* implicit */val<unsigned short>) ((((/* implicit */val<long long int>) (~(((val<unsigned int>) 2113929216U))))) / (((((/* implicit */val<bool>) -575590585)) ? (((((/* implicit */val<bool>) var_16)) ? (((/* implicit */val<long long int>) 575590584)) : (var_8))) : (((/* implicit */val<long long int>) (+(3856092554U))))))));
    *var_19 = ((/* implicit */val<unsigned long long int>) max((*var_19), (((/* implicit */val<unsigned long long int>) ((((/* implicit */val<bool>) max((var_6), (((/* implicit */val<long long int>) var_1))))) ? (((/* implicit */val<int>) (!(((/* implicit */val<bool>) var_10))))) : (((/* implicit */val<int>) (!(((/* implicit */val<bool>) ((var_3) ? (((/* implicit */val<long long int>) ((/* implicit */val<int>) var_11))) : (8941289979167583775LL))))))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

bool var_0 = (bool)1;
int var_1 = 1069436644;
bool var_3 = (bool)0;
long long int var_4 = 6445943059887026086LL;
long long int var_6 = -4502128188862830118LL;
long long int var_8 = 7316967678799614947LL;
unsigned int var_10 = 4210540237U;
unsigned short var_11 = (unsigned short)52979;
unsigned short var_14 = (unsigned short)14181;
long long int var_16 = 6302550497557040242LL;
int zero = 0;
unsigned long long int var_17 = 6419012903037233571ULL;
unsigned short var_18 = (unsigned short)30630;
unsigned long long int var_19 = 10918213387781097884ULL;
void init() {
}

void checksum() {
    value_mismatch |= var_17 != 1ULL;
    value_mismatch |= var_18 != (unsigned short)30629;
    value_mismatch |= var_19 != 10918213387781097884ULL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_3, var_4, var_6, var_8, var_10, var_11, var_14, var_16, zero, &var_17, &var_18, &var_19);
  checksum();
  assert(!value_mismatch);
}
