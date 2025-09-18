/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 8069
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=8069
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
void test(val<bool> var_4, val<unsigned int> var_7, val<short> var_12, val<int> zero, val<long long int*> var_13, val<unsigned char*> var_14, val<signed char*> var_15, val<long long int*> var_16) {
    *var_13 = ((/* implicit */val<long long int>) var_12);
    *var_14 = ((/* implicit */val<unsigned char>) var_4);
    *var_15 = ((/* implicit */val<signed char>) var_4);
    *var_16 = ((/* implicit */val<long long int>) ((var_7) * (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) (!(((val<bool>) var_7))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

bool var_4 = (bool)0;
unsigned int var_7 = 3150149114U;
short var_12 = (short)-15007;
int zero = 0;
long long int var_13 = 7523402770546681240LL;
unsigned char var_14 = (unsigned char)230;
signed char var_15 = (signed char)93;
long long int var_16 = -5244431116244706003LL;
void init() {
}

void checksum() {
    value_mismatch |= var_13 != -15007LL;
    value_mismatch |= var_14 != (unsigned char)0;
    value_mismatch |= var_15 != (signed char)0;
    value_mismatch |= var_16 != 0LL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_4, var_7, var_12, zero, &var_13, &var_14, &var_15, &var_16);
  checksum();
}
