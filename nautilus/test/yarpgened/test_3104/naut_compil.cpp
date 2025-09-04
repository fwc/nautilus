/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 3104
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=3104
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
void test(val<signed char> var_2, val<int> var_5, val<int> zero, val<unsigned short*> var_11, val<unsigned int*> var_12, val<unsigned int*> var_13, val<long long int*> var_14, val<short*> var_15, val<unsigned short*> var_16) {
    *var_11 = (val<unsigned short>)27406;
    *var_12 = ((/* implicit */val<unsigned int>) ((((/* implicit */val<int>) ((val<unsigned short>) min((((/* implicit */val<unsigned short>) (val<signed char>)-96)), ((val<unsigned short>)38128))))) | ((~(((/* implicit */val<int>) (val<bool>)1))))));
    if (((/* implicit */val<bool>) ((val<short>) (~(((/* implicit */val<int>) (val<short>)-19857))))))
    {
        *var_13 = ((/* implicit */val<unsigned int>) var_2);
        *var_14 = ((/* implicit */val<long long int>) (!(((/* implicit */val<bool>) (val<unsigned short>)38130))));
        *var_15 = ((/* implicit */val<short>) (~(((/* implicit */val<int>) ((((/* implicit */val<int>) (val<bool>)1)) <= (((/* implicit */val<int>) (val<unsigned short>)38115)))))));
    }

    *var_16 = ((/* implicit */val<unsigned short>) ((val<int>) ((((/* implicit */val<int>) (!(((/* implicit */val<bool>) (val<signed char>)84))))) == (((/* implicit */val<int>) ((val<bool>) var_5))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)94;
int var_5 = -631513623;
int zero = 0;
unsigned short var_11 = (unsigned short)30369;
unsigned int var_12 = 3791148585U;
unsigned int var_13 = 1513976382U;
long long int var_14 = -572013190906429255LL;
short var_15 = (short)-22703;
unsigned short var_16 = (unsigned short)36336;
void init() {
}

void checksum() {
    value_mismatch |= var_11 != (unsigned short)27406;
    value_mismatch |= var_12 != 4294967294U;
    value_mismatch |= var_13 != 94U;
    value_mismatch |= var_14 != 0LL;
    value_mismatch |= var_15 != (short)-2;
    value_mismatch |= var_16 != (unsigned short)0;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_2, var_5, zero, &var_11, &var_12, &var_13, &var_14, &var_15, &var_16);
  checksum();
  assert(!value_mismatch);
}
