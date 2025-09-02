/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 2752
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=2752
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
void test(val<unsigned char> var_15, val<unsigned char> var_17, val<int> zero, val<unsigned char*> var_19, val<unsigned char*> var_20, val<unsigned int*> var_21) {
    *var_19 = var_15;
    *var_20 = var_15;
    *var_21 = ((/* implicit */val<unsigned int>) min((*var_21), (((/* implicit */val<unsigned int>) var_17))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_15 = (unsigned char)65;
unsigned char var_17 = (unsigned char)200;
int zero = 0;
unsigned char var_19 = (unsigned char)11;
unsigned char var_20 = (unsigned char)205;
unsigned int var_21 = 3919254995U;
void init() {
}

void checksum() {
    value_mismatch |= var_19 != (unsigned char)65;
    value_mismatch |= var_20 != (unsigned char)65;
    value_mismatch |= var_21 != 200U;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_15, var_17, zero, &var_19, &var_20, &var_21);
  checksum();
  assert(!value_mismatch);
}
