/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 814
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=814
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
void test(val<unsigned short> var_3, val<unsigned long long int> var_6, val<unsigned short> var_9, val<unsigned short> var_11, val<short> var_19, val<int> zero, val<long long int*> var_20, val<unsigned int*> var_21) {
    *var_20 = ((/* implicit */val<long long int>) ((((/* implicit */val<bool>) var_3)) ? (((/* implicit */val<int>) var_11)) : (((/* implicit */val<int>) var_19))));
    *var_21 += ((((/* implicit */val<bool>) ((val<long long int>) (val<bool>)1))) ? (((val<unsigned int>) ((val<bool>) var_6))) : (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) ((val<short>) var_9)))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)27378;
unsigned long long int var_6 = 2058068804847571142ULL;
unsigned short var_9 = (unsigned short)52711;
unsigned short var_11 = (unsigned short)21555;
short var_19 = (short)-28287;
int zero = 0;
long long int var_20 = -2627590044642268459LL;
unsigned int var_21 = 729136423U;
void init() {
}

void checksum() {
    value_mismatch |= var_20 != 21555LL;
    value_mismatch |= var_21 != 729136424U;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_3, var_6, var_9, var_11, var_19, zero, &var_20, &var_21);
  checksum();
  assert(!value_mismatch);
}
