/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 8654
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=8654
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
void test(val<unsigned short> var_5, val<unsigned char> var_6, val<unsigned long long int> var_7, val<signed char> var_8, val<signed char> var_10, val<int> zero, val<long long int*> var_13, val<short*> var_14, val<unsigned long long int*> var_15, val<int*> var_16, val<unsigned long long int*> var_17) {
    *var_13 = ((/* implicit */val<long long int>) var_7);
    *var_14 ^= ((/* implicit */val<short>) var_5);
    *var_15 = ((/* implicit */val<unsigned long long int>) (((((~(((/* implicit */val<int>) max(((val<short>)-32668), (((/* implicit */val<short>) var_10))))))) + (2147483647))) << (((min(((~(var_7))), (((/* implicit */val<unsigned long long int>) (~(((/* implicit */val<int>) var_5))))))) - (7840506301109939286ULL)))));
    *var_16 = ((/* implicit */val<int>) var_8);
    *var_17 &= ((/* implicit */val<unsigned long long int>) var_6);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_5 = (unsigned short)25912;
unsigned char var_6 = (unsigned char)31;
unsigned long long int var_7 = 10606237772599612329ULL;
signed char var_8 = (signed char)90;
signed char var_10 = (signed char)69;
int zero = 0;
long long int var_13 = -5545558551981785820LL;
short var_14 = (short)-9208;
unsigned long long int var_15 = 8623049188580274948ULL;
int var_16 = -2005160943;
unsigned long long int var_17 = 2289530514412688136ULL;
void init() {
}

void checksum() {
    value_mismatch |= var_13 != -7840506301109939287LL;
    value_mismatch |= var_14 != (short)-18128;
    value_mismatch |= var_15 != 2147483577ULL;
    value_mismatch |= var_16 != 90;
    value_mismatch |= var_17 != 8ULL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_5, var_6, var_7, var_8, var_10, zero, &var_13, &var_14, &var_15, &var_16, &var_17);
  checksum();
  assert(!value_mismatch);
}
