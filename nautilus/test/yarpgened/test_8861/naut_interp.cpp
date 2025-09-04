/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 8861
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=8861
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
void test(val<int> zero, val<bool*> var_11, val<unsigned long long int*> var_12) {
    *var_11 = ((/* implicit */val<bool>) max((((/* implicit */val<unsigned long long int>) ((((/* implicit */val<unsigned long long int>) min((((/* implicit */val<unsigned int>) (val<bool>)0)), (2544792278U)))) > (max((8246337208320ULL), (((/* implicit */val<unsigned long long int>) (val<signed char>)-1))))))), (min((((/* implicit */val<unsigned long long int>) max(((val<signed char>)12), (((/* implicit */val<signed char>) (val<bool>)1))))), (max((0ULL), (11857596298838966348ULL)))))));
    *var_12 = ((/* implicit */val<unsigned long long int>) ((((/* implicit */val<bool>) min((min((2544792275U), (((/* implicit */val<unsigned int>) (val<short>)-7830)))), (((/* implicit */val<unsigned int>) (val<short>)-13582))))) || (((/* implicit */val<bool>) ((((/* implicit */val<bool>) ((((/* implicit */val<int>) (val<bool>)0)) + (((/* implicit */val<int>) (val<unsigned short>)22178))))) ? ((((val<bool>)1) ? (((/* implicit */val<int>) (val<signed char>)-113)) : (((/* implicit */val<int>) (val<bool>)1)))) : (((/* implicit */val<int>) (val<signed char>)-43)))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int zero = 0;
bool var_11 = (bool)0;
unsigned long long int var_12 = 7951495646482955710ULL;
void init() {
}

void checksum() {
    value_mismatch |= var_11 != (bool)1;
    value_mismatch |= var_12 != 1ULL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(zero, &var_11, &var_12);
  checksum();
  assert(!value_mismatch);
}
