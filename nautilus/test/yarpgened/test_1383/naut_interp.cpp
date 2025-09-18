/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 1383
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=1383
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
void test(val<unsigned long long int> var_0, val<bool> var_1, val<short> var_2, val<short> var_3, val<bool> var_4, val<long long int> var_5, val<unsigned short> var_7, val<unsigned long long int> var_8, val<bool> var_9, val<int> zero, val<short*> var_10, val<int*> var_11, val<bool*> var_12, val<unsigned short*> var_13) {
    *var_10 = var_3;
    *var_11 ^= ((/* implicit */val<int>) ((((/* implicit */val<bool>) var_8)) ? (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_1))) : ((~(((((/* implicit */val<bool>) var_7)) ? (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) (val<signed char>)108))) : (var_0)))))));
    *var_12 = ((/* implicit */val<bool>) (((~(((var_0) & (((/* implicit */val<unsigned long long int>) var_5)))))) * (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_2)))));
    *var_13 *= ((/* implicit */val<unsigned short>) ((((((/* implicit */val<int>) min((var_7), ((val<unsigned short>)0)))) ^ (((/* implicit */val<int>) var_3)))) & (((((/* implicit */val<int>) min((((/* implicit */val<unsigned short>) var_9)), (var_7)))) | (((((/* implicit */val<bool>) 0ULL)) ? (((/* implicit */val<int>) var_4)) : (((/* implicit */val<int>) (val<unsigned short>)0))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 16312291977422347840ULL;
bool var_1 = (bool)0;
short var_2 = (short)1751;
short var_3 = (short)-13256;
bool var_4 = (bool)1;
long long int var_5 = 5747079736649080094LL;
unsigned short var_7 = (unsigned short)28126;
unsigned long long int var_8 = 2566993965375476370ULL;
bool var_9 = (bool)1;
int zero = 0;
short var_10 = (short)-11914;
int var_11 = -632352672;
bool var_12 = (bool)0;
unsigned short var_13 = (unsigned short)55005;
void init() {
}

void checksum() {
    value_mismatch |= var_10 != (short)-13256;
    value_mismatch |= var_11 != -632352672;
    value_mismatch |= var_12 != (bool)1;
    value_mismatch |= var_13 != (unsigned short)0;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_2, var_3, var_4, var_5, var_7, var_8, var_9, zero, &var_10, &var_11, &var_12, &var_13);
  checksum();
}
