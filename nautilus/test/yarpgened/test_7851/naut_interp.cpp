/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 7851
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=7851
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
void test(val<unsigned char> var_3, val<unsigned int> var_6, val<signed char> var_8, val<unsigned short> var_10, val<int> zero, val<bool*> var_12, val<bool*> var_13) {
    *var_12 = ((/* implicit */val<bool>) max((var_6), (((/* implicit */val<unsigned int>) (+(((/* implicit */val<int>) var_10)))))));
    *var_13 = ((/* implicit */val<bool>) ((((/* implicit */val<bool>) ((val<unsigned long long int>) (+(((/* implicit */val<int>) (val<unsigned char>)21)))))) ? (((((/* implicit */val<bool>) var_3)) ? ((+(((/* implicit */val<int>) var_3)))) : (((/* implicit */val<int>) ((((/* implicit */val<bool>) (-2147483647 - 1))) && (((/* implicit */val<bool>) -1))))))) : (((/* implicit */val<int>) var_8))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)97;
unsigned int var_6 = 287628823U;
signed char var_8 = (signed char)29;
unsigned short var_10 = (unsigned short)2423;
int zero = 0;
bool var_12 = (bool)0;
bool var_13 = (bool)1;
void init() {
}

void checksum() {
    value_mismatch |= var_12 != (bool)1;
    value_mismatch |= var_13 != (bool)1;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_3, var_6, var_8, var_10, zero, &var_12, &var_13);
  checksum();
  assert(!value_mismatch);
}
