/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 2456
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=2456
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
void test(val<unsigned short> var_1, val<signed char> var_3, val<unsigned short> var_4, val<short> var_6, val<int> zero, val<unsigned long long int*> var_10, val<signed char*> var_11, val<unsigned short*> var_12, val<unsigned int*> var_13) {
    if (((/* implicit */val<bool>) var_3))
    {
        *var_10 = ((/* implicit */val<unsigned long long int>) min((*var_10), (((/* implicit */val<unsigned long long int>) (val<bool>)1))));
        *var_11 = ((/* implicit */val<signed char>) var_6);
    }

    *var_12 = ((/* implicit */val<unsigned short>) ((((/* implicit */val<bool>) ((((/* implicit */val<bool>) ((val<unsigned char>) var_3))) ? (((val<long long int>) 378409169)) : (((/* implicit */val<long long int>) ((/* implicit */val<int>) (val<unsigned char>)71)))))) ? (((/* implicit */val<int>) (val<unsigned short>)15833)) : (((/* implicit */val<int>) var_1))));
    *var_13 ^= ((/* implicit */val<unsigned int>) ((((/* implicit */val<bool>) ((val<unsigned char>) var_4))) ? (((((/* implicit */val<bool>) min((576460752303423487LL), (((/* implicit */val<long long int>) var_6))))) ? ((~(-4226384737773191502LL))) : ((~(-7478440318426910623LL))))) : (((/* implicit */val<long long int>) ((/* implicit */val<int>) ((val<unsigned char>) (+(((/* implicit */val<int>) var_6)))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)26534;
signed char var_3 = (signed char)91;
unsigned short var_4 = (unsigned short)13939;
short var_6 = (short)12600;
int zero = 0;
unsigned long long int var_10 = 650253469337698961ULL;
signed char var_11 = (signed char)-117;
unsigned short var_12 = (unsigned short)21207;
unsigned int var_13 = 2654149892U;
void init() {
}

void checksum() {
    value_mismatch |= var_10 != 1ULL;
    value_mismatch |= var_11 != (signed char)56;
    value_mismatch |= var_12 != (unsigned short)15833;
    value_mismatch |= var_13 != 1294572617U;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_3, var_4, var_6, zero, &var_10, &var_11, &var_12, &var_13);
  checksum();
  assert(!value_mismatch);
}
