/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 7259
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=7259
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
void test(val<unsigned short> var_4, val<signed char> var_5, val<int> zero, val<unsigned int*> var_12, val<short*> var_13, val<unsigned short*> var_14) {
    *var_12 = ((/* implicit */val<unsigned int>) var_4);
    if (((/* implicit */val<bool>) max((var_4), (((/* implicit */val<unsigned short>) var_5)))))
    {
        *var_13 = ((/* implicit */val<short>) ((((/* implicit */val<bool>) 9847724436948586654ULL)) ? (1053226490) : (((/* implicit */val<int>) (val<unsigned char>)33))));
        *var_14 = ((/* implicit */val<unsigned short>) var_5);
    }

}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_4 = (unsigned short)6512;
signed char var_5 = (signed char)-125;
int zero = 0;
unsigned int var_12 = 531214285U;
short var_13 = (short)-28642;
unsigned short var_14 = (unsigned short)54110;
void init() {
}

void checksum() {
    value_mismatch |= var_12 != 6512U;
    value_mismatch |= var_13 != (short)-2566;
    value_mismatch |= var_14 != (unsigned short)65411;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_4, var_5, zero, &var_12, &var_13, &var_14);
  checksum();
}
