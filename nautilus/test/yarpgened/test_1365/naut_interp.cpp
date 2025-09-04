/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 1365
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=1365
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
void test(val<signed char> var_1, val<int> var_2, val<unsigned char> var_3, val<unsigned long long int> var_5, val<short> var_8, val<unsigned short> var_10, val<bool> var_11, val<signed char> var_12, val<unsigned char> var_13, val<int> zero, val<short*> var_14, val<signed char*> var_15, val<bool*> var_16, val<unsigned long long int*> var_17) {
    if (((/* implicit */val<bool>) var_8))
    {
        *var_14 ^= ((/* implicit */val<short>) (-(min(((~(((/* implicit */val<int>) var_11)))), (((/* implicit */val<int>) max((((/* implicit */val<unsigned short>) var_13)), (var_10))))))));
        *var_15 = ((/* implicit */val<signed char>) max((*var_15), (((/* implicit */val<signed char>) var_13))));
        *var_16 = ((/* implicit */val<bool>) max((((/* implicit */val<unsigned long long int>) ((val<short>) ((val<unsigned long long int>) 10929960703964736909ULL)))), (max((9401833526647924649ULL), (((/* implicit */val<unsigned long long int>) var_3))))));
    }

    *var_17 = max((((/* implicit */val<unsigned long long int>) ((((/* implicit */val<bool>) (~(((/* implicit */val<int>) var_10))))) ? (((/* implicit */val<int>) (!(((/* implicit */val<bool>) var_3))))) : (((((/* implicit */val<bool>) var_10)) ? (var_2) : (((/* implicit */val<int>) var_10))))))), (max((((/* implicit */val<unsigned long long int>) ((((/* implicit */val<bool>) 9044910547061626967ULL)) ? (((/* implicit */val<int>) var_12)) : (((/* implicit */val<int>) var_3))))), (max((var_5), (((/* implicit */val<unsigned long long int>) var_1)))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)70;
int var_2 = -1140149319;
unsigned char var_3 = (unsigned char)27;
unsigned long long int var_5 = 16208275476773987154ULL;
short var_8 = (short)-31378;
unsigned short var_10 = (unsigned short)62726;
bool var_11 = (bool)0;
signed char var_12 = (signed char)-123;
unsigned char var_13 = (unsigned char)105;
int zero = 0;
short var_14 = (short)-10136;
signed char var_15 = (signed char)69;
bool var_16 = (bool)0;
unsigned long long int var_17 = 5064627469938393654ULL;
void init() {
}

void checksum() {
    value_mismatch |= var_14 != (short)-10135;
    value_mismatch |= var_15 != (signed char)105;
    value_mismatch |= var_16 != (bool)1;
    value_mismatch |= var_17 != 18446744073709551493ULL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_2, var_3, var_5, var_8, var_10, var_11, var_12, var_13, zero, &var_14, &var_15, &var_16, &var_17);
  checksum();
  assert(!value_mismatch);
}
