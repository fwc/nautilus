/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 5255
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=5255
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
void test(val<unsigned int> var_0, val<unsigned int> var_1, val<unsigned int> var_3, val<unsigned int> var_4, val<short> var_8, val<int> zero, val<unsigned short*> var_10, val<short*> var_11, val<long long int*> var_12) {
    *var_10 = ((/* implicit */val<unsigned short>) min((min((((/* implicit */val<unsigned int>) ((val<unsigned char>) var_0))), (var_3))), (((/* implicit */val<unsigned int>) (!(((/* implicit */val<bool>) (val<short>)-8)))))));
    *var_11 = ((/* implicit */val<short>) var_4);
    *var_12 = ((/* implicit */val<long long int>) (~(((((var_1) | (var_1))) | (((/* implicit */val<unsigned int>) ((((/* implicit */val<int>) var_8)) ^ (((/* implicit */val<int>) (val<bool>)1)))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1834773627U;
unsigned int var_1 = 2543336982U;
unsigned int var_3 = 3499746386U;
unsigned int var_4 = 210192063U;
short var_8 = (short)22237;
int zero = 0;
unsigned short var_10 = (unsigned short)30236;
short var_11 = (short)-31066;
long long int var_12 = -4096841434111028649LL;
void init() {
}

void checksum() {
    value_mismatch |= var_10 != (unsigned short)0;
    value_mismatch |= var_11 != (short)18111;
    value_mismatch |= var_12 != 1751613729LL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_3, var_4, var_8, zero, &var_10, &var_11, &var_12);
  checksum();
}
