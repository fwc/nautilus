/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 5442
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=5442
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
void test(val<unsigned int> var_9, val<unsigned short> var_13, val<int> zero, val<unsigned char*> var_20, val<unsigned char*> var_21) {
    *var_20 = ((/* implicit */val<unsigned char>) var_13);
    *var_21 = ((/* implicit */val<unsigned char>) var_9);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_9 = 3964499662U;
unsigned short var_13 = (unsigned short)58706;
int zero = 0;
unsigned char var_20 = (unsigned char)17;
unsigned char var_21 = (unsigned char)192;
void init() {
}

void checksum() {
    value_mismatch |= var_20 != (unsigned char)82;
    value_mismatch |= var_21 != (unsigned char)206;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_9, var_13, zero, &var_20, &var_21);
  checksum();
  assert(!value_mismatch);
}
