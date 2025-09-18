/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 449
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=449
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
void test(val<unsigned long long int> var_3, val<unsigned char> var_4, val<long long int> var_5, val<bool> var_10, val<signed char> var_12, val<unsigned char> var_17, val<int> var_18, val<int> zero, val<int*> var_19, val<long long int*> var_20, val<bool*> var_21, val<unsigned int*> var_22, val<unsigned int*> var_23) {
    if (((/* implicit */val<bool>) 9191876217433701281LL))
    {
        *var_19 = ((/* implicit */val<int>) var_4);
        *var_20 = (~(-9191876217433701276LL));
        *var_21 = ((/* implicit */val<bool>) var_18);
    }

    *var_22 = ((/* implicit */val<unsigned int>) ((((/* implicit */val<bool>) min((var_5), (((/* implicit */val<long long int>) var_10))))) ? (((((/* implicit */val<bool>) min(((val<signed char>)-21), (((/* implicit */val<signed char>) (val<bool>)0))))) ? (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) (!(((/* implicit */val<bool>) (val<signed char>)-32)))))) : (max((((/* implicit */val<unsigned long long int>) var_17)), (var_3))))) : (min((((/* implicit */val<unsigned long long int>) ((0U) > (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_12)))))), (((((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) (val<signed char>)17))) | (18446744073709551611ULL)))))));
    *var_23 = ((/* implicit */val<unsigned int>) var_12);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 16744461475771970226ULL;
unsigned char var_4 = (unsigned char)198;
long long int var_5 = 1846199243525839886LL;
bool var_10 = (bool)0;
signed char var_12 = (signed char)16;
unsigned char var_17 = (unsigned char)244;
int var_18 = -1670338751;
int zero = 0;
int var_19 = -1435981976;
long long int var_20 = 6465690649845816271LL;
bool var_21 = (bool)0;
unsigned int var_22 = 1219642291U;
unsigned int var_23 = 1366541672U;
void init() {
}

void checksum() {
    value_mismatch |= var_19 != 198;
    value_mismatch |= var_20 != 9191876217433701275LL;
    value_mismatch |= var_21 != (bool)1;
    value_mismatch |= var_22 != 0U;
    value_mismatch |= var_23 != 16U;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_3, var_4, var_5, var_10, var_12, var_17, var_18, zero, &var_19, &var_20, &var_21, &var_22, &var_23);
  checksum();
}
