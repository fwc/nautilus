/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 5458
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=5458
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
void test(val<unsigned char> var_1, val<unsigned char> var_12, val<int> zero, val<unsigned long long int*> var_18, val<unsigned int*> var_19) {
    *var_18 = ((/* implicit */val<unsigned long long int>) min((*var_18), (((/* implicit */val<unsigned long long int>) var_1))));
    *var_19 = ((/* implicit */val<unsigned int>) var_12);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)147;
unsigned char var_12 = (unsigned char)22;
int zero = 0;
unsigned long long int var_18 = 6180047976264787378ULL;
unsigned int var_19 = 54193462U;
void init() {
}

void checksum() {
    value_mismatch |= var_18 != 147ULL;
    value_mismatch |= var_19 != 22U;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_12, zero, &var_18, &var_19);
  checksum();
  assert(!value_mismatch);
}
