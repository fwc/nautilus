/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 2675
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=2675
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
void test(val<short> var_1, val<short> var_2, val<unsigned int> var_12, val<int> zero, val<unsigned short*> var_16, val<unsigned short*> var_17, val<unsigned int*> var_18) {
    *var_16 = ((/* implicit */val<unsigned short>) ((((/* implicit */val<bool>) (-(var_12)))) ? (23ULL) : (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) (val<bool>)1)))));
    *var_17 = ((/* implicit */val<unsigned short>) ((val<unsigned long long int>) ((val<unsigned short>) ((((/* implicit */val<int>) (val<short>)5255)) <= (((/* implicit */val<int>) (val<unsigned short>)58350))))));
    *var_18 = ((/* implicit */val<unsigned int>) (!(((((/* implicit */val<int>) var_2)) < ((-(((/* implicit */val<int>) var_1))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-8981;
short var_2 = (short)14098;
unsigned int var_12 = 37902776U;
int zero = 0;
unsigned short var_16 = (unsigned short)46576;
unsigned short var_17 = (unsigned short)22827;
unsigned int var_18 = 550273531U;
void init() {
}

void checksum() {
    value_mismatch |= var_16 != (unsigned short)23;
    value_mismatch |= var_17 != (unsigned short)1;
    value_mismatch |= var_18 != 1U;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_2, var_12, zero, &var_16, &var_17, &var_18);
  checksum();
  assert(!value_mismatch);
}
