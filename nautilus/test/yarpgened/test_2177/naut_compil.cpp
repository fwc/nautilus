/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 2177
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=2177
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
void test(val<unsigned char> var_2, val<bool> var_5, val<int> zero, val<bool*> var_13, val<bool*> var_14) {
    *var_13 ^= ((/* implicit */val<bool>) (~(((/* implicit */val<int>) (!(var_5))))));
    *var_14 = ((((/* implicit */val<bool>) (+(((/* implicit */val<int>) var_2))))) && (((/* implicit */val<bool>) ((((/* implicit */val<bool>) 18446744073709551615ULL)) ? (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) (val<signed char>)127))) : (1374883219U)))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)101;
bool var_5 = (bool)0;
int zero = 0;
bool var_13 = (bool)0;
bool var_14 = (bool)1;
void init() {
}

void checksum() {
    value_mismatch |= var_13 != (bool)1;
    value_mismatch |= var_14 != (bool)1;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_2, var_5, zero, &var_13, &var_14);
  checksum();
  assert(!value_mismatch);
}
