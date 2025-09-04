/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 5019
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=5019
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
void test(val<int> var_0, val<bool> var_1, val<signed char> var_3, val<signed char> var_4, val<unsigned long long int> var_5, val<unsigned long long int> var_6, val<unsigned long long int> var_7, val<bool> var_10, val<signed char> var_11, val<unsigned long long int> var_12, val<unsigned long long int> var_13, val<int> var_15, val<unsigned long long int> var_16, val<int> zero, val<signed char*> var_18, val<signed char*> var_19, val<int*> var_20, val<signed char*> var_21, val<unsigned long long int*> var_22, val<bool*> var_23, val<signed char*> var_24, val<int*> var_25) {
    *var_18 ^= var_3;
    if (((/* implicit */val<bool>) var_4))
    {
        *var_19 = ((/* implicit */val<signed char>) ((((/* implicit */val<bool>) ((((/* implicit */val<bool>) var_7)) ? (var_12) : (((/* implicit */val<unsigned long long int>) max((var_0), (((/* implicit */val<int>) var_10)))))))) ? (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) ((val<signed char>) ((((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) (val<signed char>)-15))) & (var_7)))))) : (max((((/* implicit */val<unsigned long long int>) var_4)), (((((/* implicit */val<bool>) var_11)) ? (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_11))) : (var_16)))))));
        *var_20 -= ((/* implicit */val<int>) ((var_13) == (((/* implicit */val<unsigned long long int>) 1817228028))));
        *var_21 = var_11;
        *var_22 = ((/* implicit */val<unsigned long long int>) min((*var_22), (((((/* implicit */val<bool>) min((var_6), (((var_5) - (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_1)))))))) ? (var_5) : (16694843746143167946ULL)))));
        *var_23 = ((/* implicit */val<bool>) min((*var_23), (((/* implicit */val<bool>) var_12))));
    }

    *var_24 ^= ((/* implicit */val<signed char>) var_7);
    *var_25 = var_15;
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -599954129;
bool var_1 = (bool)1;
signed char var_3 = (signed char)-69;
signed char var_4 = (signed char)-122;
unsigned long long int var_5 = 6105886099359199671ULL;
unsigned long long int var_6 = 6538897421314408784ULL;
unsigned long long int var_7 = 6905455624172476310ULL;
bool var_10 = (bool)0;
signed char var_11 = (signed char)55;
unsigned long long int var_12 = 9930287916453736493ULL;
unsigned long long int var_13 = 15087549140605176423ULL;
int var_15 = -747414928;
unsigned long long int var_16 = 10160061815011560701ULL;
int zero = 0;
signed char var_18 = (signed char)69;
signed char var_19 = (signed char)-112;
int var_20 = -1525271314;
signed char var_21 = (signed char)50;
unsigned long long int var_22 = 15578395967127768714ULL;
bool var_23 = (bool)0;
signed char var_24 = (signed char)122;
int var_25 = -876758955;
void init() {
}

void checksum() {
    value_mismatch |= var_18 != (signed char)-2;
    value_mismatch |= var_19 != (signed char)-112;
    value_mismatch |= var_20 != -1525271314;
    value_mismatch |= var_21 != (signed char)55;
    value_mismatch |= var_22 != 6105886099359199671ULL;
    value_mismatch |= var_23 != (bool)0;
    value_mismatch |= var_24 != (signed char)-20;
    value_mismatch |= var_25 != -747414928;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_3, var_4, var_5, var_6, var_7, var_10, var_11, var_12, var_13, var_15, var_16, zero, &var_18, &var_19, &var_20, &var_21, &var_22, &var_23, &var_24, &var_25);
  checksum();
  assert(!value_mismatch);
}
