/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 8187
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=8187
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
void test(val<unsigned char> var_6, val<long long int> var_9, val<long long int> var_12, val<int> zero, val<unsigned long long int*> var_13, val<long long int*> var_14) {
    *var_13 += ((/* implicit */val<unsigned long long int>) var_12);
    *var_14 = min((var_9), (((/* implicit */val<long long int>) (+((-(((/* implicit */val<int>) var_6))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_6 = (unsigned char)22;
long long int var_9 = 3878745650402668574LL;
long long int var_12 = -1987106599869199485LL;
int zero = 0;
unsigned long long int var_13 = 12912587071497482666ULL;
long long int var_14 = -8114150106636189265LL;
void init() {
}

void checksum() {
    value_mismatch |= var_13 != 10925480471628283181ULL;
    value_mismatch |= var_14 != -22LL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_6, var_9, var_12, zero, &var_13, &var_14);
  checksum();
  assert(!value_mismatch);
}
