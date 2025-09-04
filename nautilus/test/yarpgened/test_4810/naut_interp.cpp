/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 4810
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=4810
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
void test(val<int> var_1, val<unsigned short> var_3, val<unsigned long long int> var_4, val<unsigned int> var_6, val<bool> var_7, val<bool> var_8, val<int> zero, val<int*> var_10, val<unsigned char*> var_11) {
    *var_10 &= ((/* implicit */val<int>) ((((/* implicit */val<bool>) ((((/* implicit */val<bool>) (val<unsigned char>)93)) ? ((-(((/* implicit */val<int>) (val<bool>)1)))) : (((((/* implicit */val<bool>) (val<signed char>)127)) ? (var_1) : (((/* implicit */val<int>) var_3))))))) ? (((((/* implicit */val<bool>) (val<unsigned char>)172)) ? (((var_7) ? (var_4) : (((/* implicit */val<unsigned long long int>) var_6)))) : (((/* implicit */val<unsigned long long int>) var_6)))) : (((/* implicit */val<unsigned long long int>) ((((/* implicit */val<bool>) var_3)) ? (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_8))) : (var_6))))));
    *var_11 = ((/* implicit */val<unsigned char>) ((((/* implicit */val<bool>) 12ULL)) ? (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) (!(var_7))))) : (5400081571692909946ULL)));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -2065473627;
unsigned short var_3 = (unsigned short)33916;
unsigned long long int var_4 = 1242762630103259963ULL;
unsigned int var_6 = 2772485660U;
bool var_7 = (bool)1;
bool var_8 = (bool)0;
int zero = 0;
int var_10 = 267918120;
unsigned char var_11 = (unsigned char)79;
void init() {
}

void checksum() {
    value_mismatch |= var_10 != 57154344;
    value_mismatch |= var_11 != (unsigned char)0;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_3, var_4, var_6, var_7, var_8, zero, &var_10, &var_11);
  checksum();
  assert(!value_mismatch);
}
