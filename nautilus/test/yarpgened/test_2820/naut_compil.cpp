/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 2820
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=2820
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
void test(val<unsigned char> var_8, val<unsigned int> var_15, val<int> zero, val<unsigned char*> var_16, val<short*> var_17) {
    *var_16 = ((/* implicit */val<unsigned char>) 3454850377951989748LL);
    *var_17 &= ((/* implicit */val<short>) (!(((/* implicit */val<bool>) ((((/* implicit */val<unsigned int>) ((/* implicit */val<int>) ((val<unsigned short>) var_8)))) | (var_15))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_8 = (unsigned char)54;
unsigned int var_15 = 2416018769U;
int zero = 0;
unsigned char var_16 = (unsigned char)204;
short var_17 = (short)-23372;
void init() {
}

void checksum() {
    value_mismatch |= var_16 != (unsigned char)244;
    value_mismatch |= var_17 != (short)0;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_8, var_15, zero, &var_16, &var_17);
  checksum();
  assert(!value_mismatch);
}
