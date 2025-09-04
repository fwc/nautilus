/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 4285
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=4285
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
void test(val<unsigned char> var_0, val<unsigned char> var_1, val<bool> var_2, val<int> var_3, val<int> var_5, val<bool> var_6, val<signed char> var_7, val<int> var_10, val<unsigned char> var_11, val<int> zero, val<unsigned long long int*> var_13, val<int*> var_14, val<signed char*> var_15, val<unsigned char*> var_16, val<unsigned char*> var_17, val<signed char*> var_18, val<unsigned long long int*> var_19, val<bool*> var_20, val<int*> var_21, val<bool*> var_22, val<unsigned long long int*> var_23) {
    if (var_6)
    {
        *var_13 |= ((/* implicit */val<unsigned long long int>) var_11);
        if (((/* implicit */val<bool>) min((((var_2) ? (2017612633061982208ULL) : (((((/* implicit */val<bool>) var_7)) ? (2243338768591950614ULL) : (((/* implicit */val<unsigned long long int>) 0U)))))), (((/* implicit */val<unsigned long long int>) 2147483647)))))
        {
            *var_14 = ((/* implicit */val<int>) min((*var_14), (((/* implicit */val<int>) var_0))));
            *var_15 = ((/* implicit */val<signed char>) min((*var_15), (((/* implicit */val<signed char>) ((((((/* implicit */val<int>) var_0)) <= (((/* implicit */val<int>) (val<bool>)1)))) ? (((/* implicit */val<int>) ((val<bool>) var_6))) : ((~(var_10))))))));
            *var_16 ^= ((/* implicit */val<unsigned char>) ((val<signed char>) 12647920296235166646ULL));
            *var_17 *= ((/* implicit */val<unsigned char>) min((((((/* implicit */val<int>) var_6)) / (((/* implicit */val<int>) var_2)))), (((((/* implicit */val<int>) var_2)) * (var_10)))));
        }

        *var_18 = ((/* implicit */val<signed char>) max((*var_18), (((/* implicit */val<signed char>) var_10))));
        *var_19 ^= ((/* implicit */val<unsigned long long int>) (~(var_5)));
        *var_20 = ((/* implicit */val<bool>) var_3);
    }
    else
    {
        *var_21 = ((/* implicit */val<int>) ((val<unsigned long long int>) var_5));
        *var_22 = ((/* implicit */val<bool>) min((*var_22), (((/* implicit */val<bool>) var_0))));
    }

    *var_23 += ((/* implicit */val<unsigned long long int>) max((((((var_3) + (2147483647))) << (((/* implicit */val<int>) min((var_1), (((/* implicit */val<unsigned char>) var_6))))))), (var_10)));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)9;
unsigned char var_1 = (unsigned char)141;
bool var_2 = (bool)1;
int var_3 = -1334818468;
int var_5 = -1411985966;
bool var_6 = (bool)0;
signed char var_7 = (signed char)94;
int var_10 = 41267912;
unsigned char var_11 = (unsigned char)187;
int zero = 0;
unsigned long long int var_13 = 8403753535648303055ULL;
int var_14 = -1135543519;
signed char var_15 = (signed char)-116;
unsigned char var_16 = (unsigned char)208;
unsigned char var_17 = (unsigned char)254;
signed char var_18 = (signed char)22;
unsigned long long int var_19 = 2903509558510261912ULL;
bool var_20 = (bool)1;
int var_21 = 946552025;
bool var_22 = (bool)0;
unsigned long long int var_23 = 1117438188384351154ULL;
void init() {
}

void checksum() {
    value_mismatch |= var_13 != 8403753535648303055ULL;
    value_mismatch |= var_14 != -1135543519;
    value_mismatch |= var_15 != (signed char)-116;
    value_mismatch |= var_16 != (unsigned char)208;
    value_mismatch |= var_17 != (unsigned char)254;
    value_mismatch |= var_18 != (signed char)22;
    value_mismatch |= var_19 != 2903509558510261912ULL;
    value_mismatch |= var_20 != (bool)1;
    value_mismatch |= var_21 != -1411985966;
    value_mismatch |= var_22 != (bool)0;
    value_mismatch |= var_23 != 1117438189197016333ULL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_2, var_3, var_5, var_6, var_7, var_10, var_11, zero, &var_13, &var_14, &var_15, &var_16, &var_17, &var_18, &var_19, &var_20, &var_21, &var_22, &var_23);
  checksum();
  assert(!value_mismatch);
}
