/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 2732
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=2732
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
void test(val<unsigned int> var_4, val<bool> var_7, val<unsigned int> var_10, val<long long int> var_14, val<int> var_15, val<long long int> var_16, val<long long int> var_17, val<int> zero, val<long long int*> var_18, val<unsigned long long int*> var_19, val<signed char*> var_20) {
    *var_18 = ((/* implicit */val<long long int>) (!(((/* implicit */val<bool>) 626332752))));
    *var_19 = ((/* implicit */val<unsigned long long int>) (!((!(((((/* implicit */val<bool>) var_17)) && (((/* implicit */val<bool>) var_15))))))));
    *var_20 = ((/* implicit */val<signed char>) min((((var_10) >> (((((/* implicit */val<int>) (val<bool>)1)) >> (((var_16) + (5559338874857222088LL))))))), (((((/* implicit */val<bool>) var_14)) ? (var_4) : (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_7)))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 3904474404U;
bool var_7 = (bool)0;
unsigned int var_10 = 1802637831U;
long long int var_14 = -8603003018096085801LL;
int var_15 = -1566246185;
long long int var_16 = -5559338874857222073LL;
long long int var_17 = -4223966124224486237LL;
int zero = 0;
long long int var_18 = 2751309024658754801LL;
unsigned long long int var_19 = 1428191212785975099ULL;
signed char var_20 = (signed char)91;
void init() {
}

void checksum() {
    value_mismatch |= var_18 != 0LL;
    value_mismatch |= var_19 != 1ULL;
    value_mismatch |= var_20 != (signed char)7;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_4, var_7, var_10, var_14, var_15, var_16, var_17, zero, &var_18, &var_19, &var_20);
  checksum();
  assert(!value_mismatch);
}
