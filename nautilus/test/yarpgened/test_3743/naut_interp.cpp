/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 3743
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=3743
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
void test(val<unsigned char> var_0, val<unsigned short> var_1, val<int> var_2, val<signed char> var_4, val<unsigned int> var_5, val<long long int> var_7, val<unsigned int> var_8, val<unsigned char> var_9, val<int> zero, val<short*> var_10, val<unsigned char*> var_11, val<bool*> var_12, val<short*> var_13) {
    *var_10 = ((/* implicit */val<short>) var_4);
    *var_11 = ((/* implicit */val<unsigned char>) ((((/* implicit */val<bool>) 48ULL)) ? (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) (val<bool>)1))) : (65408ULL)));
    *var_12 -= ((/* implicit */val<bool>) ((((/* implicit */val<bool>) var_0)) ? (((((/* implicit */val<bool>) ((((/* implicit */val<bool>) (val<unsigned char>)120)) ? (((/* implicit */val<int>) var_0)) : (((/* implicit */val<int>) var_9))))) ? (min((var_8), (((/* implicit */val<unsigned int>) var_2)))) : (min((((/* implicit */val<unsigned int>) var_4)), (var_8))))) : (((/* implicit */val<unsigned int>) ((((/* implicit */val<bool>) ((10658033066240910668ULL) + (((/* implicit */val<unsigned long long int>) var_7))))) ? (((((/* implicit */val<int>) var_1)) << (((var_7) + (6560750535738606059LL))))) : (((/* implicit */val<int>) var_4)))))));
    *var_13 += ((/* implicit */val<short>) min((var_5), (((((/* implicit */val<bool>) (val<unsigned char>)232)) ? (120480707U) : (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) (val<unsigned char>)154)))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)244;
unsigned short var_1 = (unsigned short)44405;
int var_2 = 1874136396;
signed char var_4 = (signed char)40;
unsigned int var_5 = 1717143996U;
long long int var_7 = -6560750535738606053LL;
unsigned int var_8 = 800262048U;
unsigned char var_9 = (unsigned char)104;
int zero = 0;
short var_10 = (short)-4571;
unsigned char var_11 = (unsigned char)93;
bool var_12 = (bool)0;
short var_13 = (short)-32107;
void init() {
}

void checksum() {
    value_mismatch |= var_10 != (short)40;
    value_mismatch |= var_11 != (unsigned char)1;
    value_mismatch |= var_12 != (bool)1;
    value_mismatch |= var_13 != (short)-6568;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_2, var_4, var_5, var_7, var_8, var_9, zero, &var_10, &var_11, &var_12, &var_13);
  checksum();
  assert(!value_mismatch);
}
