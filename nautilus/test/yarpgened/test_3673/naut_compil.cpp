/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 3673
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=3673
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
void test(val<unsigned char> var_4, val<bool> var_6, val<unsigned int> var_8, val<bool> var_9, val<int> zero, val<unsigned char*> var_10, val<long long int*> var_11, val<unsigned long long int*> var_12) {
    *var_10 += ((/* implicit */val<unsigned char>) (-(((((/* implicit */val<bool>) ((((/* implicit */val<bool>) (val<short>)480)) ? (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) (val<bool>)1))) : (var_8)))) ? (((/* implicit */val<int>) var_9)) : (((/* implicit */val<int>) var_9))))));
    *var_11 = ((/* implicit */val<long long int>) min(((val<bool>)1), ((val<bool>)1)));
    *var_12 = ((/* implicit */val<unsigned long long int>) (-(((/* implicit */val<int>) min((var_4), (((/* implicit */val<unsigned char>) var_6)))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_4 = (unsigned char)253;
bool var_6 = (bool)1;
unsigned int var_8 = 4178593244U;
bool var_9 = (bool)1;
int zero = 0;
unsigned char var_10 = (unsigned char)12;
long long int var_11 = -1269979728921473479LL;
unsigned long long int var_12 = 4261537840440591791ULL;
void init() {
}

void checksum() {
    value_mismatch |= var_10 != (unsigned char)11;
    value_mismatch |= var_11 != 1LL;
    value_mismatch |= var_12 != 18446744073709551615ULL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_4, var_6, var_8, var_9, zero, &var_10, &var_11, &var_12);
  checksum();
  assert(!value_mismatch);
}
