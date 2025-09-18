/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 9253
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=9253
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
void test(val<unsigned char> var_2, val<unsigned short> var_8, val<unsigned int> var_9, val<unsigned int> var_10, val<int> zero, val<short*> var_11, val<unsigned long long int*> var_12, val<int*> var_13) {
    *var_11 = ((/* implicit */val<short>) ((((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) ((((/* implicit */val<unsigned long long int>) (-(((/* implicit */val<int>) (val<short>)-11289))))) <= (((((/* implicit */val<bool>) 14754277153257501923ULL)) ? (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_8))) : (3692466920452049693ULL))))))) * (((((/* implicit */val<bool>) ((((/* implicit */val<int>) (val<signed char>)110)) << (((3692466920452049683ULL) - (3692466920452049664ULL)))))) ? (0ULL) : (((/* implicit */val<unsigned long long int>) (+(((/* implicit */val<int>) (val<signed char>)48)))))))));
    *var_12 = ((/* implicit */val<unsigned long long int>) var_9);
    *var_13 = max(((+(((/* implicit */val<int>) ((var_10) <= (((/* implicit */val<unsigned int>) -245069742))))))), (((/* implicit */val<int>) var_2)));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)18;
unsigned short var_8 = (unsigned short)6406;
unsigned int var_9 = 4161748783U;
unsigned int var_10 = 2218913888U;
int zero = 0;
short var_11 = (short)20597;
unsigned long long int var_12 = 8747531270198208807ULL;
int var_13 = -1576766045;
void init() {
}

void checksum() {
    value_mismatch |= var_11 != (short)0;
    value_mismatch |= var_12 != 4161748783ULL;
    value_mismatch |= var_13 != 18;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_2, var_8, var_9, var_10, zero, &var_11, &var_12, &var_13);
  checksum();
}
