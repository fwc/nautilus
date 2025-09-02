/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 2185
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=2185
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
void test(val<bool> var_1, val<unsigned char> var_3, val<unsigned int> var_6, val<unsigned int> var_15, val<unsigned long long int> var_16, val<int> zero, val<unsigned char*> var_17, val<bool*> var_18, val<unsigned long long int*> var_19, val<unsigned short*> var_20) {
    *var_17 &= ((val<unsigned char>) max((var_6), (((/* implicit */val<unsigned int>) var_1))));
    *var_18 = ((/* implicit */val<bool>) 2219205837884676547ULL);
    *var_19 = ((((/* implicit */val<bool>) var_3)) ? (var_16) : (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_1))));
    *var_20 = ((/* implicit */val<unsigned short>) max((*var_20), (((/* implicit */val<unsigned short>) (-(var_15))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

bool var_1 = (bool)1;
unsigned char var_3 = (unsigned char)38;
unsigned int var_6 = 3533815018U;
unsigned int var_15 = 3347814621U;
unsigned long long int var_16 = 12025312570583797744ULL;
int zero = 0;
unsigned char var_17 = (unsigned char)33;
bool var_18 = (bool)0;
unsigned long long int var_19 = 288065966607404104ULL;
unsigned short var_20 = (unsigned short)26783;
void init() {
}

void checksum() {
    value_mismatch |= var_17 != (unsigned char)32;
    value_mismatch |= var_18 != (bool)1;
    value_mismatch |= var_19 != 12025312570583797744ULL;
    value_mismatch |= var_20 != (unsigned short)26783;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_3, var_6, var_15, var_16, zero, &var_17, &var_18, &var_19, &var_20);
  checksum();
  assert(!value_mismatch);
}
