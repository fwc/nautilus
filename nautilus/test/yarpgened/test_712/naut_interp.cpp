/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 712
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=712
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
void test(val<unsigned int> var_5, val<unsigned int> var_7, val<unsigned int> var_9, val<int> zero, val<unsigned int*> var_18, val<unsigned int*> var_19) {
    *var_18 *= ((val<unsigned int>) var_5);
    *var_19 &= ((/* implicit */val<unsigned int>) ((((/* implicit */val<bool>) 915226885U)) ? (((/* implicit */val<unsigned long long int>) var_7)) : (min((12075909469375143938ULL), (((/* implicit */val<unsigned long long int>) var_9))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_5 = 32126858U;
unsigned int var_7 = 2146030206U;
unsigned int var_9 = 1105146202U;
int zero = 0;
unsigned int var_18 = 1975638205U;
unsigned int var_19 = 2388697381U;
void init() {
}

void checksum() {
    value_mismatch |= var_18 != 4191252706U;
    value_mismatch |= var_19 != 241205284U;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_5, var_7, var_9, zero, &var_18, &var_19);
  checksum();
  assert(!value_mismatch);
}
