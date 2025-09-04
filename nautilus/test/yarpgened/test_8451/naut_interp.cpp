/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 8451
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=8451
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
void test(val<unsigned char> var_5, val<int> zero, val<unsigned long long int*> var_13, val<unsigned char*> var_14) {
    *var_13 = ((/* implicit */val<unsigned long long int>) (val<signed char>)-51);
    *var_14 = ((/* implicit */val<unsigned char>) max((*var_14), (((/* implicit */val<unsigned char>) (+(((/* implicit */val<int>) var_5)))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_5 = (unsigned char)35;
int zero = 0;
unsigned long long int var_13 = 11060896630866822066ULL;
unsigned char var_14 = (unsigned char)113;
void init() {
}

void checksum() {
    value_mismatch |= var_13 != 18446744073709551565ULL;
    value_mismatch |= var_14 != (unsigned char)113;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_5, zero, &var_13, &var_14);
  checksum();
  assert(!value_mismatch);
}
