/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 8012
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=8012
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
void test(val<unsigned int> var_7, val<unsigned int> var_10, val<long long int> var_15, val<unsigned long long int> var_17, val<int> zero, val<signed char*> var_19, val<unsigned char*> var_20, val<unsigned char*> var_21) {
    *var_19 = ((/* implicit */val<signed char>) ((((/* implicit */val<bool>) min((211106232532992LL), (((((/* implicit */val<bool>) 1466846328866354224LL)) ? (1466846328866354247LL) : (((/* implicit */val<long long int>) ((/* implicit */val<int>) (val<unsigned short>)30186)))))))) ? (((/* implicit */val<long long int>) ((((/* implicit */val<bool>) -4653826230586843871LL)) ? (((/* implicit */val<unsigned int>) ((((/* implicit */val<bool>) -1466846328866354239LL)) ? (((/* implicit */val<int>) (val<unsigned char>)1)) : (199252340)))) : (1854370751U)))) : (min((((((var_15) + (9223372036854775807LL))) >> (((((/* implicit */val<int>) (val<unsigned char>)232)) - (179))))), (((/* implicit */val<long long int>) var_10))))));
    *var_20 = ((/* implicit */val<unsigned char>) max((*var_20), (((/* implicit */val<unsigned char>) min((min((((((/* implicit */val<bool>) -1636737297)) ? (((/* implicit */val<unsigned long long int>) -1466846328866354224LL)) : (var_17))), (((/* implicit */val<unsigned long long int>) ((((/* implicit */val<unsigned int>) ((/* implicit */val<int>) (val<unsigned char>)254))) >= (var_7)))))), (((/* implicit */val<unsigned long long int>) (~(((/* implicit */val<int>) ((val<bool>) (val<bool>)0)))))))))));
    *var_21 = ((/* implicit */val<unsigned char>) (val<unsigned short>)65307);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_7 = 3597834624U;
unsigned int var_10 = 4129595011U;
long long int var_15 = -2744352631583804315LL;
unsigned long long int var_17 = 4295749936768245563ULL;
int zero = 0;
signed char var_19 = (signed char)-97;
unsigned char var_20 = (unsigned char)177;
unsigned char var_21 = (unsigned char)148;
void init() {
}

void checksum() {
    value_mismatch |= var_19 != (signed char)1;
    value_mismatch |= var_20 != (unsigned char)177;
    value_mismatch |= var_21 != (unsigned char)27;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_7, var_10, var_15, var_17, zero, &var_19, &var_20, &var_21);
  checksum();
}
