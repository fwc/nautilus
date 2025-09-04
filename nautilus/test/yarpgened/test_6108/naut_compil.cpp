/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 6108
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=6108
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
void test(val<unsigned int> var_3, val<unsigned short> var_4, val<bool> var_7, val<signed char> var_10, val<unsigned long long int> var_12, val<int> zero, val<unsigned short*> var_13, val<signed char*> var_14) {
    *var_13 = ((/* implicit */val<unsigned short>) var_7);
    *var_14 = ((/* implicit */val<signed char>) ((((/* implicit */val<bool>) var_3)) ? (((((/* implicit */val<bool>) var_10)) ? (((((/* implicit */val<bool>) (val<signed char>)(-127 - 1))) ? (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) (val<unsigned char>)243))) : (var_12))) : (((/* implicit */val<unsigned long long int>) -9129305613358751731LL)))) : (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_4)))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 378097699U;
unsigned short var_4 = (unsigned short)5766;
bool var_7 = (bool)1;
signed char var_10 = (signed char)-108;
unsigned long long int var_12 = 3606941903135140961ULL;
int zero = 0;
unsigned short var_13 = (unsigned short)61753;
signed char var_14 = (signed char)-82;
void init() {
}

void checksum() {
    value_mismatch |= var_13 != (unsigned short)1;
    value_mismatch |= var_14 != (signed char)-13;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_3, var_4, var_7, var_10, var_12, zero, &var_13, &var_14);
  checksum();
  assert(!value_mismatch);
}
