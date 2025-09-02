/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 2353
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=2353
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
void test(val<signed char> var_16, val<int> zero, val<unsigned short*> var_18, val<int*> var_19) {
    *var_18 = ((/* implicit */val<unsigned short>) 18446744073709551615ULL);
    *var_19 = (+(((/* implicit */val<int>) var_16)));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_16 = (signed char)82;
int zero = 0;
unsigned short var_18 = (unsigned short)1377;
int var_19 = 818703491;
void init() {
}

void checksum() {
    value_mismatch |= var_18 != (unsigned short)65535;
    value_mismatch |= var_19 != 82;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_16, zero, &var_18, &var_19);
  checksum();
  assert(!value_mismatch);
}
