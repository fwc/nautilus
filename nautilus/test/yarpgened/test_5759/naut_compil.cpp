/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 5759
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=5759
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
void test(val<int> var_0, val<bool> var_3, val<bool> var_9, val<signed char> var_10, val<unsigned long long int> var_11, val<signed char> var_13, val<int> zero, val<unsigned char*> var_17, val<unsigned int*> var_18) {
    *var_17 &= ((val<unsigned char>) ((val<int>) ((((/* implicit */val<bool>) var_0)) ? (((/* implicit */val<int>) var_13)) : (((/* implicit */val<int>) var_10)))));
    *var_18 = ((/* implicit */val<unsigned int>) (((~(((var_9) ? (((/* implicit */val<int>) (val<signed char>)-54)) : (((/* implicit */val<int>) var_3)))))) - (((((((/* implicit */val<bool>) var_11)) ? (((/* implicit */val<int>) (val<bool>)0)) : (((/* implicit */val<int>) (val<bool>)0)))) / (((/* implicit */val<int>) ((val<unsigned short>) (val<unsigned char>)84)))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1409045756;
bool var_3 = (bool)1;
bool var_9 = (bool)0;
signed char var_10 = (signed char)44;
unsigned long long int var_11 = 4444225603076231645ULL;
signed char var_13 = (signed char)-112;
int zero = 0;
unsigned char var_17 = (unsigned char)198;
unsigned int var_18 = 1622703365U;
void init() {
}

void checksum() {
    value_mismatch |= var_17 != (unsigned char)128;
    value_mismatch |= var_18 != 4294967294U;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_3, var_9, var_10, var_11, var_13, zero, &var_17, &var_18);
  checksum();
  assert(!value_mismatch);
}
