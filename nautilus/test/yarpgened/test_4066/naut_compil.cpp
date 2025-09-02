/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 4066
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=4066
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
void test(val<short> var_1, val<int> zero, val<signed char*> var_10, val<unsigned short*> var_11) {
    *var_10 = ((/* implicit */val<signed char>) (-((-(((/* implicit */val<int>) (val<short>)-9432))))));
    *var_11 = ((/* implicit */val<unsigned short>) var_1);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)29243;
int zero = 0;
signed char var_10 = (signed char)-127;
unsigned short var_11 = (unsigned short)17622;
void init() {
}

void checksum() {
    value_mismatch |= var_10 != (signed char)40;
    value_mismatch |= var_11 != (unsigned short)29243;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, zero, &var_10, &var_11);
  checksum();
  assert(!value_mismatch);
}
