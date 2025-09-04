/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 2736
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=2736
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
void test(val<unsigned int> var_2, val<unsigned int> var_6, val<int> zero, val<unsigned char*> var_15, val<unsigned int*> var_16) {
    *var_15 = ((/* implicit */val<unsigned char>) var_6);
    *var_16 &= min((var_2), (((/* implicit */val<unsigned int>) ((((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) (val<short>)-5664))) == (14731048961471115319ULL)))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 2426629856U;
unsigned int var_6 = 780682159U;
int zero = 0;
unsigned char var_15 = (unsigned char)70;
unsigned int var_16 = 559332291U;
void init() {
}

void checksum() {
    value_mismatch |= var_15 != (unsigned char)175;
    value_mismatch |= var_16 != 0U;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_2, var_6, zero, &var_15, &var_16);
  checksum();
  assert(!value_mismatch);
}
