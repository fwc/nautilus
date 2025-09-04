/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 8350
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=8350
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
void test(val<unsigned long long int> var_1, val<unsigned long long int> var_6, val<unsigned long long int> var_9, val<unsigned long long int> var_10, val<int> zero, val<unsigned long long int*> var_12, val<unsigned long long int*> var_13, val<unsigned long long int*> var_14) {
    *var_12 = max(((-(max((12028768407543706252ULL), (0ULL))))), (((((((/* implicit */val<bool>) var_1)) ? (var_9) : (18446744073709551613ULL))) << (((/* implicit */val<int>) (!(((/* implicit */val<bool>) 15366657039984456752ULL))))))));
    *var_13 = 10ULL;
    *var_14 ^= ((var_6) ^ (((min((var_10), (17637491991525866441ULL))) - (var_1))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 17400475466019432172ULL;
unsigned long long int var_6 = 10426163541884209960ULL;
unsigned long long int var_9 = 3741595746656215423ULL;
unsigned long long int var_10 = 7957486290572353500ULL;
int zero = 0;
unsigned long long int var_12 = 7993731614814928359ULL;
unsigned long long int var_13 = 13293565289793240148ULL;
unsigned long long int var_14 = 5202973696769538839ULL;
void init() {
}

void checksum() {
    value_mismatch |= var_12 != 6417975666165845364ULL;
    value_mismatch |= var_13 != 10ULL;
    value_mismatch |= var_14 != 11850733010923751631ULL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_6, var_9, var_10, zero, &var_12, &var_13, &var_14);
  checksum();
  assert(!value_mismatch);
}
