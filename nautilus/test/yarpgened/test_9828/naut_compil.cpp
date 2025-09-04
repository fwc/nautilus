/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 9828
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=9828
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
void test(val<short> var_0, val<int> var_3, val<long long int> var_5, val<unsigned short> var_10, val<long long int> var_11, val<int> zero, val<int*> var_13, val<unsigned int*> var_14) {
    *var_13 = ((/* implicit */val<int>) max((((((/* implicit */val<bool>) max((((/* implicit */val<long long int>) (val<unsigned char>)234)), (var_5)))) ? (((((/* implicit */val<bool>) var_0)) ? (((/* implicit */val<long long int>) var_3)) : (2305843009213693951LL))) : (((/* implicit */val<long long int>) ((/* implicit */val<int>) (val<unsigned char>)123))))), (((/* implicit */val<long long int>) ((val<bool>) ((((/* implicit */val<long long int>) ((/* implicit */val<int>) var_10))) / (var_11)))))));
    *var_14 = ((/* implicit */val<unsigned int>) (val<bool>)1);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-10507;
int var_3 = 1142803753;
long long int var_5 = 6097208624416659414LL;
unsigned short var_10 = (unsigned short)33010;
long long int var_11 = 4548366466154366415LL;
int zero = 0;
int var_13 = -2034542418;
unsigned int var_14 = 3057120347U;
void init() {
}

void checksum() {
    value_mismatch |= var_13 != 1142803753;
    value_mismatch |= var_14 != 1U;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_3, var_5, var_10, var_11, zero, &var_13, &var_14);
  checksum();
  assert(!value_mismatch);
}
