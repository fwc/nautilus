/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 3221
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=3221
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
void test(val<long long int> var_1, val<bool> var_2, val<unsigned char> var_3, val<int> var_4, val<unsigned char> var_5, val<int> var_14, val<int> zero, val<unsigned short*> var_16, val<unsigned int*> var_17, val<bool*> var_18) {
    *var_16 = ((/* implicit */val<unsigned short>) min((*var_16), (((/* implicit */val<unsigned short>) var_1))));
    *var_17 = ((/* implicit */val<unsigned int>) var_14);
    *var_18 = ((/* implicit */val<bool>) ((((/* implicit */val<bool>) max(((~(((/* implicit */val<int>) var_5)))), ((~(((/* implicit */val<int>) (val<signed char>)-50))))))) ? (((((/* implicit */val<bool>) ((((/* implicit */val<bool>) 576460751766552576ULL)) ? (((/* implicit */val<int>) (val<signed char>)28)) : (((/* implicit */val<int>) (val<unsigned short>)50499))))) ? (((((/* implicit */val<bool>) 576460751766552576ULL)) ? (((/* implicit */val<int>) (val<unsigned short>)14391)) : (var_4))) : (((/* implicit */val<int>) var_2)))) : (max((((-164806937) & (((/* implicit */val<int>) (val<unsigned short>)14386)))), ((~(((/* implicit */val<int>) var_3))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -312327227326423148LL;
bool var_2 = (bool)1;
unsigned char var_3 = (unsigned char)103;
int var_4 = 1734038606;
unsigned char var_5 = (unsigned char)122;
int var_14 = -864823132;
int zero = 0;
unsigned short var_16 = (unsigned short)19009;
unsigned int var_17 = 3194391683U;
bool var_18 = (bool)0;
void init() {
}

void checksum() {
    value_mismatch |= var_16 != (unsigned short)19009;
    value_mismatch |= var_17 != 3430144164U;
    value_mismatch |= var_18 != (bool)1;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_2, var_3, var_4, var_5, var_14, zero, &var_16, &var_17, &var_18);
  checksum();
  assert(!value_mismatch);
}
