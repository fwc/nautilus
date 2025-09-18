/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 7442
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=7442
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
void test(val<unsigned short> var_7, val<unsigned int> var_10, val<int> zero, val<unsigned char*> var_14, val<unsigned int*> var_15) {
    *var_14 ^= ((/* implicit */val<unsigned char>) (~(((((/* implicit */val<bool>) (val<unsigned char>)18)) ? (var_10) : (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) (val<unsigned char>)247)))))));
    *var_15 = ((/* implicit */val<unsigned int>) var_7);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_7 = (unsigned short)35317;
unsigned int var_10 = 878148036U;
int zero = 0;
unsigned char var_14 = (unsigned char)83;
unsigned int var_15 = 387793378U;
void init() {
}

void checksum() {
    value_mismatch |= var_14 != (unsigned char)104;
    value_mismatch |= var_15 != 35317U;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_7, var_10, zero, &var_14, &var_15);
  checksum();
}
