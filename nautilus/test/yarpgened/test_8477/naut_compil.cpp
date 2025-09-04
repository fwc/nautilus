/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 8477
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=8477
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
void test(val<unsigned int> var_7, val<int> zero, val<signed char*> var_16, val<long long int*> var_17) {
    *var_16 = ((/* implicit */val<signed char>) ((var_7) << (((max((-8781161339430939020LL), (((/* implicit */val<long long int>) (val<short>)25397)))) - (25384LL)))));
    *var_17 = ((/* implicit */val<long long int>) (val<bool>)0);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_7 = 1278693352U;
int zero = 0;
signed char var_16 = (signed char)-62;
long long int var_17 = 2866956786818558688LL;
void init() {
}

void checksum() {
    value_mismatch |= var_16 != (signed char)0;
    value_mismatch |= var_17 != 0LL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_7, zero, &var_16, &var_17);
  checksum();
  assert(!value_mismatch);
}
