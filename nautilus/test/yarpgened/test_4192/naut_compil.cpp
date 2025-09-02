/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 4192
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=4192
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
void test(val<int> var_1, val<unsigned long long int> var_3, val<long long int> var_9, val<int> zero, val<int*> var_11, val<long long int*> var_12) {
    *var_11 = ((/* implicit */val<int>) (!(((/* implicit */val<bool>) var_3))));
    *var_12 = ((/* implicit */val<long long int>) min((var_1), (((/* implicit */val<int>) (!(((/* implicit */val<bool>) ((((/* implicit */val<bool>) 9223372036854775807LL)) ? (var_9) : (var_9)))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1013576731;
unsigned long long int var_3 = 15574275670461418801ULL;
long long int var_9 = -1904812394208891548LL;
int zero = 0;
int var_11 = -187420239;
long long int var_12 = 303569239800952574LL;
void init() {
}

void checksum() {
    value_mismatch |= var_11 != 0;
    value_mismatch |= var_12 != 0LL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_3, var_9, zero, &var_11, &var_12);
  checksum();
  assert(!value_mismatch);
}
