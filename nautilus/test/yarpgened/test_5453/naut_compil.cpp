/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 5453
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=5453
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
void test(val<bool> var_0, val<short> var_2, val<unsigned int> var_3, val<unsigned char> var_6, val<short> var_8, val<unsigned char> var_10, val<unsigned short> var_11, val<unsigned char> var_15, val<int> zero, val<bool*> var_16, val<unsigned int*> var_17, val<bool*> var_18, val<unsigned int*> var_19) {
    *var_16 -= ((/* implicit */val<bool>) 980558411);
    *var_17 |= ((/* implicit */val<unsigned int>) var_8);
    if (((/* implicit */val<bool>) var_2))
    {
        *var_18 = ((/* implicit */val<bool>) (+((+(((((/* implicit */val<bool>) var_6)) ? (((/* implicit */val<int>) var_0)) : (((/* implicit */val<int>) (val<short>)-1276))))))));
        *var_19 *= ((((/* implicit */val<bool>) var_3)) ? (((((/* implicit */val<unsigned int>) ((/* implicit */val<int>) (val<signed char>)26))) & (max((var_3), (((/* implicit */val<unsigned int>) var_11)))))) : (((/* implicit */val<unsigned int>) ((((/* implicit */val<bool>) var_15)) ? (((/* implicit */val<int>) ((((/* implicit */val<bool>) (val<unsigned char>)243)) && (((/* implicit */val<bool>) (val<unsigned short>)0))))) : (((/* implicit */val<int>) var_10))))));
    }

}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

bool var_0 = (bool)0;
short var_2 = (short)27974;
unsigned int var_3 = 2274753454U;
unsigned char var_6 = (unsigned char)148;
short var_8 = (short)24265;
unsigned char var_10 = (unsigned char)18;
unsigned short var_11 = (unsigned short)21600;
unsigned char var_15 = (unsigned char)143;
int zero = 0;
bool var_16 = (bool)0;
unsigned int var_17 = 2822700409U;
bool var_18 = (bool)0;
unsigned int var_19 = 3234512635U;
void init() {
}

void checksum() {
    value_mismatch |= var_16 != (bool)1;
    value_mismatch |= var_17 != 2822701049U;
    value_mismatch |= var_18 != (bool)0;
    value_mismatch |= var_19 != 2280355278U;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_2, var_3, var_6, var_8, var_10, var_11, var_15, zero, &var_16, &var_17, &var_18, &var_19);
  checksum();
  assert(!value_mismatch);
}
