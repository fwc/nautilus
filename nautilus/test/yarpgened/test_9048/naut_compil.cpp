/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 9048
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=9048
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
void test(val<long long int> var_9, val<bool> var_10, val<int> zero, val<unsigned long long int*> var_15, val<signed char*> var_16) {
    *var_15 ^= ((/* implicit */val<unsigned long long int>) var_10);
    *var_16 = ((/* implicit */val<signed char>) ((val<unsigned char>) var_9));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_9 = 2106318771887268798LL;
bool var_10 = (bool)1;
int zero = 0;
unsigned long long int var_15 = 14574592032995763039ULL;
signed char var_16 = (signed char)-70;
void init() {
}

void checksum() {
    value_mismatch |= var_15 != 14574592032995763038ULL;
    value_mismatch |= var_16 != (signed char)-66;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_9, var_10, zero, &var_15, &var_16);
  checksum();
  assert(!value_mismatch);
}
