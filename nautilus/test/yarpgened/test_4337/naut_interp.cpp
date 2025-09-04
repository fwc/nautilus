/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 4337
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=4337
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
void test(val<signed char> var_10, val<int> zero, val<unsigned long long int*> var_20, val<short*> var_21) {
    *var_20 *= ((/* implicit */val<unsigned long long int>) var_10);
    *var_21 *= ((/* implicit */val<short>) (!(((/* implicit */val<bool>) (+(((/* implicit */val<int>) (val<unsigned short>)10511)))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_10 = (signed char)-20;
int zero = 0;
unsigned long long int var_20 = 14052530425010025803ULL;
short var_21 = (short)-26009;
void init() {
}

void checksum() {
    value_mismatch |= var_20 != 14097296679152309796ULL;
    value_mismatch |= var_21 != (short)0;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_10, zero, &var_20, &var_21);
  checksum();
  assert(!value_mismatch);
}
