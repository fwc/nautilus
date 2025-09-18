/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 6042
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=6042
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
void test(val<int> var_0, val<unsigned char> var_3, val<unsigned long long int> var_4, val<unsigned short> var_5, val<unsigned int> var_8, val<unsigned int> var_10, val<unsigned int> var_11, val<signed char> var_13, val<long long int> var_16, val<unsigned char> var_17, val<long long int> var_19, val<int> zero, val<unsigned int*> var_20, val<unsigned char*> var_21, val<signed char*> var_22, val<signed char*> var_23) {
    if (((/* implicit */val<bool>) var_10))
    {
        *var_20 = ((/* implicit */val<unsigned int>) ((((((/* implicit */val<bool>) var_8)) ? (((/* implicit */val<int>) ((var_19) < (var_16)))) : (((/* implicit */val<int>) var_5)))) << (((var_4) - (10034209996439329943ULL)))));
        *var_21 ^= ((/* implicit */val<unsigned char>) (((!(((/* implicit */val<bool>) var_3)))) ? (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_17))) : (((((/* implicit */val<bool>) ((((/* implicit */val<bool>) var_16)) ? (((/* implicit */val<int>) var_3)) : (var_0)))) ? (((var_11) - (var_8))) : (var_8)))));
    }

    *var_22 = var_13;
    *var_23 = ((/* implicit */val<signed char>) var_3);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -915103157;
unsigned char var_3 = (unsigned char)83;
unsigned long long int var_4 = 10034209996439329971ULL;
unsigned short var_5 = (unsigned short)60407;
unsigned int var_8 = 3864689166U;
unsigned int var_10 = 1621062286U;
unsigned int var_11 = 164293871U;
signed char var_13 = (signed char)-117;
long long int var_16 = -280130364527065627LL;
unsigned char var_17 = (unsigned char)12;
long long int var_19 = -8308997235497933255LL;
int zero = 0;
unsigned int var_20 = 1795233937U;
unsigned char var_21 = (unsigned char)136;
signed char var_22 = (signed char)-2;
signed char var_23 = (signed char)3;
void init() {
}

void checksum() {
    value_mismatch |= var_20 != 268435456U;
    value_mismatch |= var_21 != (unsigned char)105;
    value_mismatch |= var_22 != (signed char)-117;
    value_mismatch |= var_23 != (signed char)83;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_3, var_4, var_5, var_8, var_10, var_11, var_13, var_16, var_17, var_19, zero, &var_20, &var_21, &var_22, &var_23);
  checksum();
}
