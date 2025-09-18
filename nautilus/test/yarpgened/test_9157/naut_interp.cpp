/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 9157
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=9157
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
void test(val<unsigned short> var_5, val<unsigned long long int> var_7, val<bool> var_9, val<bool> var_10, val<short> var_11, val<bool> var_12, val<unsigned short> var_13, val<short> var_15, val<signed char> var_16, val<int> zero, val<unsigned short*> var_18, val<short*> var_19, val<signed char*> var_20, val<unsigned long long int*> var_21, val<signed char*> var_22) {
    *var_18 *= ((/* implicit */val<unsigned short>) (~(max((((/* implicit */val<int>) var_5)), (max(((-2147483647 - 1)), (((/* implicit */val<int>) var_13))))))));
    if (((/* implicit */val<bool>) ((val<long long int>) ((((((/* implicit */val<unsigned long long int>) 2147483647)) ^ (4503599627370495ULL))) << (((((val<int>) -1519358085)) + (1519358147)))))))
    {
        *var_19 = ((/* implicit */val<short>) (val<signed char>)-70);
        if (((/* implicit */val<bool>) (+(((/* implicit */val<int>) (val<signed char>)16)))))
        {
            *var_20 = ((/* implicit */val<signed char>) var_10);
            *var_21 = ((/* implicit */val<unsigned long long int>) (+(((/* implicit */val<int>) var_15))));
        }

    }

    *var_22 -= ((/* implicit */val<signed char>) ((min((((((/* implicit */val<bool>) -1519358100)) ? (var_7) : (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_12))))), (((/* implicit */val<unsigned long long int>) ((((/* implicit */val<int>) var_11)) <= (((/* implicit */val<int>) var_16))))))) * (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_9)))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_5 = (unsigned short)24223;
unsigned long long int var_7 = 307935896282782994ULL;
bool var_9 = (bool)0;
bool var_10 = (bool)0;
short var_11 = (short)-20494;
bool var_12 = (bool)1;
unsigned short var_13 = (unsigned short)25764;
short var_15 = (short)-1651;
signed char var_16 = (signed char)22;
int zero = 0;
unsigned short var_18 = (unsigned short)24981;
short var_19 = (short)29445;
signed char var_20 = (signed char)-101;
unsigned long long int var_21 = 8227287233788237495ULL;
signed char var_22 = (signed char)25;
void init() {
}

void checksum() {
    value_mismatch |= var_18 != (unsigned short)59127;
    value_mismatch |= var_19 != (short)29445;
    value_mismatch |= var_20 != (signed char)-101;
    value_mismatch |= var_21 != 8227287233788237495ULL;
    value_mismatch |= var_22 != (signed char)25;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_5, var_7, var_9, var_10, var_11, var_12, var_13, var_15, var_16, zero, &var_18, &var_19, &var_20, &var_21, &var_22);
  checksum();
}
