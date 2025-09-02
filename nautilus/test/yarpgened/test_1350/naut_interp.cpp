/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 1350
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=1350
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
void test(val<long long int> var_0, val<bool> var_1, val<bool> var_2, val<unsigned int> var_3, val<long long int> var_5, val<long long int> var_7, val<bool> var_8, val<short> var_9, val<long long int> var_10, val<short> var_11, val<long long int> var_12, val<long long int> var_13, val<int> zero, val<bool*> var_14, val<unsigned char*> var_15, val<unsigned int*> var_16, val<short*> var_17, val<short*> var_18, val<short*> var_19, val<unsigned long long int*> var_20) {
    *var_14 -= ((/* implicit */val<bool>) max((var_12), (((/* implicit */val<long long int>) var_1))));
    if (((/* implicit */val<bool>) (+(min((((((/* implicit */val<bool>) var_3)) ? (18446744073709551615ULL) : (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_9))))), (18446744073709551602ULL))))))
    {
        *var_15 = ((/* implicit */val<unsigned char>) (+(((val<long long int>) var_13))));
        *var_16 -= ((/* implicit */val<unsigned int>) ((((/* implicit */val<bool>) var_7)) ? ((~(((((/* implicit */val<bool>) var_3)) ? (var_13) : (((/* implicit */val<long long int>) ((/* implicit */val<int>) (val<bool>)0))))))) : (((/* implicit */val<long long int>) ((/* implicit */val<int>) var_1)))));
        if (((/* implicit */val<bool>) min((var_12), (((/* implicit */val<long long int>) max(((!(var_2))), ((!(((/* implicit */val<bool>) var_11))))))))))
        {
            *var_17 = ((/* implicit */val<short>) max((*var_17), (((/* implicit */val<short>) max((((((val<bool>) var_8)) ? (var_10) : (((/* implicit */val<long long int>) (~(((/* implicit */val<int>) (val<unsigned short>)16376))))))), (((/* implicit */val<long long int>) var_2)))))));
            *var_18 = ((/* implicit */val<short>) min((max(((+(var_0))), ((+(var_5))))), (((((/* implicit */val<bool>) ((val<short>) (val<unsigned short>)49143))) ? (min((var_5), (2031167972312702679LL))) : ((-(var_5)))))));
            *var_19 -= ((/* implicit */val<short>) min((min((var_0), (((/* implicit */val<long long int>) (val<signed char>)96)))), (((/* implicit */val<long long int>) (~(var_3))))));
        }

    }

    *var_20 -= ((/* implicit */val<unsigned long long int>) var_3);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 7549082122913855677LL;
bool var_1 = (bool)0;
bool var_2 = (bool)1;
unsigned int var_3 = 2221776622U;
long long int var_5 = -2057772253677905964LL;
long long int var_7 = 1071217222302106914LL;
bool var_8 = (bool)1;
short var_9 = (short)11870;
long long int var_10 = 2925638377926506416LL;
short var_11 = (short)25320;
long long int var_12 = -8887588015460710541LL;
long long int var_13 = -5244109134600059680LL;
int zero = 0;
bool var_14 = (bool)0;
unsigned char var_15 = (unsigned char)116;
unsigned int var_16 = 75953676U;
short var_17 = (short)-3099;
short var_18 = (short)9028;
short var_19 = (short)-21440;
unsigned long long int var_20 = 5224374056725586203ULL;
void init() {
}

void checksum() {
    value_mismatch |= var_14 != (bool)0;
    value_mismatch |= var_15 != (unsigned char)224;
    value_mismatch |= var_16 != 3511630573U;
    value_mismatch |= var_17 != (short)14256;
    value_mismatch |= var_18 != (short)-26668;
    value_mismatch |= var_19 != (short)-21536;
    value_mismatch |= var_20 != 5224374054503809581ULL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_2, var_3, var_5, var_7, var_8, var_9, var_10, var_11, var_12, var_13, zero, &var_14, &var_15, &var_16, &var_17, &var_18, &var_19, &var_20);
  checksum();
  assert(!value_mismatch);
}
