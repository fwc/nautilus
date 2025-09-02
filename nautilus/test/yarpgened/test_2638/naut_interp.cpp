/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 2638
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=2638
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
void test(val<unsigned int> var_9, val<signed char> var_14, val<int> zero, val<unsigned char*> var_15, val<unsigned long long int*> var_16) {
    *var_15 = ((/* implicit */val<unsigned char>) var_9);
    *var_16 = ((/* implicit */val<unsigned long long int>) ((val<unsigned int>) var_14));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_9 = 2803031626U;
signed char var_14 = (signed char)-124;
int zero = 0;
unsigned char var_15 = (unsigned char)188;
unsigned long long int var_16 = 10413935463998873189ULL;
void init() {
}

void checksum() {
    value_mismatch |= var_15 != (unsigned char)74;
    value_mismatch |= var_16 != 4294967172ULL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_9, var_14, zero, &var_15, &var_16);
  checksum();
  assert(!value_mismatch);
}
