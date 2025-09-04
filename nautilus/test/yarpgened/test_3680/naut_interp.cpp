/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 3680
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=3680
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
void test(val<unsigned long long int> var_4, val<unsigned char> var_5, val<signed char> var_6, val<bool> var_9, val<unsigned char> var_12, val<signed char> var_14, val<unsigned char> var_15, val<short> var_16, val<unsigned char> var_18, val<int> zero, val<unsigned int*> var_19, val<signed char*> var_20, val<unsigned int*> var_21, val<unsigned char*> var_22, val<unsigned int*> var_23, val<short*> var_24, val<unsigned int*> var_25, val<unsigned int*> var_26, val<unsigned short*> var_27) {
    *var_19 *= ((/* implicit */val<unsigned int>) var_9);
    if (((/* implicit */val<bool>) var_18))
    {
        if (((/* implicit */val<bool>) min((((/* implicit */val<unsigned long long int>) (((!(((/* implicit */val<bool>) 268433408U)))) ? (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) ((16777215ULL) == (((/* implicit */val<unsigned long long int>) 4026533888U)))))) : (((((/* implicit */val<bool>) 4026533888U)) ? (3537688206U) : (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_5)))))))), (((((/* implicit */val<bool>) (val<unsigned char>)146)) ? (var_4) : (((/* implicit */val<unsigned long long int>) 268433408U)))))))
        {
            *var_20 = ((/* implicit */val<signed char>) var_15);
            *var_21 -= ((/* implicit */val<unsigned int>) var_4);
            *var_22 = var_5;
        }

        *var_23 = 4026533868U;
        *var_24 = ((/* implicit */val<short>) 4026533888U);
        *var_25 *= ((/* implicit */val<unsigned int>) ((((/* implicit */val<bool>) var_16)) ? (((/* implicit */val<int>) var_18)) : (((/* implicit */val<int>) var_9))));
        *var_26 &= min((4294967288U), (((((/* implicit */val<bool>) var_14)) ? (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_6))) : (4026533882U))));
    }

    *var_27 = ((/* implicit */val<unsigned short>) max((*var_27), (((/* implicit */val<unsigned short>) var_12))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 2583880973889909709ULL;
unsigned char var_5 = (unsigned char)214;
signed char var_6 = (signed char)-83;
bool var_9 = (bool)0;
unsigned char var_12 = (unsigned char)202;
signed char var_14 = (signed char)11;
unsigned char var_15 = (unsigned char)160;
short var_16 = (short)-7631;
unsigned char var_18 = (unsigned char)224;
int zero = 0;
unsigned int var_19 = 33007756U;
signed char var_20 = (signed char)-35;
unsigned int var_21 = 3052224458U;
unsigned char var_22 = (unsigned char)56;
unsigned int var_23 = 2530148334U;
short var_24 = (short)10710;
unsigned int var_25 = 4152687791U;
unsigned int var_26 = 3723200679U;
unsigned short var_27 = (unsigned short)9525;
void init() {
}

void checksum() {
    value_mismatch |= var_19 != 0U;
    value_mismatch |= var_20 != (signed char)-96;
    value_mismatch |= var_21 != 1867779069U;
    value_mismatch |= var_22 != (unsigned char)214;
    value_mismatch |= var_23 != 4026533868U;
    value_mismatch |= var_24 != (short)2048;
    value_mismatch |= var_25 != 2489129248U;
    value_mismatch |= var_26 != 3723200677U;
    value_mismatch |= var_27 != (unsigned short)9525;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_4, var_5, var_6, var_9, var_12, var_14, var_15, var_16, var_18, zero, &var_19, &var_20, &var_21, &var_22, &var_23, &var_24, &var_25, &var_26, &var_27);
  checksum();
  assert(!value_mismatch);
}
