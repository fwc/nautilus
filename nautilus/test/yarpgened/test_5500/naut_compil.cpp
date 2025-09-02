/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 5500
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=5500
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
void test(val<signed char> var_5, val<short> var_14, val<int> zero, val<unsigned long long int*> var_16, val<unsigned char*> var_17, val<unsigned long long int*> var_18, val<short*> var_19) {
    *var_16 = ((/* implicit */val<unsigned long long int>) 0U);
    *var_17 = ((/* implicit */val<unsigned char>) (!(((/* implicit */val<bool>) var_5))));
    *var_18 = ((/* implicit */val<unsigned long long int>) var_14);
    *var_19 = ((/* implicit */val<short>) 1527017164U);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_5 = (signed char)-115;
short var_14 = (short)-28037;
int zero = 0;
unsigned long long int var_16 = 10170572512603646662ULL;
unsigned char var_17 = (unsigned char)198;
unsigned long long int var_18 = 12513251997316241044ULL;
short var_19 = (short)-13882;
void init() {
}

void checksum() {
    value_mismatch |= var_16 != 0ULL;
    value_mismatch |= var_17 != (unsigned char)0;
    value_mismatch |= var_18 != 18446744073709523579ULL;
    value_mismatch |= var_19 != (short)28364;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_5, var_14, zero, &var_16, &var_17, &var_18, &var_19);
  checksum();
  assert(!value_mismatch);
}
