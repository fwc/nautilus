/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 5865
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=5865
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
void test(val<unsigned short> var_3, val<signed char> var_5, val<unsigned long long int> var_6, val<signed char> var_11, val<int> var_13, val<long long int> var_15, val<signed char> var_17, val<int> zero, val<bool*> var_18, val<unsigned int*> var_19, val<short*> var_20) {
    *var_18 = ((/* implicit */val<bool>) var_11);
    *var_19 = ((/* implicit */val<unsigned int>) ((((/* implicit */val<bool>) var_6)) ? (((/* implicit */val<unsigned long long int>) ((((/* implicit */val<bool>) var_3)) ? (((((/* implicit */val<bool>) 1640423355)) ? (4014356440U) : (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_5))))) : (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) ((((/* implicit */val<long long int>) var_13)) > (var_15)))))))) : (13770397948564411528ULL)));
    *var_20 = ((/* implicit */val<short>) var_17);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)38660;
signed char var_5 = (signed char)-21;
unsigned long long int var_6 = 11390768631864205708ULL;
signed char var_11 = (signed char)64;
int var_13 = -7230811;
long long int var_15 = 6372509596107153362LL;
signed char var_17 = (signed char)91;
int zero = 0;
bool var_18 = (bool)1;
unsigned int var_19 = 3219250174U;
short var_20 = (short)-22295;
void init() {
}

void checksum() {
    value_mismatch |= var_18 != (bool)1;
    value_mismatch |= var_19 != 4014356440U;
    value_mismatch |= var_20 != (short)91;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_3, var_5, var_6, var_11, var_13, var_15, var_17, zero, &var_18, &var_19, &var_20);
  checksum();
  assert(!value_mismatch);
}
