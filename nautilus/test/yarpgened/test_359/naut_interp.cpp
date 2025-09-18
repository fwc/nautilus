/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 359
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=359
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
void test(val<unsigned long long int> var_0, val<signed char> var_4, val<int> var_6, val<int> var_9, val<int> zero, val<long long int*> var_13, val<short*> var_14) {
    *var_13 = ((/* implicit */val<long long int>) var_4);
    *var_14 = ((/* implicit */val<short>) ((((/* implicit */val<bool>) var_9)) ? (min((((/* implicit */val<unsigned long long int>) var_6)), (((var_0) ^ (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) (val<unsigned char>)107))))))) : (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) (val<unsigned char>)148)))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 16589668032858735682ULL;
signed char var_4 = (signed char)62;
int var_6 = -1052544665;
int var_9 = -2043646540;
int zero = 0;
long long int var_13 = -8669916895558131552LL;
short var_14 = (short)16943;
void init() {
}

void checksum() {
    value_mismatch |= var_13 != 62LL;
    value_mismatch |= var_14 != (short)-15319;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_4, var_6, var_9, zero, &var_13, &var_14);
  checksum();
}
