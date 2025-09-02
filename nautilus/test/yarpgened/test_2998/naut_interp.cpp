/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 2998
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=2998
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
void test(val<unsigned char> var_1, val<unsigned short> var_3, val<unsigned char> var_7, val<signed char> var_11, val<int> zero, val<unsigned long long int*> var_12, val<long long int*> var_13, val<short*> var_14) {
    *var_12 = ((/* implicit */val<unsigned long long int>) (val<short>)0);
    *var_13 = ((/* implicit */val<long long int>) (((~(((/* implicit */val<int>) var_11)))) != (max((((((/* implicit */val<bool>) var_3)) ? (((/* implicit */val<int>) var_1)) : (((/* implicit */val<int>) var_7)))), (((/* implicit */val<int>) (val<short>)-28))))));
    *var_14 *= (val<short>)0;
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)217;
unsigned short var_3 = (unsigned short)60860;
unsigned char var_7 = (unsigned char)178;
signed char var_11 = (signed char)-52;
int zero = 0;
unsigned long long int var_12 = 4553136508776612827ULL;
long long int var_13 = -621947280286390032LL;
short var_14 = (short)24582;
void init() {
}

void checksum() {
    value_mismatch |= var_12 != 0ULL;
    value_mismatch |= var_13 != 1LL;
    value_mismatch |= var_14 != (short)0;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_3, var_7, var_11, zero, &var_12, &var_13, &var_14);
  checksum();
  assert(!value_mismatch);
}
