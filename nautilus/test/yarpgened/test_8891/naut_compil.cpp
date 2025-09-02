/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 8891
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=8891
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
void test(val<unsigned short> var_1, val<unsigned long long int> var_2, val<unsigned short> var_3, val<long long int> var_4, val<short> var_5, val<long long int> var_6, val<unsigned int> var_8, val<int> var_9, val<short> var_10, val<int> zero, val<int*> var_11, val<unsigned int*> var_12, val<bool*> var_13, val<bool*> var_14) {
    if (((/* implicit */val<bool>) ((((/* implicit */val<bool>) 201326592)) ? (((/* implicit */val<long long int>) ((/* implicit */val<int>) (val<short>)32761))) : (1LL))))
    {
        *var_11 = ((/* implicit */val<int>) min((((/* implicit */val<long long int>) (!(((/* implicit */val<bool>) var_9))))), (((((/* implicit */val<bool>) (+(((/* implicit */val<int>) (val<unsigned short>)0))))) ? (max((var_6), (((/* implicit */val<long long int>) var_1)))) : (((/* implicit */val<long long int>) ((((/* implicit */val<bool>) 0LL)) ? (((/* implicit */val<int>) (val<bool>)0)) : (((/* implicit */val<int>) (val<unsigned char>)24)))))))));
        *var_12 = ((/* implicit */val<unsigned int>) ((var_2) & (((/* implicit */val<unsigned long long int>) ((((/* implicit */val<bool>) var_5)) ? (min((-3341322112308656678LL), (-4827060563074156774LL))) : (((/* implicit */val<long long int>) ((((/* implicit */val<bool>) -1LL)) ? (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_1))) : (var_8)))))))));
    }

    *var_13 = ((/* implicit */val<bool>) max((((/* implicit */val<unsigned long long int>) 4827060563074156774LL)), (3741750194254562704ULL)));
    *var_14 = ((/* implicit */val<bool>) min((((/* implicit */val<long long int>) ((((/* implicit */val<bool>) (~(((/* implicit */val<int>) var_3))))) ? ((((val<bool>)1) ? (((/* implicit */val<int>) var_10)) : (1251174168))) : ((+(((/* implicit */val<int>) var_5))))))), (((((/* implicit */val<bool>) (+(var_4)))) ? (((((/* implicit */val<bool>) 0ULL)) ? (var_6) : (((/* implicit */val<long long int>) ((/* implicit */val<int>) var_10))))) : (((/* implicit */val<long long int>) ((/* implicit */val<int>) min(((val<unsigned short>)561), ((val<unsigned short>)64974)))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)4780;
unsigned long long int var_2 = 12308341927079151989ULL;
unsigned short var_3 = (unsigned short)52187;
long long int var_4 = -8282263830778950544LL;
short var_5 = (short)-24842;
long long int var_6 = -1879378402281119789LL;
unsigned int var_8 = 1894164749U;
int var_9 = -1786585861;
short var_10 = (short)-27013;
int zero = 0;
int var_11 = -135602866;
unsigned int var_12 = 1509044232U;
bool var_13 = (bool)1;
bool var_14 = (bool)0;
void init() {
}

void checksum() {
    value_mismatch |= var_11 != 0;
    value_mismatch |= var_12 != 545816848U;
    value_mismatch |= var_13 != (bool)1;
    value_mismatch |= var_14 != (bool)1;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_2, var_3, var_4, var_5, var_6, var_8, var_9, var_10, zero, &var_11, &var_12, &var_13, &var_14);
  checksum();
  assert(!value_mismatch);
}
