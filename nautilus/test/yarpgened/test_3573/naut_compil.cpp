/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 3573
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=3573
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
void test(val<int> var_8, val<unsigned short> var_13, val<unsigned short> var_14, val<unsigned short> var_15, val<unsigned long long int> var_17, val<int> zero, val<bool*> var_19, val<unsigned long long int*> var_20, val<unsigned long long int*> var_21) {
    *var_19 = ((/* implicit */val<bool>) var_15);
    *var_20 = ((/* implicit */val<unsigned long long int>) max((*var_20), (((/* implicit */val<unsigned long long int>) var_13))));
    *var_21 -= ((((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_14))) & (max((min((((/* implicit */val<unsigned long long int>) (val<unsigned char>)157)), (var_17))), (((/* implicit */val<unsigned long long int>) var_8)))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_8 = -2101154750;
unsigned short var_13 = (unsigned short)10853;
unsigned short var_14 = (unsigned short)24609;
unsigned short var_15 = (unsigned short)13081;
unsigned long long int var_17 = 7938612562755071359ULL;
int zero = 0;
bool var_19 = (bool)0;
unsigned long long int var_20 = 461969762122815304ULL;
unsigned long long int var_21 = 15762303722370223142ULL;
void init() {
}

void checksum() {
    value_mismatch |= var_19 != (bool)1;
    value_mismatch |= var_20 != 461969762122815304ULL;
    value_mismatch |= var_21 != 15762303722370198566ULL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_8, var_13, var_14, var_15, var_17, zero, &var_19, &var_20, &var_21);
  checksum();
  assert(!value_mismatch);
}
