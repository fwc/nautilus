/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 2693
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=2693
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
void test(val<short> var_0, val<unsigned char> var_1, val<signed char> var_2, val<long long int> var_5, val<signed char> var_6, val<unsigned short> var_7, val<bool> var_9, val<long long int> var_11, val<int> zero, val<bool*> var_12, val<long long int*> var_13, val<unsigned short*> var_14) {
    *var_12 = ((/* implicit */val<bool>) (((!(((/* implicit */val<bool>) ((((/* implicit */val<bool>) (val<short>)15044)) ? (((/* implicit */val<int>) var_1)) : (((/* implicit */val<int>) var_0))))))) ? (max(((~(var_5))), (((/* implicit */val<long long int>) (!(var_9)))))) : (((/* implicit */val<long long int>) ((/* implicit */val<int>) var_2)))));
    *var_13 = ((/* implicit */val<long long int>) max((*var_13), (((/* implicit */val<long long int>) (-(((/* implicit */val<int>) ((var_11) < (((/* implicit */val<long long int>) (-(((/* implicit */val<int>) (val<unsigned char>)103)))))))))))));
    *var_14 = ((/* implicit */val<unsigned short>) ((((/* implicit */val<bool>) ((((/* implicit */val<int>) var_2)) & (((/* implicit */val<int>) max((var_2), (var_6))))))) ? (((val<unsigned int>) ((var_11) ^ (((/* implicit */val<long long int>) ((/* implicit */val<int>) var_7)))))) : (((/* implicit */val<unsigned int>) ((((((/* implicit */val<long long int>) ((/* implicit */val<int>) var_6))) >= (var_5))) ? (((/* implicit */val<int>) (!(((/* implicit */val<bool>) var_0))))) : ((~(((/* implicit */val<int>) var_7)))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-17421;
unsigned char var_1 = (unsigned char)8;
signed char var_2 = (signed char)92;
long long int var_5 = -7583238912211543843LL;
signed char var_6 = (signed char)104;
unsigned short var_7 = (unsigned short)45810;
bool var_9 = (bool)0;
long long int var_11 = 1845732442607829026LL;
int zero = 0;
bool var_12 = (bool)0;
long long int var_13 = 4250165168376796059LL;
unsigned short var_14 = (unsigned short)4739;
void init() {
}

void checksum() {
    value_mismatch |= var_12 != (bool)1;
    value_mismatch |= var_13 != 4250165168376796059LL;
    value_mismatch |= var_14 != (unsigned short)29392;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_2, var_5, var_6, var_7, var_9, var_11, zero, &var_12, &var_13, &var_14);
  checksum();
  assert(!value_mismatch);
}
