/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 8364
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=8364
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
void test(val<short> var_0, val<long long int> var_1, val<unsigned int> var_2, val<short> var_3, val<signed char> var_4, val<unsigned int> var_9, val<short> var_10, val<short> var_12, val<short> var_13, val<unsigned int> var_14, val<int> zero, val<int*> var_15, val<unsigned int*> var_16, val<unsigned short*> var_17, val<long long int*> var_18, val<short*> var_19, val<int*> var_20, val<int*> var_21) {
    if (((/* implicit */val<bool>) (+(min((((val<unsigned long long int>) var_2)), (((/* implicit */val<unsigned long long int>) var_3)))))))
    {
        *var_15 = ((/* implicit */val<int>) var_10);
        *var_16 = ((/* implicit */val<unsigned int>) ((var_1) + (((/* implicit */val<long long int>) ((min((((/* implicit */val<unsigned int>) var_3)), (var_9))) * (var_14))))));
        *var_17 = ((/* implicit */val<unsigned short>) ((((/* implicit */val<long long int>) ((((((/* implicit */val<int>) var_4)) << (((((/* implicit */val<int>) var_0)) - (20984))))) << (((((/* implicit */val<int>) var_12)) + (20323)))))) % (var_1)));
        *var_18 = ((/* implicit */val<long long int>) min((var_14), (((/* implicit */val<unsigned int>) var_0))));
        *var_19 = ((/* implicit */val<short>) min((((/* implicit */val<unsigned long long int>) ((val<unsigned short>) ((((/* implicit */val<bool>) 300913790U)) || (((/* implicit */val<bool>) (val<short>)30159)))))), (8403672282560562436ULL)));
    }

    *var_20 ^= ((/* implicit */val<int>) ((val<unsigned short>) ((val<short>) ((((/* implicit */val<int>) var_13)) % (-1)))));
    *var_21 = ((/* implicit */val<int>) ((-12) < (-29)));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)20994;
long long int var_1 = -8186158674039901882LL;
unsigned int var_2 = 900042240U;
short var_3 = (short)30039;
signed char var_4 = (signed char)50;
unsigned int var_9 = 3136723400U;
short var_10 = (short)20178;
short var_12 = (short)-20316;
short var_13 = (short)30620;
unsigned int var_14 = 2603674008U;
int zero = 0;
int var_15 = -437472837;
unsigned int var_16 = 1321907340U;
unsigned short var_17 = (unsigned short)28703;
long long int var_18 = -4984328293005447223LL;
short var_19 = (short)-24825;
int var_20 = -1030849435;
int var_21 = -1728658610;
void init() {
}

void checksum() {
    value_mismatch |= var_15 != 20178;
    value_mismatch |= var_16 != 4148186094U;
    value_mismatch |= var_17 != (unsigned short)0;
    value_mismatch |= var_18 != 20994LL;
    value_mismatch |= var_19 != (short)1;
    value_mismatch |= var_20 != -1030849435;
    value_mismatch |= var_21 != 0;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_2, var_3, var_4, var_9, var_10, var_12, var_13, var_14, zero, &var_15, &var_16, &var_17, &var_18, &var_19, &var_20, &var_21);
  checksum();
}
