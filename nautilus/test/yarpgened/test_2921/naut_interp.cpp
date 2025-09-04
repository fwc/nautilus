/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 2921
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=2921
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
void test(val<long long int> var_2, val<long long int> var_5, val<unsigned long long int> var_9, val<bool> var_14, val<unsigned int> var_17, val<unsigned int> var_18, val<int> zero, val<unsigned short*> var_19, val<int*> var_20) {
    *var_19 = ((/* implicit */val<unsigned short>) var_18);
    *var_20 += ((/* implicit */val<int>) ((max((((/* implicit */val<unsigned long long int>) (!(((/* implicit */val<bool>) var_2))))), (((((/* implicit */val<bool>) var_17)) ? (((/* implicit */val<unsigned long long int>) var_5)) : (var_9))))) > (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) min(((val<signed char>)-30), (((/* implicit */val<signed char>) var_14))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -8864648859372942442LL;
long long int var_5 = 7499786477754943127LL;
unsigned long long int var_9 = 1140313298253127817ULL;
bool var_14 = (bool)1;
unsigned int var_17 = 2653304774U;
unsigned int var_18 = 3848744209U;
int zero = 0;
unsigned short var_19 = (unsigned short)38727;
int var_20 = -2021013699;
void init() {
}

void checksum() {
    value_mismatch |= var_19 != (unsigned short)11537;
    value_mismatch |= var_20 != -2021013699;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_2, var_5, var_9, var_14, var_17, var_18, zero, &var_19, &var_20);
  checksum();
  assert(!value_mismatch);
}
