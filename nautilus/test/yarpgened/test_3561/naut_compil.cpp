/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 3561
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=3561
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
void test(val<short> var_6, val<long long int> var_9, val<int> zero, val<short*> var_14, val<unsigned int*> var_15) {
    *var_14 = ((/* implicit */val<short>) ((((/* implicit */val<bool>) (((+(149988424U))) & (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_6)))))) && (((/* implicit */val<bool>) min((var_9), (((/* implicit */val<long long int>) ((val<unsigned short>) (val<short>)15600))))))));
    *var_15 = 4294967276U;
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_6 = (short)16360;
long long int var_9 = -6448451445593457398LL;
int zero = 0;
short var_14 = (short)4719;
unsigned int var_15 = 1692336777U;
void init() {
}

void checksum() {
    value_mismatch |= var_14 != (short)1;
    value_mismatch |= var_15 != 4294967276U;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_6, var_9, zero, &var_14, &var_15);
  checksum();
}
