/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 8336
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=8336
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
void test(val<long long int> var_1, val<unsigned int> var_2, val<unsigned char> var_7, val<long long int> var_8, val<unsigned int> var_12, val<unsigned int> var_13, val<short> var_15, val<int> zero, val<int*> var_16, val<short*> var_17, val<unsigned long long int*> var_18) {
    *var_16 = ((/* implicit */val<int>) ((max((min((var_8), (((/* implicit */val<long long int>) var_7)))), (max((((/* implicit */val<long long int>) var_12)), (var_1))))) < (((/* implicit */val<long long int>) min((((/* implicit */val<unsigned int>) (!(((/* implicit */val<bool>) (val<short>)(-32767 - 1)))))), (max((var_2), (((/* implicit */val<unsigned int>) (val<signed char>)-96)))))))));
    *var_17 = ((/* implicit */val<short>) (((+((~(((/* implicit */val<int>) (val<unsigned short>)54234)))))) | (((/* implicit */val<int>) var_15))));
    *var_18 = ((/* implicit */val<unsigned long long int>) max((*var_18), (((/* implicit */val<unsigned long long int>) min((min((var_2), (((/* implicit */val<unsigned int>) (!(((/* implicit */val<bool>) var_13))))))), (((/* implicit */val<unsigned int>) (!((!(((/* implicit */val<bool>) var_12))))))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -2415542486188421081LL;
unsigned int var_2 = 2905803325U;
unsigned char var_7 = (unsigned char)64;
long long int var_8 = 7477227019215407996LL;
unsigned int var_12 = 2366326579U;
unsigned int var_13 = 4009471178U;
short var_15 = (short)-15879;
int zero = 0;
int var_16 = -507494933;
short var_17 = (short)-26092;
unsigned long long int var_18 = 11588359098849066721ULL;
void init() {
}

void checksum() {
    value_mismatch |= var_16 != 0;
    value_mismatch |= var_17 != (short)-4611;
    value_mismatch |= var_18 != 11588359098849066721ULL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_2, var_7, var_8, var_12, var_13, var_15, zero, &var_16, &var_17, &var_18);
  checksum();
}
