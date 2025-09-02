/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 8878
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=8878
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
void test(val<bool> var_0, val<unsigned long long int> var_1, val<signed char> var_2, val<unsigned long long int> var_3, val<short> var_5, val<unsigned int> var_6, val<unsigned short> var_7, val<unsigned short> var_8, val<signed char> var_9, val<short> var_10, val<int> var_11, val<int> var_12, val<unsigned short> var_13, val<long long int> var_15, val<unsigned char> var_17, val<unsigned int> var_18, val<signed char> var_19, val<int> zero, val<unsigned int*> var_20, val<unsigned long long int*> var_21) {
    *var_20 = ((/* implicit */val<unsigned int>) ((((/* implicit */val<bool>) ((((/* implicit */val<bool>) var_13)) ? (((((/* implicit */val<bool>) var_7)) ? (((/* implicit */val<int>) var_2)) : (var_11))) : (((/* implicit */val<int>) var_13))))) ? (min((((/* implicit */val<unsigned long long int>) ((((/* implicit */val<bool>) var_11)) ? (((/* implicit */val<int>) var_19)) : (((/* implicit */val<int>) var_9))))), (((((/* implicit */val<bool>) var_12)) ? (((/* implicit */val<unsigned long long int>) var_11)) : (var_3))))) : (((/* implicit */val<unsigned long long int>) ((((/* implicit */val<bool>) ((((/* implicit */val<bool>) var_8)) ? (var_11) : (((/* implicit */val<int>) var_10))))) ? (((/* implicit */val<unsigned int>) var_12)) : (max((2116619166U), (428117001U))))))));
    *var_21 = ((/* implicit */val<unsigned long long int>) ((((/* implicit */val<bool>) ((((/* implicit */val<bool>) ((((/* implicit */val<bool>) var_7)) ? (((/* implicit */val<unsigned long long int>) var_11)) : (var_1)))) ? (((((/* implicit */val<bool>) var_6)) ? (var_15) : (((/* implicit */val<long long int>) ((/* implicit */val<int>) var_0))))) : (((((/* implicit */val<bool>) var_2)) ? (((/* implicit */val<long long int>) ((/* implicit */val<int>) var_2))) : (var_15)))))) ? (((/* implicit */val<unsigned int>) ((((/* implicit */val<bool>) var_7)) ? (((((/* implicit */val<bool>) var_19)) ? (((/* implicit */val<int>) var_13)) : (((/* implicit */val<int>) var_8)))) : (((/* implicit */val<int>) max((((/* implicit */val<short>) var_9)), (var_5))))))) : (((((/* implicit */val<bool>) max((var_15), (((/* implicit */val<long long int>) var_12))))) ? (((var_0) ? (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_2))) : (var_18))) : (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) min((var_8), (((/* implicit */val<unsigned short>) var_17))))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

bool var_0 = (bool)0;
unsigned long long int var_1 = 13483235376107678832ULL;
signed char var_2 = (signed char)-24;
unsigned long long int var_3 = 14476839967882110907ULL;
short var_5 = (short)21485;
unsigned int var_6 = 338413034U;
unsigned short var_7 = (unsigned short)7391;
unsigned short var_8 = (unsigned short)22312;
signed char var_9 = (signed char)-9;
short var_10 = (short)30997;
int var_11 = 233189604;
int var_12 = 1786049836;
unsigned short var_13 = (unsigned short)28660;
long long int var_15 = 1569181234979608556LL;
unsigned char var_17 = (unsigned char)164;
unsigned int var_18 = 3070578427U;
signed char var_19 = (signed char)90;
int zero = 0;
unsigned int var_20 = 3263635880U;
unsigned long long int var_21 = 8604004063491960196ULL;
void init() {
}

void checksum() {
    value_mismatch |= var_20 != 90U;
    value_mismatch |= var_21 != 28660ULL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_2, var_3, var_5, var_6, var_7, var_8, var_9, var_10, var_11, var_12, var_13, var_15, var_17, var_18, var_19, zero, &var_20, &var_21);
  checksum();
  assert(!value_mismatch);
}
