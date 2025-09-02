/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 7322
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=7322
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
void test(val<unsigned short> var_0, val<unsigned char> var_1, val<unsigned short> var_2, val<int> var_4, val<unsigned char> var_5, val<unsigned long long int> var_15, val<long long int> var_16, val<int> zero, val<bool*> var_19, val<unsigned short*> var_20, val<unsigned short*> var_21) {
    *var_19 = ((/* implicit */val<bool>) var_1);
    *var_20 -= ((/* implicit */val<unsigned short>) max((((/* implicit */val<unsigned long long int>) ((((/* implicit */val<bool>) 9411111843763092418ULL)) ? (((/* implicit */val<long long int>) max((var_4), (((/* implicit */val<int>) var_2))))) : (var_16)))), (min((((/* implicit */val<unsigned long long int>) var_4)), ((-(var_15)))))));
    *var_21 = ((/* implicit */val<unsigned short>) max((*var_21), (((/* implicit */val<unsigned short>) (-(((((/* implicit */val<bool>) var_5)) ? (var_15) : (((/* implicit */val<unsigned long long int>) min((var_4), (((/* implicit */val<int>) var_0))))))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)29308;
unsigned char var_1 = (unsigned char)252;
unsigned short var_2 = (unsigned short)9670;
int var_4 = 461972044;
unsigned char var_5 = (unsigned char)100;
unsigned long long int var_15 = 14434662417686612505ULL;
long long int var_16 = 1830305655939657390LL;
int zero = 0;
bool var_19 = (bool)1;
unsigned short var_20 = (unsigned short)38402;
unsigned short var_21 = (unsigned short)8095;
void init() {
}

void checksum() {
    value_mismatch |= var_19 != (bool)1;
    value_mismatch |= var_20 != (unsigned short)29622;
    value_mismatch |= var_21 != (unsigned short)46567;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_2, var_4, var_5, var_15, var_16, zero, &var_19, &var_20, &var_21);
  checksum();
  assert(!value_mismatch);
}
