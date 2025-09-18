/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 3069
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=3069
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
void test(val<unsigned int> var_3, val<int> var_6, val<int> zero, val<unsigned int*> var_13, val<unsigned long long int*> var_14) {
    *var_13 = ((/* implicit */val<unsigned int>) min((*var_13), (((/* implicit */val<unsigned int>) var_6))));
    *var_14 = ((/* implicit */val<unsigned long long int>) ((((/* implicit */val<bool>) ((val<int>) min((((/* implicit */val<unsigned long long int>) 808847383U)), (1124429949906528611ULL))))) ? (var_3) : (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) ((val<unsigned short>) (-(((/* implicit */val<int>) (val<bool>)1)))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 3490142412U;
int var_6 = 1197186761;
int zero = 0;
unsigned int var_13 = 232354761U;
unsigned long long int var_14 = 201951873301196331ULL;
void init() {
}

void checksum() {
    value_mismatch |= var_13 != 232354761U;
    value_mismatch |= var_14 != 3490142412ULL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_3, var_6, zero, &var_13, &var_14);
  checksum();
}
