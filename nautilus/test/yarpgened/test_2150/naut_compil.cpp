/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 2150
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=2150
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
void test(val<bool> var_5, val<unsigned long long int> var_9, val<int> zero, val<short*> var_10, val<long long int*> var_11) {
    *var_10 = ((/* implicit */val<short>) (~(var_9)));
    *var_11 = ((/* implicit */val<long long int>) var_5);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

bool var_5 = (bool)0;
unsigned long long int var_9 = 10967334990009603070ULL;
int zero = 0;
short var_10 = (short)-2129;
long long int var_11 = -3939005807640466480LL;
void init() {
}

void checksum() {
    value_mismatch |= var_10 != (short)-5119;
    value_mismatch |= var_11 != 0LL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_5, var_9, zero, &var_10, &var_11);
  checksum();
  assert(!value_mismatch);
}
