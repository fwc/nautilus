/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 682
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --seed=682
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
void test(val<bool> var_2, val<unsigned int> var_4, val<long long int> var_5, val<int> var_6, val<long long int> var_10, val<int> zero, val<unsigned char*> var_12, val<long long int*> var_13, val<short*> var_14) {
    *var_12 = ((/* implicit */val<unsigned char>) var_4);
    *var_13 = ((/* implicit */val<long long int>) ((((((/* implicit */val<bool>) var_10)) ? (((/* implicit */val<int>) (val<bool>)1)) : (((/* implicit */val<int>) ((var_5) == (((/* implicit */val<long long int>) var_6))))))) << ((((((val<bool>)0) ? (3203831874U) : (2704190091U))) - (2704190089U)))));
    *var_14 = ((/* implicit */val<short>) var_2);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

bool var_2 = (bool)0;
unsigned int var_4 = 4157350083U;
long long int var_5 = 35190354781948157LL;
int var_6 = 1484043069;
long long int var_10 = 8859716994479468339LL;
int zero = 0;
unsigned char var_12 = (unsigned char)97;
long long int var_13 = 8021087736469988895LL;
short var_14 = (short)16490;
void init() {
}

void checksum() {
    value_mismatch |= var_12 != (unsigned char)195;
    value_mismatch |= var_13 != 4LL;
    value_mismatch |= var_14 != (short)0;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_2, var_4, var_5, var_6, var_10, zero, &var_12, &var_13, &var_14);
  checksum();
  assert(!value_mismatch);
}
