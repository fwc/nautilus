/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 7296
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=7296
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
void test(val<short> var_9, val<bool> var_15, val<int> zero, val<unsigned char*> var_20, val<unsigned long long int*> var_21) {
    *var_20 -= ((/* implicit */val<unsigned char>) ((val<unsigned long long int>) (-(((((/* implicit */val<bool>) -1371765924540831271LL)) ? (((/* implicit */val<int>) var_9)) : (((/* implicit */val<int>) var_15)))))));
    *var_21 &= ((/* implicit */val<unsigned long long int>) (~(((/* implicit */val<int>) (val<unsigned short>)35533))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_9 = (short)2165;
bool var_15 = (bool)1;
int zero = 0;
unsigned char var_20 = (unsigned char)104;
unsigned long long int var_21 = 18173830489077043072ULL;
void init() {
}

void checksum() {
    value_mismatch |= var_20 != (unsigned char)221;
    value_mismatch |= var_21 != 18173830489077007616ULL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_9, var_15, zero, &var_20, &var_21);
  checksum();
}
