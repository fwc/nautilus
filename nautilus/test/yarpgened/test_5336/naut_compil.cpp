/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 5336
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=5336
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
void test(val<long long int> var_12, val<int> zero, val<unsigned long long int*> var_19, val<unsigned char*> var_20) {
    *var_19 = ((/* implicit */val<unsigned long long int>) var_12);
    *var_20 -= ((/* implicit */val<unsigned char>) var_12);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_12 = -145377373119009683LL;
int zero = 0;
unsigned long long int var_19 = 14122263294977201933ULL;
unsigned char var_20 = (unsigned char)224;
void init() {
}

void checksum() {
    value_mismatch |= var_19 != 18301366700590541933ULL;
    value_mismatch |= var_20 != (unsigned char)115;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_12, zero, &var_19, &var_20);
  checksum();
}
