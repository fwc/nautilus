/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 8260
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=8260
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
void test(val<short> var_0, val<unsigned long long int> var_11, val<int> zero, val<unsigned short*> var_19, val<unsigned int*> var_20) {
    *var_19 = ((/* implicit */val<unsigned short>) var_0);
    *var_20 = ((/* implicit */val<unsigned int>) var_11);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)11719;
unsigned long long int var_11 = 9332811227251689554ULL;
int zero = 0;
unsigned short var_19 = (unsigned short)65088;
unsigned int var_20 = 2148878415U;
void init() {
}

void checksum() {
    value_mismatch |= var_19 != (unsigned short)11719;
    value_mismatch |= var_20 != 605898834U;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_11, zero, &var_19, &var_20);
  checksum();
  assert(!value_mismatch);
}
