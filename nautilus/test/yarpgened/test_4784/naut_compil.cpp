/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 4784
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=4784
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
void test(val<long long int> var_6, val<int> zero, val<bool*> var_13, val<short*> var_14) {
    *var_13 = ((/* implicit */val<bool>) ((((/* implicit */val<bool>) -8121493137828472590LL)) ? (((/* implicit */val<int>) (val<signed char>)56)) : (((/* implicit */val<int>) (val<signed char>)0))));
    *var_14 = ((/* implicit */val<short>) ((var_6) % (((/* implicit */val<long long int>) ((/* implicit */val<int>) min(((val<signed char>)-21), (((/* implicit */val<signed char>) (val<bool>)0))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_6 = -9123422068521990938LL;
int zero = 0;
bool var_13 = (bool)0;
short var_14 = (short)-31062;
void init() {
}

void checksum() {
    value_mismatch |= var_13 != (bool)1;
    value_mismatch |= var_14 != (short)-2;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_6, zero, &var_13, &var_14);
  checksum();
  assert(!value_mismatch);
}
