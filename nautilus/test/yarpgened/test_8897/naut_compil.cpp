/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 8897
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=8897
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
void test(val<unsigned int> var_15, val<unsigned char> var_16, val<short> var_18, val<int> zero, val<long long int*> var_20, val<short*> var_21, val<signed char*> var_22) {
    *var_20 = ((/* implicit */val<long long int>) ((var_15) > ((-((~(var_15)))))));
    *var_21 &= ((/* implicit */val<short>) min(((-(((/* implicit */val<int>) var_16)))), ((-(((/* implicit */val<int>) (!(((/* implicit */val<bool>) var_18)))))))));
    *var_22 = ((/* implicit */val<signed char>) var_15);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_15 = 1659521796U;
unsigned char var_16 = (unsigned char)66;
short var_18 = (short)-24862;
int zero = 0;
long long int var_20 = -4205767670127444714LL;
short var_21 = (short)19080;
signed char var_22 = (signed char)116;
void init() {
}

void checksum() {
    value_mismatch |= var_20 != 0LL;
    value_mismatch |= var_21 != (short)19080;
    value_mismatch |= var_22 != (signed char)4;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_15, var_16, var_18, zero, &var_20, &var_21, &var_22);
  checksum();
  assert(!value_mismatch);
}
