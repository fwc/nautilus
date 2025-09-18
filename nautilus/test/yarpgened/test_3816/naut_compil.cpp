/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 3816
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=3816
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
void test(val<int> var_0, val<unsigned int> var_2, val<bool> var_9, val<long long int> var_10, val<int> zero, val<int*> var_11, val<unsigned int*> var_12, val<int*> var_13) {
    *var_11 ^= (~(712867798));
    *var_12 = ((/* implicit */val<unsigned int>) max((*var_12), (((/* implicit */val<unsigned int>) ((((/* implicit */val<bool>) 12004508758172479444ULL)) ? ((+((-(var_10))))) : (((/* implicit */val<long long int>) ((((/* implicit */val<unsigned int>) (-(var_0)))) | (((((/* implicit */val<bool>) 9223372036854775791LL)) ? (((/* implicit */val<unsigned int>) -712867815)) : (2424732672U)))))))))));
    *var_13 = ((/* implicit */val<int>) (+(min((((/* implicit */val<unsigned int>) (val<bool>)0)), (((var_9) ? (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) (val<signed char>)-1))) : (var_2)))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -848757786;
unsigned int var_2 = 2371657941U;
bool var_9 = (bool)0;
long long int var_10 = -4570611546216057736LL;
int zero = 0;
int var_11 = 920992554;
unsigned int var_12 = 419055800U;
int var_13 = 1122650580;
void init() {
}

void checksum() {
    value_mismatch |= var_11 != -479741181;
    value_mismatch |= var_12 != 847367048U;
    value_mismatch |= var_13 != 0;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_2, var_9, var_10, zero, &var_11, &var_12, &var_13);
  checksum();
}
