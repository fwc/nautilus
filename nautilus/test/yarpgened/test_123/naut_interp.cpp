/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 123
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=123
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
void test(val<unsigned long long int> var_9, val<long long int> var_10, val<bool> var_11, val<int> zero, val<bool*> var_12, val<unsigned short*> var_13, val<unsigned int*> var_14, val<long long int*> var_15) {
    *var_12 *= ((/* implicit */val<bool>) 4613410554489653233ULL);
    *var_13 &= ((/* implicit */val<unsigned short>) var_9);
    *var_14 = ((/* implicit */val<unsigned int>) var_11);
    *var_15 = var_10;
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_9 = 4124084331863767338ULL;
long long int var_10 = 6870401691950789884LL;
bool var_11 = (bool)0;
int zero = 0;
bool var_12 = (bool)0;
unsigned short var_13 = (unsigned short)35474;
unsigned int var_14 = 2598518797U;
long long int var_15 = 3074670307933974672LL;
void init() {
}

void checksum() {
    value_mismatch |= var_12 != (bool)0;
    value_mismatch |= var_13 != (unsigned short)2050;
    value_mismatch |= var_14 != 0U;
    value_mismatch |= var_15 != 6870401691950789884LL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_9, var_10, var_11, zero, &var_12, &var_13, &var_14, &var_15);
  checksum();
  assert(!value_mismatch);
}
