/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 8783
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=8783
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
void test(val<unsigned char> var_4, val<long long int> var_7, val<long long int> var_8, val<unsigned char> var_10, val<long long int> var_15, val<unsigned char> var_16, val<int> zero, val<unsigned char*> var_18, val<long long int*> var_19, val<long long int*> var_20) {
    *var_18 = ((/* implicit */val<unsigned char>) ((((/* implicit */val<long long int>) ((/* implicit */val<int>) (val<unsigned char>)238))) <= ((~(min((((/* implicit */val<long long int>) var_16)), (var_7)))))));
    *var_19 = var_15;
    *var_20 = ((/* implicit */val<long long int>) ((((/* implicit */val<bool>) (~(((/* implicit */val<int>) ((var_15) != (((/* implicit */val<long long int>) ((/* implicit */val<int>) var_4))))))))) ? (((/* implicit */val<int>) max((((((/* implicit */val<int>) (val<unsigned char>)92)) <= (((/* implicit */val<int>) (val<unsigned char>)92)))), ((!(((/* implicit */val<bool>) var_8))))))) : (((/* implicit */val<int>) var_10))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_4 = (unsigned char)58;
long long int var_7 = -8756852263923230185LL;
long long int var_8 = 8787335595318215858LL;
unsigned char var_10 = (unsigned char)63;
long long int var_15 = -2454151427795317049LL;
unsigned char var_16 = (unsigned char)191;
int zero = 0;
unsigned char var_18 = (unsigned char)233;
long long int var_19 = 4100582047806831773LL;
long long int var_20 = -3396508709271608202LL;
void init() {
}

void checksum() {
    value_mismatch |= var_18 != (unsigned char)1;
    value_mismatch |= var_19 != -2454151427795317049LL;
    value_mismatch |= var_20 != 1LL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_4, var_7, var_8, var_10, var_15, var_16, zero, &var_18, &var_19, &var_20);
  checksum();
  assert(!value_mismatch);
}
