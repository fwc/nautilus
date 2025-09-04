/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 7560
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=7560
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
void test(val<int> var_0, val<bool> var_3, val<bool> var_4, val<unsigned int> var_5, val<int> var_11, val<int> zero, val<signed char*> var_12, val<unsigned char*> var_13, val<unsigned short*> var_14) {
    *var_12 = ((/* implicit */val<signed char>) var_5);
    *var_13 = ((/* implicit */val<unsigned char>) (((+(((((/* implicit */val<bool>) (val<unsigned char>)150)) ? (3496959866U) : (((/* implicit */val<unsigned int>) var_0)))))) - (((((/* implicit */val<bool>) (-(var_5)))) ? (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) (!(var_3))))) : (min((798007448U), (((/* implicit */val<unsigned int>) var_4))))))));
    *var_14 = ((/* implicit */val<unsigned short>) var_11);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -510122928;
bool var_3 = (bool)0;
bool var_4 = (bool)1;
unsigned int var_5 = 794845665U;
int var_11 = -1097607709;
int zero = 0;
signed char var_12 = (signed char)14;
unsigned char var_13 = (unsigned char)233;
unsigned short var_14 = (unsigned short)45721;
void init() {
}

void checksum() {
    value_mismatch |= var_12 != (signed char)-31;
    value_mismatch |= var_13 != (unsigned char)121;
    value_mismatch |= var_14 != (unsigned short)54755;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_3, var_4, var_5, var_11, zero, &var_12, &var_13, &var_14);
  checksum();
  assert(!value_mismatch);
}
