/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 4446
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=4446
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
void test(val<long long int> var_12, val<int> zero, val<short*> var_20, val<long long int*> var_21, val<unsigned char*> var_22) {
    *var_20 *= ((/* implicit */val<short>) 344278240835145520LL);
    *var_21 += var_12;
    *var_22 *= ((/* implicit */val<unsigned char>) var_12);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_12 = -3424834331291377069LL;
int zero = 0;
short var_20 = (short)-13930;
long long int var_21 = 7303237242481661474LL;
unsigned char var_22 = (unsigned char)130;
void init() {
}

void checksum() {
    value_mismatch |= var_20 != (short)-27104;
    value_mismatch |= var_21 != 3878402911190284405LL;
    value_mismatch |= var_22 != (unsigned char)38;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_12, zero, &var_20, &var_21, &var_22);
  checksum();
  assert(!value_mismatch);
}
