/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 9894
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=9894
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
void test(val<unsigned int> var_8, val<unsigned char> var_10, val<bool> var_11, val<int> zero, val<bool*> var_14, val<int*> var_15, val<bool*> var_16) {
    *var_14 = ((/* implicit */val<bool>) ((val<int>) var_11));
    *var_15 = ((((((/* implicit */val<int>) (!(((/* implicit */val<bool>) 7408217536889969879ULL))))) << (((min((3404426764U), (var_8))) - (3308178041U))))) % (((/* implicit */val<int>) var_10)));
    *var_16 -= ((/* implicit */val<bool>) ((val<unsigned char>) 2U));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_8 = 3308178058U;
unsigned char var_10 = (unsigned char)171;
bool var_11 = (bool)1;
int zero = 0;
bool var_14 = (bool)1;
int var_15 = 469403185;
bool var_16 = (bool)0;
void init() {
}

void checksum() {
    value_mismatch |= var_14 != (bool)1;
    value_mismatch |= var_15 != 0;
    value_mismatch |= var_16 != (bool)1;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_8, var_10, var_11, zero, &var_14, &var_15, &var_16);
  checksum();
  assert(!value_mismatch);
}
