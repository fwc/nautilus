/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 2237
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=2237
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
void test(val<bool> var_7, val<int> var_10, val<int> zero, val<unsigned long long int*> var_12, val<unsigned long long int*> var_13) {
    *var_12 = ((/* implicit */val<unsigned long long int>) min((*var_12), (((/* implicit */val<unsigned long long int>) var_7))));
    *var_13 = ((/* implicit */val<unsigned long long int>) ((var_10) >> (((((/* implicit */val<int>) (val<unsigned char>)49)) - (18)))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

bool var_7 = (bool)0;
int var_10 = 1292605356;
int zero = 0;
unsigned long long int var_12 = 15766741449443310085ULL;
unsigned long long int var_13 = 2764033070389073479ULL;
void init() {
}

void checksum() {
    value_mismatch |= var_12 != 0ULL;
    value_mismatch |= var_13 != 0ULL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_7, var_10, zero, &var_12, &var_13);
  checksum();
  assert(!value_mismatch);
}
