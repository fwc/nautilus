/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 3709
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=3709
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
void test(val<int> var_1, val<bool> var_3, val<long long int> var_6, val<signed char> var_8, val<int> zero, val<unsigned long long int*> var_13, val<unsigned int*> var_14, val<int*> var_15) {
    *var_13 = ((/* implicit */val<unsigned long long int>) min((*var_13), (((/* implicit */val<unsigned long long int>) ((val<long long int>) ((((/* implicit */val<bool>) min((89537002115892311ULL), (((/* implicit */val<unsigned long long int>) var_3))))) ? ((+(((/* implicit */val<int>) var_8)))) : (((/* implicit */val<int>) ((val<unsigned short>) 18446744073709551615ULL)))))))));
    *var_14 = ((/* implicit */val<unsigned int>) var_6);
    *var_15 = var_1;
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 273990720;
bool var_3 = (bool)1;
long long int var_6 = 1194117038764380849LL;
signed char var_8 = (signed char)-75;
int zero = 0;
unsigned long long int var_13 = 18367037762555727813ULL;
unsigned int var_14 = 2536978531U;
int var_15 = 335792860;
void init() {
}

void checksum() {
    value_mismatch |= var_13 != 18367037762555727813ULL;
    value_mismatch |= var_14 != 3150631601U;
    value_mismatch |= var_15 != 273990720;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_3, var_6, var_8, zero, &var_13, &var_14, &var_15);
  checksum();
  assert(!value_mismatch);
}
