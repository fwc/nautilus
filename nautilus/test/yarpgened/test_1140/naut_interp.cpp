/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 1140
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=1140
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
void test(val<short> var_12, val<int> zero, val<unsigned short*> var_20, val<unsigned char*> var_21, val<unsigned short*> var_22) {
    *var_20 = ((/* implicit */val<unsigned short>) var_12);
    *var_21 = ((/* implicit */val<unsigned char>) ((4267773320712912416LL) << (((/* implicit */val<int>) (val<short>)1))));
    *var_22 = ((/* implicit */val<unsigned short>) var_12);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_12 = (short)32292;
int zero = 0;
unsigned short var_20 = (unsigned short)32983;
unsigned char var_21 = (unsigned char)216;
unsigned short var_22 = (unsigned short)47506;
void init() {
}

void checksum() {
    value_mismatch |= var_20 != (unsigned short)32292;
    value_mismatch |= var_21 != (unsigned char)64;
    value_mismatch |= var_22 != (unsigned short)32292;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_12, zero, &var_20, &var_21, &var_22);
  checksum();
  assert(!value_mismatch);
}
