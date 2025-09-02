/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 3228
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=3228
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
void test(val<short> var_1, val<long long int> var_2, val<short> var_3, val<unsigned long long int> var_4, val<unsigned short> var_5, val<unsigned int> var_6, val<unsigned long long int> var_11, val<int> zero, val<unsigned long long int*> var_12, val<unsigned long long int*> var_13, val<short*> var_14, val<int*> var_15, val<unsigned char*> var_16, val<unsigned short*> var_17) {
    if (((/* implicit */val<bool>) (~(((/* implicit */val<int>) min(((val<signed char>)32), ((val<signed char>)-16)))))))
    {
        *var_12 = ((var_11) / (((/* implicit */val<unsigned long long int>) -9223372036854775783LL)));
        *var_13 = ((/* implicit */val<unsigned long long int>) min((*var_13), (min(((+(13268828969855390565ULL))), (((/* implicit */val<unsigned long long int>) var_3))))));
        *var_14 += ((/* implicit */val<short>) (!(((/* implicit */val<bool>) (val<unsigned short>)6850))));
        *var_15 &= ((/* implicit */val<int>) (!(((/* implicit */val<bool>) 9223372036854775782LL))));
        *var_16 += ((/* implicit */val<unsigned char>) ((((/* implicit */val<bool>) max((-9223372036854775760LL), (((/* implicit */val<long long int>) var_6))))) ? (((((/* implicit */val<bool>) max((9223372036854775800LL), (((/* implicit */val<long long int>) 1567137723))))) ? (var_11) : (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) ((33554430ULL) <= (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_5))))))))) : (((/* implicit */val<unsigned long long int>) (-(var_2))))));
    }

    *var_17 &= ((/* implicit */val<unsigned short>) min((((/* implicit */val<unsigned long long int>) var_1)), (max((var_4), (var_11)))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-7374;
long long int var_2 = -4439668860983472207LL;
short var_3 = (short)-220;
unsigned long long int var_4 = 8457025496350127148ULL;
unsigned short var_5 = (unsigned short)61027;
unsigned int var_6 = 712647437U;
unsigned long long int var_11 = 10457964288764187905ULL;
int zero = 0;
unsigned long long int var_12 = 14297633815054247825ULL;
unsigned long long int var_13 = 14820243099978440415ULL;
short var_14 = (short)22502;
int var_15 = 1947463462;
unsigned char var_16 = (unsigned char)65;
unsigned short var_17 = (unsigned short)33647;
void init() {
}

void checksum() {
    value_mismatch |= var_12 != 1ULL;
    value_mismatch |= var_13 != 13268828969855390565ULL;
    value_mismatch |= var_14 != (short)22502;
    value_mismatch |= var_15 != 0;
    value_mismatch |= var_16 != (unsigned char)66;
    value_mismatch |= var_17 != (unsigned short)33025;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_2, var_3, var_4, var_5, var_6, var_11, zero, &var_12, &var_13, &var_14, &var_15, &var_16, &var_17);
  checksum();
  assert(!value_mismatch);
}
