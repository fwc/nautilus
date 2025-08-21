/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 556
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --seed=556
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
void test(val<int> var_2, val<long long int> var_5, val<int> var_8, val<long long int> var_10, val<int> var_11, val<short> var_12, val<int> zero, val<long long int*> var_13, val<long long int*> var_14) {
    *var_13 = ((/* implicit */val<long long int>) (!(((/* implicit */val<bool>) min((((((/* implicit */val<bool>) var_11)) ? (((/* implicit */val<long long int>) var_11)) : (var_5))), (((/* implicit */val<long long int>) var_8)))))));
    *var_14 -= ((/* implicit */val<long long int>) ((((((/* implicit */val<int>) (!(((/* implicit */val<bool>) var_10))))) & ((~(var_2))))) & ((-((-(((/* implicit */val<int>) var_12))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -980481444;
long long int var_5 = -6322441842709980199LL;
int var_8 = 151982528;
long long int var_10 = -5256255151971345288LL;
int var_11 = -1191493289;
short var_12 = (short)-21223;
int zero = 0;
long long int var_13 = -1952689302218253746LL;
long long int var_14 = -2720256663995586494LL;
void init() {
}

void checksum() {
    value_mismatch |= var_13 != 0LL;
    value_mismatch |= var_14 != -2720256663995586494LL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_2, var_5, var_8, var_10, var_11, var_12, zero, &var_13, &var_14);
  checksum();
  assert(!value_mismatch);
}
