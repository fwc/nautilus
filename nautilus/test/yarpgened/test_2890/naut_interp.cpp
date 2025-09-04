/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 2890
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=2890
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
void test(val<unsigned int> var_5, val<unsigned short> var_12, val<int> zero, val<bool*> var_17, val<unsigned long long int*> var_18) {
    *var_17 = ((/* implicit */val<bool>) ((min(((~(var_5))), (0U))) >> (((((/* implicit */val<int>) ((val<unsigned short>) var_12))) - (27934)))));
    *var_18 = ((/* implicit */val<unsigned long long int>) ((val<long long int>) 536870912));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_5 = 1041288948U;
unsigned short var_12 = (unsigned short)27963;
int zero = 0;
bool var_17 = (bool)1;
unsigned long long int var_18 = 5211311452731513234ULL;
void init() {
}

void checksum() {
    value_mismatch |= var_17 != (bool)0;
    value_mismatch |= var_18 != 536870912ULL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_5, var_12, zero, &var_17, &var_18);
  checksum();
  assert(!value_mismatch);
}
