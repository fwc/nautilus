/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 6747
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=6747
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
void test(val<unsigned int> var_1, val<signed char> var_2, val<signed char> var_4, val<bool> var_6, val<int> var_10, val<unsigned char> var_13, val<unsigned char> var_18, val<int> zero, val<unsigned long long int*> var_19, val<int*> var_20, val<signed char*> var_21, val<long long int*> var_22, val<bool*> var_23, val<unsigned char*> var_24) {
    *var_19 = ((/* implicit */val<unsigned long long int>) ((((/* implicit */val<bool>) max((((/* implicit */val<unsigned int>) min(((val<signed char>)-31), (var_2)))), (min((((/* implicit */val<unsigned int>) (val<signed char>)-31)), (var_1)))))) || ((val<bool>)1)));
    if (((/* implicit */val<bool>) ((val<unsigned long long int>) -1LL)))
    {
        *var_20 = ((/* implicit */val<int>) max((var_13), (((/* implicit */val<unsigned char>) ((((((/* implicit */val<bool>) (val<unsigned char>)143)) ? (-893913388) : (((/* implicit */val<int>) (val<unsigned char>)178)))) == (((((/* implicit */val<bool>) var_2)) ? (var_10) : (var_10))))))));
        *var_21 = ((/* implicit */val<signed char>) var_18);
        if (((/* implicit */val<bool>) ((val<int>) (!(((/* implicit */val<bool>) (val<unsigned short>)33629))))))
        {
            *var_22 = ((/* implicit */val<long long int>) var_1);
            *var_23 = var_6;
        }

        *var_24 = ((/* implicit */val<unsigned char>) (!(((/* implicit */val<bool>) var_4))));
    }

}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2036837702U;
signed char var_2 = (signed char)-92;
signed char var_4 = (signed char)-77;
bool var_6 = (bool)0;
int var_10 = 1093059150;
unsigned char var_13 = (unsigned char)67;
unsigned char var_18 = (unsigned char)226;
int zero = 0;
unsigned long long int var_19 = 10836890649116535442ULL;
int var_20 = -2122474850;
signed char var_21 = (signed char)91;
long long int var_22 = 269988033186194272LL;
bool var_23 = (bool)0;
unsigned char var_24 = (unsigned char)3;
void init() {
}

void checksum() {
    value_mismatch |= var_19 != 1ULL;
    value_mismatch |= var_20 != 67;
    value_mismatch |= var_21 != (signed char)-30;
    value_mismatch |= var_22 != 269988033186194272LL;
    value_mismatch |= var_23 != (bool)0;
    value_mismatch |= var_24 != (unsigned char)0;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_2, var_4, var_6, var_10, var_13, var_18, zero, &var_19, &var_20, &var_21, &var_22, &var_23, &var_24);
  checksum();
  assert(!value_mismatch);
}
