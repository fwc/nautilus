/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 3199
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=3199
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
void test(val<long long int> var_0, val<long long int> var_1, val<long long int> var_2, val<unsigned int> var_5, val<signed char> var_6, val<signed char> var_8, val<unsigned char> var_11, val<bool> var_12, val<unsigned int> var_16, val<long long int> var_17, val<int> zero, val<short*> var_18, val<signed char*> var_19, val<short*> var_20) {
    *var_18 = ((/* implicit */val<short>) ((var_1) & (((((/* implicit */val<long long int>) ((/* implicit */val<int>) var_12))) & (max((var_17), (var_1)))))));
    *var_19 = ((/* implicit */val<signed char>) var_12);
    *var_20 = ((/* implicit */val<short>) min((((/* implicit */val<long long int>) (((+(var_5))) * (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) (!(((/* implicit */val<bool>) var_8))))))))), (((((/* implicit */val<bool>) ((((/* implicit */val<bool>) var_6)) ? (var_1) : (var_0)))) ? (((((/* implicit */val<bool>) var_11)) ? (((/* implicit */val<long long int>) ((/* implicit */val<int>) var_6))) : (var_17))) : (min((((/* implicit */val<long long int>) var_16)), (var_2)))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -5723750459282065687LL;
long long int var_1 = -7929404791363091950LL;
long long int var_2 = -8751700749913624170LL;
unsigned int var_5 = 3301375732U;
signed char var_6 = (signed char)39;
signed char var_8 = (signed char)-98;
unsigned char var_11 = (unsigned char)79;
bool var_12 = (bool)1;
unsigned int var_16 = 1328509305U;
long long int var_17 = -463915249890630098LL;
int zero = 0;
short var_18 = (short)28942;
signed char var_19 = (signed char)-17;
short var_20 = (short)-16480;
void init() {
}

void checksum() {
    value_mismatch |= var_18 != (short)0;
    value_mismatch |= var_19 != (signed char)1;
    value_mismatch |= var_20 != (short)0;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_2, var_5, var_6, var_8, var_11, var_12, var_16, var_17, zero, &var_18, &var_19, &var_20);
  checksum();
}
