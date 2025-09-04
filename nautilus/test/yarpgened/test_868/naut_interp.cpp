/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 868
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=868
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
void test(val<int> var_1, val<int> var_2, val<int> var_3, val<bool> var_4, val<short> var_5, val<unsigned short> var_6, val<int> zero, val<unsigned long long int*> var_10, val<unsigned int*> var_11, val<unsigned char*> var_12, val<signed char*> var_13) {
    if (((/* implicit */val<bool>) (val<unsigned short>)2851))
    {
        *var_10 = ((/* implicit */val<unsigned long long int>) (((((!(((/* implicit */val<bool>) var_1)))) ? (((/* implicit */val<int>) (!(((/* implicit */val<bool>) (val<unsigned short>)2866))))) : ((-(((/* implicit */val<int>) (val<short>)-1)))))) <= (((/* implicit */val<int>) min((((/* implicit */val<short>) ((((/* implicit */val<int>) var_5)) != (((/* implicit */val<int>) (val<unsigned short>)45987))))), (var_5))))));
        *var_11 = ((/* implicit */val<unsigned int>) ((((/* implicit */val<bool>) ((((/* implicit */val<int>) ((val<bool>) (val<short>)32746))) % (((/* implicit */val<int>) (val<unsigned char>)48))))) ? (min((min((14), (((/* implicit */val<int>) var_6)))), ((+(((/* implicit */val<int>) var_4)))))) : (((/* implicit */val<int>) (!(((/* implicit */val<bool>) (val<unsigned short>)64)))))));
    }

    *var_12 = ((/* implicit */val<unsigned char>) (((+(((((var_2) + (2147483647))) << (((((var_2) + (97102322))) - (16))))))) >= ((-(((((/* implicit */val<bool>) (val<unsigned short>)39335)) ? (((/* implicit */val<int>) (val<unsigned char>)64)) : (var_2)))))));
    *var_13 += ((/* implicit */val<signed char>) ((((((((/* implicit */val<int>) (val<signed char>)-127)) + (2147483647))) << (((((/* implicit */val<bool>) (val<unsigned short>)44797)) ? (((/* implicit */val<int>) (val<bool>)1)) : (-1847751854))))) != (var_3)));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 511991693;
int var_2 = -97102306;
int var_3 = -1550956501;
bool var_4 = (bool)1;
short var_5 = (short)1545;
unsigned short var_6 = (unsigned short)44295;
int zero = 0;
unsigned long long int var_10 = 4187365580807804796ULL;
unsigned int var_11 = 1075474346U;
unsigned char var_12 = (unsigned char)117;
signed char var_13 = (signed char)-28;
void init() {
}

void checksum() {
    value_mismatch |= var_10 != 1ULL;
    value_mismatch |= var_11 != 1U;
    value_mismatch |= var_12 != (unsigned char)1;
    value_mismatch |= var_13 != (signed char)-27;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_2, var_3, var_4, var_5, var_6, zero, &var_10, &var_11, &var_12, &var_13);
  checksum();
  assert(!value_mismatch);
}
