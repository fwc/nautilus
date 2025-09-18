/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 9112
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=9112
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
void test(val<unsigned long long int> var_6, val<int> var_9, val<unsigned int> var_14, val<unsigned long long int> var_18, val<int> zero, val<unsigned int*> var_20, val<unsigned char*> var_21) {
    *var_20 = ((/* implicit */val<unsigned int>) max((((/* implicit */val<unsigned long long int>) ((var_9) * (((/* implicit */val<int>) ((var_6) != (((/* implicit */val<unsigned long long int>) var_14)))))))), (var_18)));
    *var_21 ^= ((/* implicit */val<unsigned char>) (!(((/* implicit */val<bool>) var_18))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_6 = 5197772066319992583ULL;
int var_9 = 837411890;
unsigned int var_14 = 105386261U;
unsigned long long int var_18 = 11423028390588055886ULL;
int zero = 0;
unsigned int var_20 = 3739860390U;
unsigned char var_21 = (unsigned char)36;
void init() {
}

void checksum() {
    value_mismatch |= var_20 != 2821980494U;
    value_mismatch |= var_21 != (unsigned char)36;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_6, var_9, var_14, var_18, zero, &var_20, &var_21);
  checksum();
}
