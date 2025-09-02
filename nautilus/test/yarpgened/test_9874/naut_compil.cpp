/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 9874
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=9874
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
void test(val<int> var_5, val<int> var_7, val<signed char> var_8, val<signed char> var_14, val<int> zero, val<int*> var_17, val<unsigned char*> var_18) {
    *var_17 = ((/* implicit */val<int>) max((*var_17), (((/* implicit */val<int>) min((((/* implicit */val<unsigned long long int>) ((val<unsigned int>) ((((/* implicit */val<bool>) (val<unsigned short>)17179)) ? (((/* implicit */val<unsigned int>) var_5)) : (806570604U))))), (min((((val<unsigned long long int>) 3488396692U)), (((/* implicit */val<unsigned long long int>) var_14)))))))));
    *var_18 = ((/* implicit */val<unsigned char>) ((((/* implicit */val<bool>) ((((/* implicit */val<bool>) (-(1861691194)))) ? ((+((-2147483647 - 1)))) : ((+(((/* implicit */val<int>) var_8))))))) ? (((/* implicit */val<unsigned long long int>) var_7)) : (max((((val<unsigned long long int>) -2077931811)), (((/* implicit */val<unsigned long long int>) ((-25010476) / (((/* implicit */val<int>) (val<bool>)1)))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_5 = 467436492;
int var_7 = -170276369;
signed char var_8 = (signed char)101;
signed char var_14 = (signed char)-50;
int zero = 0;
int var_17 = 2112368727;
unsigned char var_18 = (unsigned char)250;
void init() {
}

void checksum() {
    value_mismatch |= var_17 != 2112368727;
    value_mismatch |= var_18 != (unsigned char)239;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_5, var_7, var_8, var_14, zero, &var_17, &var_18);
  checksum();
  assert(!value_mismatch);
}
