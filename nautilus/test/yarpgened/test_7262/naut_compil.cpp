/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 7262
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=7262
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
void test(val<unsigned int> var_7, val<unsigned int> var_10, val<int> zero, val<unsigned char*> var_19, val<int*> var_20) {
    *var_19 = ((/* implicit */val<unsigned char>) var_10);
    *var_20 = ((/* implicit */val<int>) max((*var_20), (((/* implicit */val<int>) var_7))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_7 = 416157256U;
unsigned int var_10 = 3155251562U;
int zero = 0;
unsigned char var_19 = (unsigned char)74;
int var_20 = -1839176563;
void init() {
}

void checksum() {
    value_mismatch |= var_19 != (unsigned char)106;
    value_mismatch |= var_20 != 416157256;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_7, var_10, zero, &var_19, &var_20);
  checksum();
  assert(!value_mismatch);
}
