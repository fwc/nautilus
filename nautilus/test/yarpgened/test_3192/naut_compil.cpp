/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 3192
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=3192
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
void test(val<bool> var_0, val<unsigned short> var_1, val<unsigned char> var_3, val<signed char> var_7, val<int> var_9, val<bool> var_10, val<int> zero, val<unsigned long long int*> var_16, val<short*> var_17, val<unsigned long long int*> var_18) {
    *var_16 = ((/* implicit */val<unsigned long long int>) ((((/* implicit */val<bool>) var_9)) ? (((/* implicit */val<int>) var_7)) : (((/* implicit */val<int>) var_3))));
    if (((/* implicit */val<bool>) (val<unsigned char>)205))
    {
        *var_17 -= ((/* implicit */val<short>) (((+(((/* implicit */val<int>) max((var_1), (((/* implicit */val<unsigned short>) var_3))))))) & (max((((((/* implicit */val<bool>) var_3)) ? (((/* implicit */val<int>) var_10)) : (((/* implicit */val<int>) (val<short>)-13661)))), (((/* implicit */val<int>) var_0))))));
        *var_18 = ((/* implicit */val<unsigned long long int>) ((((/* implicit */val<bool>) ((((/* implicit */val<bool>) 3351487708U)) ? (((/* implicit */val<int>) (val<unsigned short>)12066)) : (((/* implicit */val<int>) (val<signed char>)7))))) ? (((/* implicit */val<int>) (val<unsigned short>)59961)) : (var_9)));
    }

}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

bool var_0 = (bool)0;
unsigned short var_1 = (unsigned short)33868;
unsigned char var_3 = (unsigned char)73;
signed char var_7 = (signed char)25;
int var_9 = -685892784;
bool var_10 = (bool)0;
int zero = 0;
unsigned long long int var_16 = 200035754765983895ULL;
short var_17 = (short)24707;
unsigned long long int var_18 = 2246277086966398040ULL;
void init() {
}

void checksum() {
    value_mismatch |= var_16 != 25ULL;
    value_mismatch |= var_17 != (short)24707;
    value_mismatch |= var_18 != 59961ULL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_3, var_7, var_9, var_10, zero, &var_16, &var_17, &var_18);
  checksum();
}
