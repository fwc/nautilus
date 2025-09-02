/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 1191
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=1191
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
void test(val<unsigned short> var_1, val<unsigned long long int> var_7, val<int> zero, val<signed char*> var_12, val<unsigned int*> var_13, val<unsigned int*> var_14) {
    *var_12 = ((/* implicit */val<signed char>) ((((/* implicit */val<bool>) var_1)) ? (min((0ULL), (((/* implicit */val<unsigned long long int>) (val<signed char>)13)))) : (var_7)));
    *var_13 &= ((/* implicit */val<unsigned int>) var_7);
    *var_14 = ((/* implicit */val<unsigned int>) (val<signed char>)18);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)16517;
unsigned long long int var_7 = 15455986146695088520ULL;
int zero = 0;
signed char var_12 = (signed char)62;
unsigned int var_13 = 1858862448U;
unsigned int var_14 = 2292983868U;
void init() {
}

void checksum() {
    value_mismatch |= var_12 != (signed char)0;
    value_mismatch |= var_13 != 1175095552U;
    value_mismatch |= var_14 != 18U;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_7, zero, &var_12, &var_13, &var_14);
  checksum();
  assert(!value_mismatch);
}
