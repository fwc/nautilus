/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 3433
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=3433
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
void test(val<unsigned long long int> var_0, val<bool> var_2, val<signed char> var_5, val<signed char> var_8, val<unsigned int> var_9, val<unsigned long long int> var_11, val<signed char> var_15, val<int> zero, val<unsigned char*> var_16, val<int*> var_17, val<unsigned char*> var_18, val<unsigned int*> var_19, val<unsigned short*> var_20, val<unsigned int*> var_21, val<unsigned int*> var_22) {
    if (((/* implicit */val<bool>) (~((~((~(((/* implicit */val<int>) var_8)))))))))
    {
        *var_16 ^= ((/* implicit */val<unsigned char>) (~(((/* implicit */val<int>) (!(((/* implicit */val<bool>) min((var_5), (var_5)))))))));
        *var_17 = ((/* implicit */val<int>) var_0);
        if (((/* implicit */val<bool>) var_0))
        {
            *var_18 = ((/* implicit */val<unsigned char>) (~((~(var_9)))));
            *var_19 |= ((/* implicit */val<unsigned int>) (!(((/* implicit */val<bool>) var_11))));
        }

    }

    *var_20 |= ((/* implicit */val<unsigned short>) var_5);
    *var_21 = ((/* implicit */val<unsigned int>) var_2);
    *var_22 = ((/* implicit */val<unsigned int>) (~((~((+(((/* implicit */val<int>) var_15))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 5684384851737522450ULL;
bool var_2 = (bool)1;
signed char var_5 = (signed char)110;
signed char var_8 = (signed char)73;
unsigned int var_9 = 2863189303U;
unsigned long long int var_11 = 14821699951065722973ULL;
signed char var_15 = (signed char)-41;
int zero = 0;
unsigned char var_16 = (unsigned char)30;
int var_17 = -399374238;
unsigned char var_18 = (unsigned char)36;
unsigned int var_19 = 3071257389U;
unsigned short var_20 = (unsigned short)32558;
unsigned int var_21 = 4265549612U;
unsigned int var_22 = 2437048673U;
void init() {
}

void checksum() {
    value_mismatch |= var_16 != (unsigned char)225;
    value_mismatch |= var_17 != -831704814;
    value_mismatch |= var_18 != (unsigned char)55;
    value_mismatch |= var_19 != 3071257389U;
    value_mismatch |= var_20 != (unsigned short)32622;
    value_mismatch |= var_21 != 1U;
    value_mismatch |= var_22 != 4294967255U;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_2, var_5, var_8, var_9, var_11, var_15, zero, &var_16, &var_17, &var_18, &var_19, &var_20, &var_21, &var_22);
  checksum();
  assert(!value_mismatch);
}
