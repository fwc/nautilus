/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 3166
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=3166
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
void test(val<short> var_1, val<int> var_2, val<long long int> var_4, val<unsigned long long int> var_8, val<unsigned long long int> var_9, val<bool> var_10, val<int> zero, val<unsigned short*> var_12, val<bool*> var_13, val<unsigned char*> var_14) {
    *var_12 = ((/* implicit */val<unsigned short>) (val<signed char>)-1);
    *var_13 = ((((/* implicit */val<bool>) var_2)) && (((/* implicit */val<bool>) ((((((/* implicit */val<bool>) var_9)) ? (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) (val<signed char>)-20))) : (var_9))) ^ (((var_10) ? (var_8) : (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_1)))))))));
    *var_14 ^= ((/* implicit */val<unsigned char>) var_4);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-11603;
int var_2 = -698590828;
long long int var_4 = 6286307762288698997LL;
unsigned long long int var_8 = 7151709364856796572ULL;
unsigned long long int var_9 = 16966882960150623024ULL;
bool var_10 = (bool)0;
int zero = 0;
unsigned short var_12 = (unsigned short)13821;
bool var_13 = (bool)0;
unsigned char var_14 = (unsigned char)93;
void init() {
}

void checksum() {
    value_mismatch |= var_12 != (unsigned short)65535;
    value_mismatch |= var_13 != (bool)1;
    value_mismatch |= var_14 != (unsigned char)40;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_2, var_4, var_8, var_9, var_10, zero, &var_12, &var_13, &var_14);
  checksum();
  assert(!value_mismatch);
}
