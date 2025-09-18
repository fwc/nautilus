/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 2107
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=2107
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
void test(val<unsigned char> var_8, val<bool> var_9, val<int> zero, val<unsigned long long int*> var_12, val<bool*> var_13) {
    *var_12 = ((/* implicit */val<unsigned long long int>) var_8);
    *var_13 = var_9;
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_8 = (unsigned char)240;
bool var_9 = (bool)1;
int zero = 0;
unsigned long long int var_12 = 2454543682302711475ULL;
bool var_13 = (bool)1;
void init() {
}

void checksum() {
    value_mismatch |= var_12 != 240ULL;
    value_mismatch |= var_13 != (bool)1;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_8, var_9, zero, &var_12, &var_13);
  checksum();
}
