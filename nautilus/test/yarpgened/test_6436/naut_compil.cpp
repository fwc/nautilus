/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 6436
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=6436
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
void test(val<unsigned char> var_4, val<unsigned char> var_15, val<int> zero, val<unsigned int*> var_20, val<long long int*> var_21) {
    *var_20 = ((/* implicit */val<unsigned int>) var_4);
    *var_21 &= ((/* implicit */val<long long int>) (-(((/* implicit */val<int>) var_15))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_4 = (unsigned char)231;
unsigned char var_15 = (unsigned char)180;
int zero = 0;
unsigned int var_20 = 2978983839U;
long long int var_21 = -7296239789908255066LL;
void init() {
}

void checksum() {
    value_mismatch |= var_20 != 231U;
    value_mismatch |= var_21 != -7296239789908255228LL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_4, var_15, zero, &var_20, &var_21);
  checksum();
  assert(!value_mismatch);
}
