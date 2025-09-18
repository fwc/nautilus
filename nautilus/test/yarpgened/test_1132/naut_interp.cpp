/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 1132
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=1132
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
void test(val<unsigned char> var_8, val<unsigned long long int> var_9, val<unsigned long long int> var_11, val<int> zero, val<unsigned int*> var_15, val<unsigned int*> var_16) {
    *var_15 = ((/* implicit */val<unsigned int>) var_8);
    *var_16 = ((/* implicit */val<unsigned int>) (~((~(min((var_11), (var_9)))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_8 = (unsigned char)72;
unsigned long long int var_9 = 14003058836480437551ULL;
unsigned long long int var_11 = 12018307275976154070ULL;
int zero = 0;
unsigned int var_15 = 949398817U;
unsigned int var_16 = 77114888U;
void init() {
}

void checksum() {
    value_mismatch |= var_15 != 72U;
    value_mismatch |= var_16 != 2987203542U;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_8, var_9, var_11, zero, &var_15, &var_16);
  checksum();
}
