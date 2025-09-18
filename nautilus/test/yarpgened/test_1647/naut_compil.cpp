/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 1647
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=1647
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
void test(val<short> var_0, val<bool> var_1, val<short> var_2, val<long long int> var_3, val<unsigned short> var_4, val<signed char> var_5, val<bool> var_8, val<signed char> var_9, val<unsigned int> var_10, val<short> var_12, val<unsigned char> var_13, val<bool> var_14, val<int> zero, val<int*> var_15, val<long long int*> var_16, val<unsigned char*> var_17, val<unsigned short*> var_18) {
    *var_15 &= ((/* implicit */val<int>) ((val<unsigned int>) max((((/* implicit */val<long long int>) var_5)), (((((/* implicit */val<bool>) var_9)) ? (((/* implicit */val<long long int>) ((/* implicit */val<int>) var_8))) : (var_3))))));
    *var_16 = ((/* implicit */val<long long int>) ((((/* implicit */val<bool>) ((((/* implicit */val<bool>) max((var_13), (((/* implicit */val<unsigned char>) var_8))))) ? (((/* implicit */val<int>) ((val<signed char>) var_10))) : (((var_14) ? (((/* implicit */val<int>) var_0)) : (((/* implicit */val<int>) var_2))))))) ? (((/* implicit */val<int>) var_12)) : (((/* implicit */val<int>) var_0))));
    *var_17 &= ((/* implicit */val<unsigned char>) var_9);
    *var_18 = ((/* implicit */val<unsigned short>) min((((/* implicit */val<unsigned int>) ((((/* implicit */val<bool>) min((((/* implicit */val<signed char>) (val<bool>)1)), (var_9)))) ? (((/* implicit */val<int>) ((val<unsigned char>) var_8))) : (((/* implicit */val<int>) (!(var_1))))))), (max((max((var_10), (((/* implicit */val<unsigned int>) var_13)))), (((/* implicit */val<unsigned int>) ((var_14) ? (((/* implicit */val<int>) var_1)) : (((/* implicit */val<int>) var_4)))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)9335;
bool var_1 = (bool)1;
short var_2 = (short)-15076;
long long int var_3 = -8666779453569142486LL;
unsigned short var_4 = (unsigned short)16837;
signed char var_5 = (signed char)51;
bool var_8 = (bool)1;
signed char var_9 = (signed char)-97;
unsigned int var_10 = 3165698485U;
short var_12 = (short)-14090;
unsigned char var_13 = (unsigned char)68;
bool var_14 = (bool)0;
int zero = 0;
int var_15 = 644171896;
long long int var_16 = -1422254065798683041LL;
unsigned char var_17 = (unsigned char)227;
unsigned short var_18 = (unsigned short)18785;
void init() {
}

void checksum() {
    value_mismatch |= var_15 != 48;
    value_mismatch |= var_16 != -14090LL;
    value_mismatch |= var_17 != (unsigned char)131;
    value_mismatch |= var_18 != (unsigned short)1;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_2, var_3, var_4, var_5, var_8, var_9, var_10, var_12, var_13, var_14, zero, &var_15, &var_16, &var_17, &var_18);
  checksum();
}
