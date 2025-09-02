/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 4833
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=4833
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
void test(val<int> var_5, val<bool> var_11, val<bool> var_16, val<int> zero, val<bool*> var_17, val<unsigned short*> var_18) {
    *var_17 &= ((/* implicit */val<bool>) max((3453186378U), (1023U)));
    *var_18 = ((/* implicit */val<unsigned short>) ((((/* implicit */val<bool>) (~((~(((/* implicit */val<int>) var_16))))))) ? (min((var_5), (((/* implicit */val<int>) ((val<short>) (val<bool>)1))))) : ((~((-(((/* implicit */val<int>) var_11))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_5 = -1642622440;
bool var_11 = (bool)0;
bool var_16 = (bool)0;
int zero = 0;
bool var_17 = (bool)0;
unsigned short var_18 = (unsigned short)54363;
void init() {
}

void checksum() {
    value_mismatch |= var_17 != (bool)0;
    value_mismatch |= var_18 != (unsigned short)65535;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_5, var_11, var_16, zero, &var_17, &var_18);
  checksum();
  assert(!value_mismatch);
}
