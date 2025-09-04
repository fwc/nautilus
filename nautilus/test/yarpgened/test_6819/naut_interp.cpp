/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 6819
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=6819
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
void test(val<unsigned int> var_0, val<signed char> var_1, val<bool> var_2, val<unsigned long long int> var_3, val<bool> var_5, val<unsigned int> var_8, val<unsigned int> var_11, val<unsigned int> var_14, val<signed char> var_16, val<int> zero, val<unsigned int*> var_20, val<unsigned long long int*> var_21, val<unsigned long long int*> var_22, val<unsigned char*> var_23) {
    *var_20 &= max((((/* implicit */val<unsigned int>) (!(((/* implicit */val<bool>) ((var_8) << (((((/* implicit */val<int>) (val<short>)32767)) - (32740))))))))), (max((((/* implicit */val<unsigned int>) ((((/* implicit */val<bool>) var_1)) ? (((/* implicit */val<int>) (val<short>)15189)) : (((/* implicit */val<int>) var_2))))), (min((((/* implicit */val<unsigned int>) (val<short>)32767)), (var_11))))));
    *var_21 = ((/* implicit */val<unsigned long long int>) max((*var_21), (((/* implicit */val<unsigned long long int>) var_5))));
    *var_22 = ((/* implicit */val<unsigned long long int>) ((((/* implicit */val<bool>) ((((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) ((var_3) == (((/* implicit */val<unsigned long long int>) var_0)))))) * (min((((/* implicit */val<unsigned long long int>) var_14)), (var_3)))))) ? (var_0) : (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_16)))));
    *var_23 = ((/* implicit */val<unsigned char>) max((*var_23), (((/* implicit */val<unsigned char>) max((4294967292U), (((/* implicit */val<unsigned int>) (val<bool>)1)))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3950741140U;
signed char var_1 = (signed char)44;
bool var_2 = (bool)1;
unsigned long long int var_3 = 6821495498567057487ULL;
bool var_5 = (bool)1;
unsigned int var_8 = 400023923U;
unsigned int var_11 = 2492064678U;
unsigned int var_14 = 4267214114U;
signed char var_16 = (signed char)116;
int zero = 0;
unsigned int var_20 = 413600347U;
unsigned long long int var_21 = 2097590616619982222ULL;
unsigned long long int var_22 = 1593676961824195311ULL;
unsigned char var_23 = (unsigned char)92;
void init() {
}

void checksum() {
    value_mismatch |= var_20 != 2651U;
    value_mismatch |= var_21 != 2097590616619982222ULL;
    value_mismatch |= var_22 != 116ULL;
    value_mismatch |= var_23 != (unsigned char)252;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_2, var_3, var_5, var_8, var_11, var_14, var_16, zero, &var_20, &var_21, &var_22, &var_23);
  checksum();
  assert(!value_mismatch);
}
