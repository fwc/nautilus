/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 2459
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=2459
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
void test(val<unsigned long long int> var_0, val<unsigned char> var_2, val<unsigned int> var_11, val<unsigned long long int> var_12, val<short> var_15, val<int> zero, val<unsigned short*> var_16, val<short*> var_17) {
    *var_16 *= ((/* implicit */val<unsigned short>) ((((((/* implicit */val<bool>) max(((val<unsigned short>)25046), (((/* implicit */val<unsigned short>) var_15))))) ? (((((/* implicit */val<bool>) var_12)) ? (var_12) : (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_2))))) : (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) ((val<unsigned short>) 1642040786U)))))) <= (((/* implicit */val<unsigned long long int>) (+(min((var_11), (((/* implicit */val<unsigned int>) var_2)))))))));
    *var_17 = ((/* implicit */val<short>) var_0);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 14735353728257141852ULL;
unsigned char var_2 = (unsigned char)55;
unsigned int var_11 = 1121277887U;
unsigned long long int var_12 = 12107173296436483171ULL;
short var_15 = (short)5251;
int zero = 0;
unsigned short var_16 = (unsigned short)52849;
short var_17 = (short)25443;
void init() {
}

void checksum() {
    value_mismatch |= var_16 != (unsigned short)0;
    value_mismatch |= var_17 != (short)-21412;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_2, var_11, var_12, var_15, zero, &var_16, &var_17);
  checksum();
  assert(!value_mismatch);
}
