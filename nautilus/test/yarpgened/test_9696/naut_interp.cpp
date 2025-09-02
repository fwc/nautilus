/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 9696
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=9696
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
void test(val<unsigned int> var_1, val<unsigned int> var_4, val<unsigned char> var_7, val<unsigned int> var_13, val<signed char> var_14, val<int> zero, val<bool*> var_15, val<bool*> var_16, val<bool*> var_17, val<signed char*> var_18) {
    *var_15 |= ((/* implicit */val<bool>) (((((-(var_4))) >= (((/* implicit */val<unsigned int>) ((((/* implicit */val<bool>) var_1)) ? (((/* implicit */val<int>) var_7)) : (((/* implicit */val<int>) (val<unsigned char>)3))))))) ? (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_14))) : (((((/* implicit */val<unsigned int>) ((((/* implicit */val<bool>) (val<unsigned char>)252)) ? (((/* implicit */val<int>) (val<unsigned char>)3)) : (((/* implicit */val<int>) var_14))))) % (((((/* implicit */val<bool>) 9693442770368684660ULL)) ? (var_1) : (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) (val<unsigned char>)252)))))))));
    *var_16 = ((/* implicit */val<bool>) min((var_13), (((/* implicit */val<unsigned int>) var_7))));
    *var_17 = ((/* implicit */val<bool>) max((*var_17), (((/* implicit */val<bool>) (-(0U))))));
    *var_18 = ((/* implicit */val<signed char>) var_7);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 4195799239U;
unsigned int var_4 = 2611852888U;
unsigned char var_7 = (unsigned char)111;
unsigned int var_13 = 2351936365U;
signed char var_14 = (signed char)72;
int zero = 0;
bool var_15 = (bool)1;
bool var_16 = (bool)1;
bool var_17 = (bool)0;
signed char var_18 = (signed char)107;
void init() {
}

void checksum() {
    value_mismatch |= var_15 != (bool)1;
    value_mismatch |= var_16 != (bool)1;
    value_mismatch |= var_17 != (bool)0;
    value_mismatch |= var_18 != (signed char)111;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_4, var_7, var_13, var_14, zero, &var_15, &var_16, &var_17, &var_18);
  checksum();
  assert(!value_mismatch);
}
