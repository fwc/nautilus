/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 8556
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=8556
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
void test(val<bool> var_0, val<unsigned int> var_1, val<signed char> var_3, val<short> var_5, val<unsigned char> var_9, val<bool> var_10, val<unsigned char> var_12, val<unsigned short> var_14, val<bool> var_16, val<unsigned int> var_17, val<unsigned int> var_18, val<int> zero, val<unsigned int*> var_19, val<signed char*> var_20, val<short*> var_21, val<unsigned int*> var_22) {
    *var_19 = ((/* implicit */val<unsigned int>) max((*var_19), (((/* implicit */val<unsigned int>) max((((((/* implicit */val<bool>) ((((/* implicit */val<unsigned int>) ((/* implicit */val<int>) (val<bool>)1))) ^ (var_17)))) ? (((/* implicit */val<int>) ((var_1) == (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_12)))))) : ((~(((/* implicit */val<int>) var_9)))))), (((/* implicit */val<int>) var_0)))))));
    *var_20 = ((/* implicit */val<signed char>) ((((/* implicit */val<bool>) (~(((/* implicit */val<int>) var_14))))) ? (min((((((/* implicit */val<int>) (val<bool>)1)) + (((/* implicit */val<int>) (val<bool>)1)))), (((/* implicit */val<int>) min((var_9), (((/* implicit */val<unsigned char>) (val<bool>)1))))))) : ((+(((/* implicit */val<int>) ((var_17) >= (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_10))))))))));
    *var_21 = ((/* implicit */val<short>) ((((/* implicit */val<bool>) var_3)) ? (((((/* implicit */val<bool>) ((((/* implicit */val<bool>) 3163147462902691026ULL)) ? (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) (val<bool>)1))) : (13392879965947812656ULL)))) ? (((/* implicit */val<long long int>) ((((/* implicit */val<bool>) 4ULL)) ? (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) (val<unsigned char>)0))) : (var_18)))) : (((((/* implicit */val<bool>) var_5)) ? (((/* implicit */val<long long int>) ((/* implicit */val<int>) var_5))) : (4528262932063013445LL))))) : (((/* implicit */val<long long int>) ((/* implicit */val<int>) (!(((/* implicit */val<bool>) (((val<bool>)1) ? (((/* implicit */val<int>) var_16)) : (((/* implicit */val<int>) (val<bool>)1)))))))))));
    *var_22 = (+(var_1));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

bool var_0 = (bool)0;
unsigned int var_1 = 1676638305U;
signed char var_3 = (signed char)-85;
short var_5 = (short)1304;
unsigned char var_9 = (unsigned char)211;
bool var_10 = (bool)0;
unsigned char var_12 = (unsigned char)140;
unsigned short var_14 = (unsigned short)58945;
bool var_16 = (bool)1;
unsigned int var_17 = 3162986175U;
unsigned int var_18 = 887993025U;
int zero = 0;
unsigned int var_19 = 1649381853U;
signed char var_20 = (signed char)91;
short var_21 = (short)12881;
unsigned int var_22 = 1208114943U;
void init() {
}

void checksum() {
    value_mismatch |= var_19 != 1649381853U;
    value_mismatch |= var_20 != (signed char)1;
    value_mismatch |= var_21 != (short)0;
    value_mismatch |= var_22 != 1676638305U;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_3, var_5, var_9, var_10, var_12, var_14, var_16, var_17, var_18, zero, &var_19, &var_20, &var_21, &var_22);
  checksum();
  assert(!value_mismatch);
}
