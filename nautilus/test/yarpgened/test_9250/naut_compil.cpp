/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 9250
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=9250
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
void test(val<unsigned char> var_2, val<bool> var_5, val<unsigned int> var_10, val<int> zero, val<unsigned int*> var_11, val<signed char*> var_12) {
    *var_11 = ((/* implicit */val<unsigned int>) (-(((/* implicit */val<int>) var_5))));
    *var_12 = ((/* implicit */val<signed char>) ((((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) ((val<bool>) (+(((/* implicit */val<int>) var_2))))))) / (((((/* implicit */val<bool>) (val<signed char>)125)) ? (((/* implicit */val<unsigned long long int>) min((((/* implicit */val<unsigned int>) (val<unsigned short>)14818)), (var_10)))) : (((((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) (val<signed char>)66))) / (13341065375172524844ULL)))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)195;
bool var_5 = (bool)1;
unsigned int var_10 = 1596639058U;
int zero = 0;
unsigned int var_11 = 3035858452U;
signed char var_12 = (signed char)-88;
void init() {
}

void checksum() {
    value_mismatch |= var_11 != 4294967295U;
    value_mismatch |= var_12 != (signed char)0;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_2, var_5, var_10, zero, &var_11, &var_12);
  checksum();
}
