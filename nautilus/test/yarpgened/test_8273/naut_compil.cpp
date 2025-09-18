/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 8273
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=8273
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
void test(val<unsigned int> var_2, val<unsigned long long int> var_4, val<unsigned long long int> var_5, val<bool> var_6, val<unsigned int> var_7, val<int> var_9, val<int> var_11, val<bool> var_12, val<int> zero, val<int*> var_13, val<int*> var_14, val<unsigned long long int*> var_15, val<unsigned short*> var_16, val<short*> var_17, val<int*> var_18, val<unsigned char*> var_19) {
    *var_13 = ((/* implicit */val<int>) min((*var_13), (((/* implicit */val<int>) ((val<unsigned short>) ((val<unsigned char>) var_9))))));
    if (var_6)
    {
        *var_14 = ((/* implicit */val<int>) (~((~(var_7)))));
        *var_15 = max((((/* implicit */val<unsigned long long int>) var_11)), (max((((((/* implicit */val<bool>) var_9)) ? (18446744073709551615ULL) : (((/* implicit */val<unsigned long long int>) 4294967295U)))), (((/* implicit */val<unsigned long long int>) var_7)))));
        *var_16 = ((/* implicit */val<unsigned short>) (val<short>)-1);
        *var_17 = ((/* implicit */val<short>) var_11);
    }

    *var_18 = ((/* implicit */val<int>) ((val<unsigned char>) ((((/* implicit */val<int>) ((val<unsigned char>) var_2))) - (((var_12) ? (var_9) : (((/* implicit */val<int>) (val<short>)-1)))))));
    *var_19 = ((/* implicit */val<unsigned char>) min((((/* implicit */val<unsigned int>) ((val<unsigned short>) ((((/* implicit */val<bool>) var_5)) ? (var_5) : (var_4))))), (0U)));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 2122791878U;
unsigned long long int var_4 = 18025077774709204563ULL;
unsigned long long int var_5 = 11024541003322506856ULL;
bool var_6 = (bool)0;
unsigned int var_7 = 2422122168U;
int var_9 = 1902809021;
int var_11 = 729269868;
bool var_12 = (bool)1;
int zero = 0;
int var_13 = 2053925370;
int var_14 = -2007835272;
unsigned long long int var_15 = 7511589254723291958ULL;
unsigned short var_16 = (unsigned short)53569;
short var_17 = (short)-12023;
int var_18 = -977410728;
unsigned char var_19 = (unsigned char)99;
void init() {
}

void checksum() {
    value_mismatch |= var_13 != 189;
    value_mismatch |= var_14 != -2007835272;
    value_mismatch |= var_15 != 7511589254723291958ULL;
    value_mismatch |= var_16 != (unsigned short)53569;
    value_mismatch |= var_17 != (short)-12023;
    value_mismatch |= var_18 != 9;
    value_mismatch |= var_19 != (unsigned char)0;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_2, var_4, var_5, var_6, var_7, var_9, var_11, var_12, zero, &var_13, &var_14, &var_15, &var_16, &var_17, &var_18, &var_19);
  checksum();
}
