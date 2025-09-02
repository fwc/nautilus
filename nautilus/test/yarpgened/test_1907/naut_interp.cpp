/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 1907
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=1907
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
void test(val<unsigned char> var_0, val<unsigned short> var_2, val<bool> var_4, val<signed char> var_8, val<long long int> var_9, val<unsigned int> var_11, val<int> zero, val<unsigned short*> var_15, val<bool*> var_16, val<short*> var_17, val<unsigned int*> var_18, val<short*> var_19, val<short*> var_20, val<short*> var_21, val<unsigned int*> var_22, val<bool*> var_23) {
    if (((/* implicit */val<bool>) min((((/* implicit */val<long long int>) var_11)), (max((min((var_9), (((/* implicit */val<long long int>) (val<short>)3558)))), (((/* implicit */val<long long int>) var_0)))))))
    {
        *var_15 += ((val<unsigned short>) ((((val<unsigned int>) 919940932U)) / (((val<unsigned int>) var_8))));
        *var_16 = var_4;
    }
    else
    {
        *var_17 ^= ((/* implicit */val<short>) var_0);
        *var_18 = ((/* implicit */val<unsigned int>) min((((/* implicit */val<int>) ((val<unsigned char>) 3269294525082763565LL))), ((~(((((/* implicit */val<bool>) (val<short>)-3562)) ? (((/* implicit */val<int>) (val<unsigned char>)128)) : (((/* implicit */val<int>) (val<short>)-3592))))))));
        *var_19 = ((/* implicit */val<short>) ((((/* implicit */val<long long int>) ((/* implicit */val<int>) (val<short>)-3590))) | (6920027493945374961LL)));
    }

    *var_20 = ((/* implicit */val<short>) (!(((/* implicit */val<bool>) min((3269294525082763565LL), (((/* implicit */val<long long int>) (val<signed char>)-97)))))));
    *var_21 -= ((/* implicit */val<short>) var_2);
    *var_22 = ((/* implicit */val<unsigned int>) ((val<unsigned long long int>) var_0));
    *var_23 *= ((/* implicit */val<bool>) (val<unsigned char>)123);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)103;
unsigned short var_2 = (unsigned short)43846;
bool var_4 = (bool)0;
signed char var_8 = (signed char)64;
long long int var_9 = -2728717921637369053LL;
unsigned int var_11 = 2819096734U;
int zero = 0;
unsigned short var_15 = (unsigned short)50201;
bool var_16 = (bool)1;
short var_17 = (short)-17905;
unsigned int var_18 = 704155873U;
short var_19 = (short)15258;
short var_20 = (short)-20964;
short var_21 = (short)10094;
unsigned int var_22 = 4171943733U;
bool var_23 = (bool)0;
void init() {
}

void checksum() {
    value_mismatch |= var_15 != (unsigned short)6358;
    value_mismatch |= var_16 != (bool)0;
    value_mismatch |= var_17 != (short)-17905;
    value_mismatch |= var_18 != 704155873U;
    value_mismatch |= var_19 != (short)15258;
    value_mismatch |= var_20 != (short)0;
    value_mismatch |= var_21 != (short)31784;
    value_mismatch |= var_22 != 103U;
    value_mismatch |= var_23 != (bool)0;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_2, var_4, var_8, var_9, var_11, zero, &var_15, &var_16, &var_17, &var_18, &var_19, &var_20, &var_21, &var_22, &var_23);
  checksum();
  assert(!value_mismatch);
}
