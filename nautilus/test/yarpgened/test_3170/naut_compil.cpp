/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 3170
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=3170
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
void test(val<unsigned short> var_4, val<unsigned long long int> var_9, val<int> zero, val<signed char*> var_12, val<long long int*> var_13) {
    *var_12 = ((/* implicit */val<signed char>) (+(((/* implicit */val<int>) var_4))));
    *var_13 = ((/* implicit */val<long long int>) var_9);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_4 = (unsigned short)38087;
unsigned long long int var_9 = 16979315163346280635ULL;
int zero = 0;
signed char var_12 = (signed char)-21;
long long int var_13 = -8303464639829734133LL;
void init() {
}

void checksum() {
    value_mismatch |= var_12 != (signed char)-57;
    value_mismatch |= var_13 != -1467428910363270981LL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_4, var_9, zero, &var_12, &var_13);
  checksum();
}
