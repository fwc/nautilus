/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 7059
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=7059
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
void test(val<bool> var_1, val<short> var_2, val<long long int> var_3, val<bool> var_4, val<unsigned char> var_5, val<long long int> var_6, val<short> var_7, val<unsigned char> var_8, val<unsigned long long int> var_11, val<unsigned char> var_12, val<int> zero, val<unsigned char*> var_13, val<unsigned int*> var_14, val<short*> var_15, val<bool*> var_16, val<unsigned int*> var_17, val<unsigned char*> var_18) {
    *var_13 = ((/* implicit */val<unsigned char>) (((!(((/* implicit */val<bool>) var_11)))) ? (((/* implicit */val<long long int>) ((/* implicit */val<int>) ((val<unsigned char>) var_12)))) : (var_3)));
    if (((/* implicit */val<bool>) ((var_4) ? (min((937404776706725445ULL), (((/* implicit */val<unsigned long long int>) ((((/* implicit */val<bool>) (val<short>)14973)) ? (((/* implicit */val<int>) (val<bool>)1)) : (((/* implicit */val<int>) (val<short>)-7284))))))) : (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_5))))))
    {
        *var_14 &= ((/* implicit */val<unsigned int>) ((((/* implicit */val<int>) ((((/* implicit */val<int>) var_12)) > (((/* implicit */val<int>) var_8))))) << (((/* implicit */val<int>) var_1))));
        *var_15 = var_7;
    }

    *var_16 = ((/* implicit */val<bool>) ((((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) ((val<short>) (!(((/* implicit */val<bool>) var_12))))))) / ((+(((((/* implicit */val<bool>) var_8)) ? (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_5))) : (var_11)))))));
    *var_17 ^= ((/* implicit */val<unsigned int>) ((var_6) % (((/* implicit */val<long long int>) ((((/* implicit */val<bool>) (val<unsigned char>)193)) ? (((/* implicit */val<int>) (val<bool>)1)) : (((/* implicit */val<int>) (val<bool>)1)))))));
    *var_18 &= ((/* implicit */val<unsigned char>) var_2);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

bool var_1 = (bool)1;
short var_2 = (short)-32120;
long long int var_3 = -7513626805034770737LL;
bool var_4 = (bool)1;
unsigned char var_5 = (unsigned char)37;
long long int var_6 = 6986650515212795423LL;
short var_7 = (short)-12746;
unsigned char var_8 = (unsigned char)212;
unsigned long long int var_11 = 7499921484728685648ULL;
unsigned char var_12 = (unsigned char)87;
int zero = 0;
unsigned char var_13 = (unsigned char)233;
unsigned int var_14 = 2654578955U;
short var_15 = (short)-28203;
bool var_16 = (bool)0;
unsigned int var_17 = 2189812422U;
unsigned char var_18 = (unsigned char)241;
void init() {
}

void checksum() {
    value_mismatch |= var_13 != (unsigned char)207;
    value_mismatch |= var_14 != 0U;
    value_mismatch |= var_15 != (short)-12746;
    value_mismatch |= var_16 != (bool)0;
    value_mismatch |= var_17 != 2189812422U;
    value_mismatch |= var_18 != (unsigned char)128;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_2, var_3, var_4, var_5, var_6, var_7, var_8, var_11, var_12, zero, &var_13, &var_14, &var_15, &var_16, &var_17, &var_18);
  checksum();
  assert(!value_mismatch);
}
