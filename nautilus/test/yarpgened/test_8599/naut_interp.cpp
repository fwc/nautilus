/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 8599
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=8599
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
void test(val<int> var_6, val<int> zero, val<int*> var_10, val<unsigned long long int*> var_11) {
    *var_10 = var_6;
    *var_11 = ((/* implicit */val<unsigned long long int>) min((((((/* implicit */val<int>) (val<signed char>)-32)) & (((/* implicit */val<int>) (val<short>)30238)))), (var_6)));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_6 = 208107791;
int zero = 0;
int var_10 = 1751480294;
unsigned long long int var_11 = 3613532110616525809ULL;
void init() {
}

void checksum() {
    value_mismatch |= var_10 != 208107791;
    value_mismatch |= var_11 != 30208ULL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_6, zero, &var_10, &var_11);
  checksum();
}
