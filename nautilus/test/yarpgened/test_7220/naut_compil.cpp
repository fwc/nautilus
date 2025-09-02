/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 7220
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=7220
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
void test(val<unsigned int> var_2, val<unsigned short> var_3, val<unsigned char> var_10, val<int> zero, val<unsigned char*> var_12, val<int*> var_13) {
    *var_12 |= ((/* implicit */val<unsigned char>) var_3);
    *var_13 = ((/* implicit */val<int>) ((((/* implicit */val<bool>) min((4294967295U), ((+(14U)))))) ? (var_2) : (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_10)))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 296453297U;
unsigned short var_3 = (unsigned short)23199;
unsigned char var_10 = (unsigned char)7;
int zero = 0;
unsigned char var_12 = (unsigned char)76;
int var_13 = -125887560;
void init() {
}

void checksum() {
    value_mismatch |= var_12 != (unsigned char)223;
    value_mismatch |= var_13 != 296453297;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_2, var_3, var_10, zero, &var_12, &var_13);
  checksum();
  assert(!value_mismatch);
}
