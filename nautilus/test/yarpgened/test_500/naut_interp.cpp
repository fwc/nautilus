/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 500
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=500
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
void test(val<unsigned short> var_3, val<signed char> var_4, val<short> var_7, val<unsigned int> var_8, val<bool> var_12, val<int> zero, val<bool*> var_16, val<long long int*> var_17, val<unsigned int*> var_18) {
    *var_16 = var_12;
    *var_17 &= ((/* implicit */val<long long int>) max((((((/* implicit */val<bool>) ((((/* implicit */val<bool>) 2147483647)) ? (((/* implicit */val<int>) var_3)) : (((/* implicit */val<int>) var_7))))) ? ((+(var_8))) : (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) min((((/* implicit */val<short>) var_4)), ((val<short>)-30239))))))), (((/* implicit */val<unsigned int>) (val<short>)-30243))));
    *var_18 = ((/* implicit */val<unsigned int>) ((((/* implicit */val<bool>) 65535U)) ? (((/* implicit */val<long long int>) ((/* implicit */val<int>) (val<short>)8885))) : (5LL)));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)62722;
signed char var_4 = (signed char)38;
short var_7 = (short)-25962;
unsigned int var_8 = 2955082504U;
bool var_12 = (bool)0;
int zero = 0;
bool var_16 = (bool)1;
long long int var_17 = -2783526794351501524LL;
unsigned int var_18 = 2351158961U;
void init() {
}

void checksum() {
    value_mismatch |= var_16 != (bool)0;
    value_mismatch |= var_17 != 3622144268LL;
    value_mismatch |= var_18 != 8885U;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_3, var_4, var_7, var_8, var_12, zero, &var_16, &var_17, &var_18);
  checksum();
}
