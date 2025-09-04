/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 7287
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=7287
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
void test(val<short> var_3, val<unsigned short> var_7, val<short> var_8, val<short> var_9, val<short> var_10, val<long long int> var_14, val<int> zero, val<unsigned int*> var_17, val<bool*> var_18, val<unsigned short*> var_19, val<unsigned short*> var_20, val<unsigned long long int*> var_21, val<unsigned int*> var_22) {
    if (((/* implicit */val<bool>) ((val<short>) (val<unsigned short>)64260)))
    {
        *var_17 = ((/* implicit */val<unsigned int>) max((((/* implicit */val<long long int>) ((((/* implicit */val<int>) var_9)) / (((/* implicit */val<int>) ((val<short>) var_3)))))), (((((/* implicit */val<bool>) ((((/* implicit */val<bool>) (val<signed char>)3)) ? (((/* implicit */val<int>) (val<signed char>)3)) : (((/* implicit */val<int>) (val<bool>)1))))) ? (var_14) : (min((var_14), (((/* implicit */val<long long int>) var_9))))))));
        *var_18 = ((/* implicit */val<bool>) min(((val<short>)252), (((/* implicit */val<short>) (val<bool>)1))));
        *var_19 = ((/* implicit */val<unsigned short>) ((val<short>) ((((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_10))) + (((val<unsigned int>) var_8)))));
        *var_20 = var_7;
    }

    *var_21 = ((/* implicit */val<unsigned long long int>) ((((/* implicit */val<bool>) ((val<short>) ((val<unsigned long long int>) 14LL)))) ? (((/* implicit */val<int>) (val<signed char>)6)) : (((/* implicit */val<int>) var_3))));
    *var_22 = ((/* implicit */val<unsigned int>) ((val<short>) 5507366934652704268ULL));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)-4374;
unsigned short var_7 = (unsigned short)48123;
short var_8 = (short)14283;
short var_9 = (short)12018;
short var_10 = (short)-15895;
long long int var_14 = 4928707090639649765LL;
int zero = 0;
unsigned int var_17 = 3131478590U;
bool var_18 = (bool)0;
unsigned short var_19 = (unsigned short)61513;
unsigned short var_20 = (unsigned short)62817;
unsigned long long int var_21 = 13848370529780862585ULL;
unsigned int var_22 = 3849830810U;
void init() {
}

void checksum() {
    value_mismatch |= var_17 != 1267104741U;
    value_mismatch |= var_18 != (bool)1;
    value_mismatch |= var_19 != (unsigned short)63924;
    value_mismatch |= var_20 != (unsigned short)48123;
    value_mismatch |= var_21 != 6ULL;
    value_mismatch |= var_22 != 4294956556U;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_3, var_7, var_8, var_9, var_10, var_14, zero, &var_17, &var_18, &var_19, &var_20, &var_21, &var_22);
  checksum();
  assert(!value_mismatch);
}
