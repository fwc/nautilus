/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 9083
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=9083
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
void test(val<long long int> var_1, val<int> var_4, val<unsigned char> var_7, val<long long int> var_9, val<short> var_10, val<int> zero, val<bool*> var_12, val<unsigned int*> var_13) {
    *var_12 = ((/* implicit */val<bool>) var_9);
    *var_13 = ((/* implicit */val<unsigned int>) ((((/* implicit */val<long long int>) ((/* implicit */val<int>) ((((/* implicit */val<int>) var_7)) == (((((/* implicit */val<int>) var_10)) << (((var_4) - (636793224))))))))) != (((var_1) / (max((((/* implicit */val<long long int>) var_10)), (var_1)))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -6413096276947482363LL;
int var_4 = 636793239;
unsigned char var_7 = (unsigned char)242;
long long int var_9 = -8429137528168848061LL;
short var_10 = (short)16067;
int zero = 0;
bool var_12 = (bool)0;
unsigned int var_13 = 902778528U;
void init() {
}

void checksum() {
    value_mismatch |= var_12 != (bool)1;
    value_mismatch |= var_13 != 1U;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_4, var_7, var_9, var_10, zero, &var_12, &var_13);
  checksum();
  assert(!value_mismatch);
}
