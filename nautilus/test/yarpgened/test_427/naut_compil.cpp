/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 427
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=427
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
void test(val<bool> var_7, val<int> var_8, val<signed char> var_9, val<signed char> var_15, val<int> zero, val<long long int*> var_16, val<int*> var_17, val<int*> var_18) {
    *var_16 = ((/* implicit */val<long long int>) min((min((((/* implicit */val<int>) (val<bool>)1)), (var_8))), (var_8)));
    *var_17 ^= ((/* implicit */val<int>) var_9);
    *var_18 = ((/* implicit */val<int>) ((((/* implicit */val<bool>) var_15)) ? (((((/* implicit */val<bool>) (-(4224951035634112184LL)))) ? (((((/* implicit */val<unsigned long long int>) 63)) - (15140360743686903040ULL))) : (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) ((val<bool>) -70)))))) : (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_7)))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

bool var_7 = (bool)0;
int var_8 = -670792839;
signed char var_9 = (signed char)-114;
signed char var_15 = (signed char)-93;
int zero = 0;
long long int var_16 = 7397652639057899932LL;
int var_17 = -514914871;
int var_18 = 1430531250;
void init() {
}

void checksum() {
    value_mismatch |= var_16 != -670792839LL;
    value_mismatch |= var_17 != 514914887;
    value_mismatch |= var_18 != -448402625;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_7, var_8, var_9, var_15, zero, &var_16, &var_17, &var_18);
  checksum();
  assert(!value_mismatch);
}
