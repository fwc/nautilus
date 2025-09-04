/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 5189
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=5189
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
void test(val<long long int> var_2, val<unsigned char> var_3, val<unsigned int> var_7, val<unsigned int> var_14, val<unsigned long long int> var_15, val<bool> var_16, val<int> zero, val<unsigned long long int*> var_19, val<bool*> var_20, val<unsigned int*> var_21) {
    *var_19 = ((/* implicit */val<unsigned long long int>) (+((-(2075317840U)))));
    *var_20 = ((/* implicit */val<bool>) min((*var_20), (((/* implicit */val<bool>) var_14))));
    *var_21 -= ((/* implicit */val<unsigned int>) (~(((((/* implicit */val<bool>) ((((/* implicit */val<bool>) var_15)) ? (((/* implicit */val<long long int>) var_7)) : (var_2)))) ? (((val<int>) var_15)) : (((((/* implicit */val<int>) var_16)) % (((/* implicit */val<int>) var_3))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -6911839619142504695LL;
unsigned char var_3 = (unsigned char)16;
unsigned int var_7 = 283865548U;
unsigned int var_14 = 2707420266U;
unsigned long long int var_15 = 8386687710186859353ULL;
bool var_16 = (bool)0;
int zero = 0;
unsigned long long int var_19 = 17357503561334656708ULL;
bool var_20 = (bool)0;
unsigned int var_21 = 2985753835U;
void init() {
}

void checksum() {
    value_mismatch |= var_19 != 2219649456ULL;
    value_mismatch |= var_20 != (bool)0;
    value_mismatch |= var_21 != 1640589381U;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_2, var_3, var_7, var_14, var_15, var_16, zero, &var_19, &var_20, &var_21);
  checksum();
  assert(!value_mismatch);
}
