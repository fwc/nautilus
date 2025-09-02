/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 5217
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=5217
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
void test(val<unsigned short> var_0, val<unsigned long long int> var_2, val<unsigned short> var_3, val<unsigned int> var_6, val<unsigned long long int> var_7, val<unsigned short> var_11, val<int> zero, val<unsigned short*> var_12, val<unsigned short*> var_13, val<unsigned short*> var_14, val<unsigned long long int*> var_15, val<bool*> var_16, val<int*> var_17, val<int*> var_18) {
    *var_12 |= ((/* implicit */val<unsigned short>) ((val<long long int>) ((((/* implicit */val<int>) ((((/* implicit */val<int>) (val<unsigned short>)40472)) != (((/* implicit */val<int>) (val<unsigned short>)65535))))) - (((/* implicit */val<int>) (val<unsigned short>)10145)))));
    *var_13 = ((/* implicit */val<unsigned short>) ((((/* implicit */val<int>) var_11)) << (((((max((1638703145U), (((/* implicit */val<unsigned int>) (val<unsigned short>)63719)))) >> ((((-(((/* implicit */val<int>) (val<unsigned short>)1817)))) + (1839))))) - (378U)))));
    if (((/* implicit */val<bool>) (-(((((/* implicit */val<bool>) ((((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) (val<unsigned short>)1836))) * (var_2)))) ? (max((((/* implicit */val<unsigned int>) 2147483647)), (89000601U))) : (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) (val<unsigned short>)1836))))))))
    {
        if (((/* implicit */val<bool>) var_7))
        {
            *var_14 = ((/* implicit */val<unsigned short>) (-(((max((-1670145168), (((/* implicit */val<int>) (val<unsigned short>)15)))) - (((/* implicit */val<int>) ((val<unsigned short>) (val<unsigned short>)1816)))))));
            *var_15 = ((/* implicit */val<unsigned long long int>) ((((/* implicit */val<long long int>) ((/* implicit */val<int>) ((val<unsigned short>) (val<unsigned short>)1836)))) ^ ((~((~((-9223372036854775807LL - 1LL))))))));
        }

        *var_16 -= ((/* implicit */val<bool>) ((val<unsigned int>) ((((((((/* implicit */val<int>) (val<signed char>)-62)) + (2147483647))) >> (((var_7) - (11678429716204078835ULL))))) << (((((3315165465U) | (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) (val<unsigned short>)63719))))) - (3315202551U))))));
        *var_17 = ((/* implicit */val<int>) ((val<unsigned long long int>) ((((/* implicit */val<bool>) max((((/* implicit */val<unsigned int>) var_0)), (var_6)))) ? (((val<unsigned int>) 3621658430916741778ULL)) : (((/* implicit */val<unsigned int>) ((((/* implicit */val<int>) var_3)) >> (((/* implicit */val<int>) (val<unsigned char>)0))))))));
    }

    *var_18 &= ((/* implicit */val<int>) ((val<signed char>) (-(((/* implicit */val<int>) ((val<unsigned short>) (val<bool>)1))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)64547;
unsigned long long int var_2 = 6348417680391028987ULL;
unsigned short var_3 = (unsigned short)63670;
unsigned int var_6 = 2954945401U;
unsigned long long int var_7 = 11678429716204078859ULL;
unsigned short var_11 = (unsigned short)13684;
int zero = 0;
unsigned short var_12 = (unsigned short)56098;
unsigned short var_13 = (unsigned short)55032;
unsigned short var_14 = (unsigned short)56074;
unsigned long long int var_15 = 2536480494242345473ULL;
bool var_16 = (bool)1;
int var_17 = -900465938;
int var_18 = 1059041545;
void init() {
}

void checksum() {
    value_mismatch |= var_12 != (unsigned short)56162;
    value_mismatch |= var_13 != (unsigned short)16384;
    value_mismatch |= var_14 != (unsigned short)1801;
    value_mismatch |= var_15 != 9223372036854777644ULL;
    value_mismatch |= var_16 != (bool)0;
    value_mismatch |= var_17 != -1869133166;
    value_mismatch |= var_18 != 1059041545;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_2, var_3, var_6, var_7, var_11, zero, &var_12, &var_13, &var_14, &var_15, &var_16, &var_17, &var_18);
  checksum();
  assert(!value_mismatch);
}
