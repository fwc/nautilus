/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 2619
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=2619
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
void test(val<signed char> var_0, val<unsigned int> var_6, val<int> zero, val<signed char*> var_12, val<long long int*> var_13, val<long long int*> var_14) {
    *var_12 = ((/* implicit */val<signed char>) ((((/* implicit */val<int>) var_0)) / (((/* implicit */val<int>) (val<unsigned short>)58902))));
    *var_13 = ((/* implicit */val<long long int>) var_6);
    *var_14 = ((/* implicit */val<long long int>) (val<unsigned short>)6634);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-88;
unsigned int var_6 = 615073820U;
int zero = 0;
signed char var_12 = (signed char)-41;
long long int var_13 = -8513236754652967766LL;
long long int var_14 = -8623633299777775735LL;
void init() {
}

void checksum() {
    value_mismatch |= var_12 != (signed char)0;
    value_mismatch |= var_13 != 615073820LL;
    value_mismatch |= var_14 != 6634LL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_6, zero, &var_12, &var_13, &var_14);
  checksum();
  assert(!value_mismatch);
}
