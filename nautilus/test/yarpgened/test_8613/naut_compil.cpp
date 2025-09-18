/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 8613
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=8613
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
void test(val<bool> var_3, val<unsigned int> var_9, val<unsigned short> var_13, val<int> zero, val<bool*> var_15, val<long long int*> var_16, val<long long int*> var_17) {
    *var_15 = ((/* implicit */val<bool>) (-(((/* implicit */val<int>) (val<unsigned short>)24))));
    *var_16 = ((/* implicit */val<long long int>) ((((/* implicit */val<bool>) (val<signed char>)-32)) ? (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) max((((((/* implicit */val<bool>) 2086739467U)) || (((/* implicit */val<bool>) var_13)))), ((!(((/* implicit */val<bool>) (val<signed char>)-32)))))))) : (((((/* implicit */val<bool>) (+(4194303)))) ? (((/* implicit */val<unsigned int>) ((((/* implicit */val<int>) (val<unsigned char>)255)) + (((/* implicit */val<int>) (val<unsigned short>)15))))) : (((((/* implicit */val<bool>) (val<short>)7372)) ? (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) (val<signed char>)19))) : (var_9)))))));
    *var_17 &= ((/* implicit */val<long long int>) var_3);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

bool var_3 = (bool)1;
unsigned int var_9 = 1573333699U;
unsigned short var_13 = (unsigned short)47676;
int zero = 0;
bool var_15 = (bool)0;
long long int var_16 = 1025047481144347398LL;
long long int var_17 = -4761946936873793080LL;
void init() {
}

void checksum() {
    value_mismatch |= var_15 != (bool)1;
    value_mismatch |= var_16 != 1LL;
    value_mismatch |= var_17 != 0LL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_3, var_9, var_13, zero, &var_15, &var_16, &var_17);
  checksum();
}
