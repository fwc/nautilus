/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 1017
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=1017
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
void test(val<unsigned char> var_0, val<long long int> var_3, val<bool> var_11, val<int> zero, val<bool*> var_17, val<bool*> var_18) {
    *var_17 = ((/* implicit */val<bool>) var_0);
    *var_18 = ((/* implicit */val<bool>) (+(((((/* implicit */val<long long int>) ((/* implicit */val<int>) var_11))) * (min((((/* implicit */val<long long int>) var_11)), (var_3)))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)11;
long long int var_3 = 154597548931033840LL;
bool var_11 = (bool)1;
int zero = 0;
bool var_17 = (bool)0;
bool var_18 = (bool)0;
void init() {
}

void checksum() {
    value_mismatch |= var_17 != (bool)1;
    value_mismatch |= var_18 != (bool)1;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_3, var_11, zero, &var_17, &var_18);
  checksum();
  assert(!value_mismatch);
}
