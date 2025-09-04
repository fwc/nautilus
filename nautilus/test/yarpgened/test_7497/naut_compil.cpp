/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 7497
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=7497
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
void test(val<bool> var_0, val<unsigned long long int> var_2, val<signed char> var_3, val<bool> var_4, val<signed char> var_7, val<int> zero, val<unsigned int*> var_18, val<unsigned int*> var_19, val<unsigned long long int*> var_20) {
    *var_18 = ((/* implicit */val<unsigned int>) ((((/* implicit */val<bool>) (val<signed char>)86)) ? (((/* implicit */val<int>) var_0)) : (((/* implicit */val<int>) (val<signed char>)91))));
    *var_19 &= min((((/* implicit */val<unsigned int>) var_7)), (((((val<unsigned int>) var_7)) + (((/* implicit */val<unsigned int>) ((((/* implicit */val<int>) var_4)) + (((/* implicit */val<int>) (val<bool>)1))))))));
    *var_20 &= ((((/* implicit */val<bool>) var_3)) ? (var_2) : (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) (val<signed char>)22))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

bool var_0 = (bool)0;
unsigned long long int var_2 = 653068577340866487ULL;
signed char var_3 = (signed char)50;
bool var_4 = (bool)0;
signed char var_7 = (signed char)-52;
int zero = 0;
unsigned int var_18 = 3986757344U;
unsigned int var_19 = 1771776378U;
unsigned long long int var_20 = 3777201880121119600ULL;
void init() {
}

void checksum() {
    value_mismatch |= var_18 != 0U;
    value_mismatch |= var_19 != 1771776328U;
    value_mismatch |= var_20 != 35233076016ULL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_2, var_3, var_4, var_7, zero, &var_18, &var_19, &var_20);
  checksum();
  assert(!value_mismatch);
}
