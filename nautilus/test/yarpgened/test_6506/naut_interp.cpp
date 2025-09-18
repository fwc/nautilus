/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 6506
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=6506
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
void test(val<signed char> var_1, val<signed char> var_4, val<long long int> var_7, val<long long int> var_14, val<int> zero, val<signed char*> var_19, val<long long int*> var_20, val<signed char*> var_21) {
    *var_19 = ((/* implicit */val<signed char>) var_7);
    *var_20 ^= ((/* implicit */val<long long int>) min((0ULL), (((/* implicit */val<unsigned long long int>) 0LL))));
    *var_21 = ((/* implicit */val<signed char>) min((*var_21), (((/* implicit */val<signed char>) ((((/* implicit */val<bool>) var_14)) ? (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) ((((/* implicit */val<bool>) var_14)) && ((!(((/* implicit */val<bool>) (val<signed char>)(-127 - 1))))))))) : (max((((((/* implicit */val<bool>) var_7)) ? (17156253654192233428ULL) : (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_4))))), (((/* implicit */val<unsigned long long int>) var_1)))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)47;
signed char var_4 = (signed char)60;
long long int var_7 = 6546784616023746371LL;
long long int var_14 = 8483726509138445162LL;
int zero = 0;
signed char var_19 = (signed char)121;
long long int var_20 = -5301428107956641784LL;
signed char var_21 = (signed char)-3;
void init() {
}

void checksum() {
    value_mismatch |= var_19 != (signed char)67;
    value_mismatch |= var_20 != -5301428107956641784LL;
    value_mismatch |= var_21 != (signed char)-3;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_4, var_7, var_14, zero, &var_19, &var_20, &var_21);
  checksum();
}
