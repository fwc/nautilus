/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 4715
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=4715
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
void test(val<unsigned int> var_0, val<short> var_8, val<int> zero, val<unsigned char*> var_14, val<short*> var_15, val<int*> var_16, val<unsigned char*> var_17) {
    *var_14 = ((/* implicit */val<unsigned char>) (+((-((~(((/* implicit */val<int>) (val<short>)(-32767 - 1)))))))));
    *var_15 = ((/* implicit */val<short>) (~(415725322U)));
    *var_16 -= ((/* implicit */val<int>) (((-(var_0))) & (((/* implicit */val<unsigned int>) ((((/* implicit */val<bool>) min((1259906871U), (1259906851U)))) ? (((/* implicit */val<int>) ((val<short>) (val<bool>)1))) : (((/* implicit */val<int>) var_8)))))));
    *var_17 = ((/* implicit */val<unsigned char>) (!((!(((/* implicit */val<bool>) ((331062140) | (((/* implicit */val<int>) (val<short>)26519)))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2845611773U;
short var_8 = (short)9075;
int zero = 0;
unsigned char var_14 = (unsigned char)166;
short var_15 = (short)-17388;
int var_16 = 298712477;
unsigned char var_17 = (unsigned char)244;
void init() {
}

void checksum() {
    value_mismatch |= var_14 != (unsigned char)1;
    value_mismatch |= var_15 != (short)-30475;
    value_mismatch |= var_16 != 298712476;
    value_mismatch |= var_17 != (unsigned char)1;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_8, zero, &var_14, &var_15, &var_16, &var_17);
  checksum();
  assert(!value_mismatch);
}
