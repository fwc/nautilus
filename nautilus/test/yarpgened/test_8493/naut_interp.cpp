/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 8493
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=8493
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
void test(val<unsigned char> var_9, val<unsigned int> var_11, val<int> zero, val<unsigned short*> var_15, val<unsigned char*> var_16, val<short*> var_17) {
    *var_15 = ((/* implicit */val<unsigned short>) ((val<long long int>) ((((/* implicit */val<bool>) var_11)) ? (((/* implicit */val<unsigned int>) ((((/* implicit */val<bool>) -1LL)) ? (595611813) : (((/* implicit */val<int>) (val<unsigned short>)65525))))) : (((((/* implicit */val<bool>) (val<unsigned short>)3)) ? (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) (val<signed char>)-121))) : (1344758638U))))));
    *var_16 = ((/* implicit */val<unsigned char>) ((((/* implicit */val<bool>) ((val<unsigned char>) (val<unsigned short>)1))) ? (((/* implicit */val<int>) var_9)) : (((/* implicit */val<int>) ((val<unsigned short>) ((val<signed char>) (val<unsigned short>)65525))))));
    *var_17 = ((/* implicit */val<short>) ((val<unsigned long long int>) (val<unsigned short>)65514));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_9 = (unsigned char)73;
unsigned int var_11 = 1903627770U;
int zero = 0;
unsigned short var_15 = (unsigned short)23705;
unsigned char var_16 = (unsigned char)111;
short var_17 = (short)15221;
void init() {
}

void checksum() {
    value_mismatch |= var_15 != (unsigned short)20645;
    value_mismatch |= var_16 != (unsigned char)73;
    value_mismatch |= var_17 != (short)-22;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_9, var_11, zero, &var_15, &var_16, &var_17);
  checksum();
  assert(!value_mismatch);
}
