/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 4280
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=4280
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
void test(val<unsigned short> var_2, val<int> zero, val<unsigned long long int*> var_14, val<unsigned short*> var_15) {
    *var_14 = ((/* implicit */val<unsigned long long int>) min((*var_14), (((/* implicit */val<unsigned long long int>) ((val<long long int>) ((((/* implicit */val<bool>) min((((/* implicit */val<int>) (val<signed char>)(-127 - 1))), (261616207)))) ? (195161078U) : ((+(195161080U)))))))));
    *var_15 = var_2;
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)51454;
int zero = 0;
unsigned long long int var_14 = 8205759782376993314ULL;
unsigned short var_15 = (unsigned short)11208;
void init() {
}

void checksum() {
    value_mismatch |= var_14 != 195161078ULL;
    value_mismatch |= var_15 != (unsigned short)51454;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_2, zero, &var_14, &var_15);
  checksum();
}
