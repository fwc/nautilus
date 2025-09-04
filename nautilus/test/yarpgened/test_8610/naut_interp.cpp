/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 8610
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=8610
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
void test(val<long long int> var_1, val<int> var_2, val<int> var_4, val<signed char> var_7, val<long long int> var_8, val<signed char> var_9, val<int> var_11, val<unsigned char> var_13, val<int> zero, val<unsigned int*> var_14, val<unsigned short*> var_15, val<int*> var_16, val<int*> var_17) {
    *var_14 = ((/* implicit */val<unsigned int>) var_8);
    *var_15 = ((/* implicit */val<unsigned short>) ((((/* implicit */val<bool>) ((((/* implicit */val<bool>) var_1)) ? (((((/* implicit */val<bool>) var_13)) ? (var_11) : (var_2))) : (var_2)))) ? (var_8) : (((/* implicit */val<long long int>) ((((/* implicit */val<bool>) var_4)) ? (var_4) : ((-(((/* implicit */val<int>) var_9)))))))));
    *var_16 |= ((/* implicit */val<int>) var_1);
    *var_17 = ((/* implicit */val<int>) var_7);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 3580133889688060622LL;
int var_2 = -1945291291;
int var_4 = 1198346211;
signed char var_7 = (signed char)-32;
long long int var_8 = 2976344611767864416LL;
signed char var_9 = (signed char)40;
int var_11 = 1790009845;
unsigned char var_13 = (unsigned char)29;
int zero = 0;
unsigned int var_14 = 927079179U;
unsigned short var_15 = (unsigned short)18056;
int var_16 = -1123834830;
int var_17 = 604079958;
void init() {
}

void checksum() {
    value_mismatch |= var_14 != 2979155040U;
    value_mismatch |= var_15 != (unsigned short)19552;
    value_mismatch |= var_16 != -13375746;
    value_mismatch |= var_17 != -32;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_2, var_4, var_7, var_8, var_9, var_11, var_13, zero, &var_14, &var_15, &var_16, &var_17);
  checksum();
  assert(!value_mismatch);
}
