/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 4615
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=4615
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
void test(val<long long int> var_0, val<short> var_1, val<unsigned char> var_5, val<unsigned char> var_8, val<unsigned long long int> var_9, val<unsigned char> var_10, val<int> zero, val<unsigned int*> var_15, val<unsigned long long int*> var_16) {
    *var_15 = ((/* implicit */val<unsigned int>) max((*var_15), (((/* implicit */val<unsigned int>) ((((((/* implicit */val<bool>) var_0)) ? (((((/* implicit */val<int>) var_8)) ^ (((/* implicit */val<int>) var_10)))) : ((~(((/* implicit */val<int>) var_1)))))) < ((+(((((/* implicit */val<int>) var_10)) - (((/* implicit */val<int>) var_5)))))))))));
    *var_16 = var_9;
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 4075842397257752468LL;
short var_1 = (short)-22598;
unsigned char var_5 = (unsigned char)234;
unsigned char var_8 = (unsigned char)51;
unsigned long long int var_9 = 18287538366411413231ULL;
unsigned char var_10 = (unsigned char)68;
int zero = 0;
unsigned int var_15 = 3707729983U;
unsigned long long int var_16 = 9527098555076918238ULL;
void init() {
}

void checksum() {
    value_mismatch |= var_15 != 3707729983U;
    value_mismatch |= var_16 != 18287538366411413231ULL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_5, var_8, var_9, var_10, zero, &var_15, &var_16);
  checksum();
  assert(!value_mismatch);
}
