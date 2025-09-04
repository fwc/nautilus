/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 8761
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=8761
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
void test(val<signed char> var_4, val<unsigned short> var_6, val<long long int> var_11, val<int> zero, val<int*> var_14, val<long long int*> var_15, val<short*> var_16, val<unsigned char*> var_17) {
    *var_14 = ((/* implicit */val<int>) var_4);
    *var_15 = ((/* implicit */val<long long int>) min((((/* implicit */val<int>) var_6)), (min((((((/* implicit */val<int>) var_4)) * (((/* implicit */val<int>) (val<bool>)0)))), (((/* implicit */val<int>) min(((val<bool>)1), ((val<bool>)1))))))));
    *var_16 = ((/* implicit */val<short>) var_11);
    *var_17 = ((/* implicit */val<unsigned char>) var_11);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_4 = (signed char)-32;
unsigned short var_6 = (unsigned short)56111;
long long int var_11 = -2613241646388029826LL;
int zero = 0;
int var_14 = -1832861389;
long long int var_15 = 456455946235661503LL;
short var_16 = (short)23729;
unsigned char var_17 = (unsigned char)35;
void init() {
}

void checksum() {
    value_mismatch |= var_14 != -32;
    value_mismatch |= var_15 != 0LL;
    value_mismatch |= var_16 != (short)-10626;
    value_mismatch |= var_17 != (unsigned char)126;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_4, var_6, var_11, zero, &var_14, &var_15, &var_16, &var_17);
  checksum();
  assert(!value_mismatch);
}
