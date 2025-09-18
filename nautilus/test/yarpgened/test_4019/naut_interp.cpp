/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 4019
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=4019
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
void test(val<short> var_1, val<short> var_2, val<bool> var_8, val<int> zero, val<short*> var_10, val<short*> var_11) {
    *var_10 += ((/* implicit */val<short>) ((((((/* implicit */val<int>) var_1)) & (((/* implicit */val<int>) (val<bool>)1)))) < (((((((/* implicit */val<int>) (val<short>)-32747)) + (((/* implicit */val<int>) (val<short>)-32747)))) + ((+(((/* implicit */val<int>) var_2))))))));
    *var_11 = ((/* implicit */val<short>) max(((((!(((/* implicit */val<bool>) (val<short>)13776)))) || ((val<bool>)0))), ((((val<bool>)0) || (var_8)))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)11246;
short var_2 = (short)17440;
bool var_8 = (bool)1;
int zero = 0;
short var_10 = (short)-7961;
short var_11 = (short)-27697;
void init() {
}

void checksum() {
    value_mismatch |= var_10 != (short)-7961;
    value_mismatch |= var_11 != (short)1;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_2, var_8, zero, &var_10, &var_11);
  checksum();
}
