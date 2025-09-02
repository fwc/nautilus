/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 8604
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=8604
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
void test(val<unsigned char> var_4, val<short> var_16, val<int> zero, val<bool*> var_18, val<int*> var_19) {
    *var_18 = ((/* implicit */val<bool>) var_4);
    *var_19 = (~(((((((/* implicit */val<int>) var_16)) + (2147483647))) >> (((/* implicit */val<int>) ((val<unsigned char>) (val<bool>)1))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_4 = (unsigned char)199;
short var_16 = (short)-9280;
int zero = 0;
bool var_18 = (bool)0;
int var_19 = 1124392626;
void init() {
}

void checksum() {
    value_mismatch |= var_18 != (bool)1;
    value_mismatch |= var_19 != -1073737184;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_4, var_16, zero, &var_18, &var_19);
  checksum();
  assert(!value_mismatch);
}
