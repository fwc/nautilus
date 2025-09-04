/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 5105
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=5105
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
void test(val<bool> var_0, val<int> var_2, val<bool> var_3, val<unsigned long long int> var_5, val<bool> var_7, val<unsigned long long int> var_10, val<int> zero, val<unsigned long long int*> var_13, val<long long int*> var_14) {
    *var_13 = ((/* implicit */val<unsigned long long int>) 353595524U);
    *var_14 = ((/* implicit */val<long long int>) (((((((val<bool>)1) ? (((/* implicit */val<unsigned long long int>) -1917790399)) : (var_5))) == (((/* implicit */val<unsigned long long int>) ((((/* implicit */val<bool>) 1917790400)) ? (((/* implicit */val<int>) var_7)) : (var_2)))))) ? (((/* implicit */val<unsigned long long int>) ((((/* implicit */val<bool>) 1917790408)) ? ((~(((/* implicit */val<int>) (val<signed char>)-1)))) : (((((/* implicit */val<bool>) 1917790394)) ? (1917790376) : (((/* implicit */val<int>) (val<short>)10341))))))) : (((max(((val<bool>)1), (var_0))) ? (var_10) : (((/* implicit */val<unsigned long long int>) ((((/* implicit */val<bool>) 1917790394)) ? (((/* implicit */val<int>) var_7)) : (((/* implicit */val<int>) var_3)))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

bool var_0 = (bool)1;
int var_2 = 770730419;
bool var_3 = (bool)1;
unsigned long long int var_5 = 7297915235364142497ULL;
bool var_7 = (bool)1;
unsigned long long int var_10 = 3239278651525684364ULL;
int zero = 0;
unsigned long long int var_13 = 8705923381260600178ULL;
long long int var_14 = 8256358237020330211LL;
void init() {
}

void checksum() {
    value_mismatch |= var_13 != 353595524ULL;
    value_mismatch |= var_14 != 3239278651525684364LL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_2, var_3, var_5, var_7, var_10, zero, &var_13, &var_14);
  checksum();
  assert(!value_mismatch);
}
