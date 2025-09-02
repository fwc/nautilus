/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 5172
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=5172
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
void test(val<unsigned short> var_0, val<signed char> var_1, val<unsigned short> var_2, val<unsigned short> var_3, val<int> var_6, val<signed char> var_7, val<long long int> var_9, val<unsigned long long int> var_10, val<int> zero, val<unsigned int*> var_11, val<bool*> var_12, val<unsigned long long int*> var_13, val<unsigned long long int*> var_14, val<long long int*> var_15, val<unsigned short*> var_16) {
    *var_11 &= ((/* implicit */val<unsigned int>) var_3);
    *var_12 = ((/* implicit */val<bool>) min((*var_12), (((/* implicit */val<bool>) ((((/* implicit */val<unsigned int>) ((((/* implicit */val<bool>) var_9)) ? (((/* implicit */val<int>) (val<signed char>)(-127 - 1))) : ((+(((/* implicit */val<int>) var_3))))))) & (((((val<unsigned int>) (val<signed char>)15)) ^ (((/* implicit */val<unsigned int>) ((((/* implicit */val<int>) var_1)) / (((/* implicit */val<int>) var_0))))))))))));
    if (((/* implicit */val<bool>) ((val<long long int>) ((val<signed char>) (-(((/* implicit */val<int>) (val<bool>)1)))))))
    {
        *var_13 = ((/* implicit */val<unsigned long long int>) var_7);
        *var_14 -= ((/* implicit */val<unsigned long long int>) ((((/* implicit */val<bool>) var_6)) ? (((/* implicit */val<long long int>) ((/* implicit */val<int>) ((val<unsigned short>) var_6)))) : (var_9)));
        if (((/* implicit */val<bool>) ((((/* implicit */val<bool>) var_6)) ? (((/* implicit */val<int>) var_7)) : (((((/* implicit */val<bool>) ((((/* implicit */val<int>) var_7)) + (((/* implicit */val<int>) var_1))))) ? (((((/* implicit */val<bool>) (val<short>)-6978)) ? (((/* implicit */val<int>) (val<unsigned short>)38121)) : (((/* implicit */val<int>) (val<signed char>)123)))) : ((+(((/* implicit */val<int>) var_0)))))))))
        {
            *var_15 = ((/* implicit */val<long long int>) var_2);
            *var_16 = ((/* implicit */val<unsigned short>) ((val<unsigned long long int>) ((((/* implicit */val<bool>) ((((/* implicit */val<bool>) var_1)) ? (var_9) : (((/* implicit */val<long long int>) ((/* implicit */val<int>) var_3)))))) ? (((/* implicit */val<int>) (!(((/* implicit */val<bool>) var_10))))) : (((/* implicit */val<int>) var_1)))));
        }

    }

}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)37183;
signed char var_1 = (signed char)-10;
unsigned short var_2 = (unsigned short)61067;
unsigned short var_3 = (unsigned short)48217;
int var_6 = 1413745488;
signed char var_7 = (signed char)127;
long long int var_9 = -1225865814603760104LL;
unsigned long long int var_10 = 17152415263812229952ULL;
int zero = 0;
unsigned int var_11 = 2026667470U;
bool var_12 = (bool)0;
unsigned long long int var_13 = 13613824072878125582ULL;
unsigned long long int var_14 = 5410621532592074994ULL;
long long int var_15 = 3430073901762066737LL;
unsigned short var_16 = (unsigned short)43386;
void init() {
}

void checksum() {
    value_mismatch |= var_11 != 15432U;
    value_mismatch |= var_12 != (bool)0;
    value_mismatch |= var_13 != 127ULL;
    value_mismatch |= var_14 != 5410621532592072098ULL;
    value_mismatch |= var_15 != 61067LL;
    value_mismatch |= var_16 != (unsigned short)0;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_2, var_3, var_6, var_7, var_9, var_10, zero, &var_11, &var_12, &var_13, &var_14, &var_15, &var_16);
  checksum();
  assert(!value_mismatch);
}
