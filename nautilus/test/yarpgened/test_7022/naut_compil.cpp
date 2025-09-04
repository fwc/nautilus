/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 7022
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=7022
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
void test(val<long long int> var_3, val<int> var_10, val<int> zero, val<unsigned short*> var_14, val<unsigned long long int*> var_15, val<bool*> var_16) {
    *var_14 = ((/* implicit */val<unsigned short>) var_3);
    *var_15 = ((/* implicit */val<unsigned long long int>) min(((~(3421358400787483041LL))), (((/* implicit */val<long long int>) ((((/* implicit */val<bool>) (val<signed char>)98)) ? (2828345198U) : (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) (val<signed char>)-88))))))));
    *var_16 = ((/* implicit */val<bool>) ((((/* implicit */val<bool>) var_10)) ? (min((((/* implicit */val<unsigned long long int>) (val<signed char>)-99)), (17791939495177555718ULL))) : (((/* implicit */val<unsigned long long int>) ((((/* implicit */val<bool>) -3421358400787483027LL)) ? (((/* implicit */val<int>) (val<bool>)1)) : ((+(((/* implicit */val<int>) (val<short>)-2514)))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = -9053482812007938792LL;
int var_10 = -1004735698;
int zero = 0;
unsigned short var_14 = (unsigned short)4451;
unsigned long long int var_15 = 751693131410586579ULL;
bool var_16 = (bool)1;
void init() {
}

void checksum() {
    value_mismatch |= var_14 != (unsigned short)34072;
    value_mismatch |= var_15 != 15025385672922068574ULL;
    value_mismatch |= var_16 != (bool)1;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_3, var_10, zero, &var_14, &var_15, &var_16);
  checksum();
  assert(!value_mismatch);
}
