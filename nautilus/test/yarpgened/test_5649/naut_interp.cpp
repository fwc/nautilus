/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 5649
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=5649
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
void test(val<bool> var_4, val<signed char> var_7, val<signed char> var_8, val<unsigned int> var_10, val<unsigned char> var_11, val<int> zero, val<bool*> var_12, val<unsigned short*> var_13, val<unsigned char*> var_14) {
    *var_12 ^= ((/* implicit */val<bool>) ((((/* implicit */val<bool>) (((val<bool>)1) ? (((/* implicit */val<int>) var_11)) : (((/* implicit */val<int>) (!((val<bool>)1))))))) ? (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_4))) : (var_10)));
    *var_13 = ((/* implicit */val<unsigned short>) var_7);
    *var_14 -= ((/* implicit */val<unsigned char>) var_8);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

bool var_4 = (bool)0;
signed char var_7 = (signed char)73;
signed char var_8 = (signed char)-53;
unsigned int var_10 = 3593896767U;
unsigned char var_11 = (unsigned char)191;
int zero = 0;
bool var_12 = (bool)0;
unsigned short var_13 = (unsigned short)28929;
unsigned char var_14 = (unsigned char)22;
void init() {
}

void checksum() {
    value_mismatch |= var_12 != (bool)0;
    value_mismatch |= var_13 != (unsigned short)73;
    value_mismatch |= var_14 != (unsigned char)75;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_4, var_7, var_8, var_10, var_11, zero, &var_12, &var_13, &var_14);
  checksum();
  assert(!value_mismatch);
}
