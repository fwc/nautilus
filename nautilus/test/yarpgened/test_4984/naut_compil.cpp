/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 4984
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=4984
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
void test(val<unsigned char> var_1, val<unsigned long long int> var_4, val<int> zero, val<int*> var_10, val<long long int*> var_11, val<unsigned int*> var_12) {
    *var_10 = ((/* implicit */val<int>) (~(var_4)));
    *var_11 = ((/* implicit */val<long long int>) (~(3302826166U)));
    *var_12 = ((/* implicit */val<unsigned int>) var_1);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)198;
unsigned long long int var_4 = 6841568374552019138ULL;
int zero = 0;
int var_10 = -1951377621;
long long int var_11 = 4350510835849663043LL;
unsigned int var_12 = 1528638108U;
void init() {
}

void checksum() {
    value_mismatch |= var_10 != -1069039811;
    value_mismatch |= var_11 != 992141129LL;
    value_mismatch |= var_12 != 198U;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_4, zero, &var_10, &var_11, &var_12);
  checksum();
  assert(!value_mismatch);
}
