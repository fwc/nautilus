/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 4591
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=4591
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
void test(val<unsigned char> var_1, val<unsigned int> var_3, val<unsigned char> var_4, val<unsigned long long int> var_7, val<signed char> var_8, val<unsigned short> var_9, val<unsigned short> var_13, val<int> zero, val<bool*> var_16, val<short*> var_17) {
    *var_16 = ((/* implicit */val<bool>) max((((((/* implicit */val<bool>) var_4)) ? (((((/* implicit */val<bool>) 18446744073709551615ULL)) ? (16359107259729331310ULL) : (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) (val<signed char>)51))))) : (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_1))))), (((/* implicit */val<unsigned long long int>) var_9))));
    *var_17 = ((/* implicit */val<short>) ((((/* implicit */val<bool>) ((((/* implicit */val<bool>) ((((/* implicit */val<bool>) (val<unsigned short>)40267)) ? (18446744073709551603ULL) : (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_8)))))) ? ((-(var_3))) : (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) ((((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) (val<signed char>)-52))) > (var_7)))))))) ? (((/* implicit */val<int>) var_13)) : (((/* implicit */val<int>) (val<signed char>)(-127 - 1)))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)57;
unsigned int var_3 = 4113262094U;
unsigned char var_4 = (unsigned char)95;
unsigned long long int var_7 = 845926393589038625ULL;
signed char var_8 = (signed char)-90;
unsigned short var_9 = (unsigned short)36724;
unsigned short var_13 = (unsigned short)15442;
int zero = 0;
bool var_16 = (bool)0;
short var_17 = (short)6609;
void init() {
}

void checksum() {
    value_mismatch |= var_16 != (bool)1;
    value_mismatch |= var_17 != (short)15442;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_3, var_4, var_7, var_8, var_9, var_13, zero, &var_16, &var_17);
  checksum();
  assert(!value_mismatch);
}
