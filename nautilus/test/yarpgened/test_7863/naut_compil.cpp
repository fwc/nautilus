/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 7863
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=7863
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
void test(val<bool> var_7, val<unsigned short> var_8, val<int> zero, val<signed char*> var_11, val<long long int*> var_12) {
    *var_11 = ((/* implicit */val<signed char>) (+(((/* implicit */val<int>) var_8))));
    *var_12 = ((/* implicit */val<long long int>) (~(((val<unsigned int>) ((val<unsigned long long int>) var_7)))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

bool var_7 = (bool)1;
unsigned short var_8 = (unsigned short)56642;
int zero = 0;
signed char var_11 = (signed char)-63;
long long int var_12 = -213417984129153418LL;
void init() {
}

void checksum() {
    value_mismatch |= var_11 != (signed char)66;
    value_mismatch |= var_12 != 4294967294LL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_7, var_8, zero, &var_11, &var_12);
  checksum();
  assert(!value_mismatch);
}
