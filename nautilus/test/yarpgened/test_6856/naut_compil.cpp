/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 6856
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=6856
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
void test(val<short> var_0, val<unsigned int> var_9, val<unsigned char> var_16, val<short> var_17, val<int> zero, val<unsigned char*> var_19, val<signed char*> var_20, val<short*> var_21) {
    *var_19 = ((/* implicit */val<unsigned char>) (~((-(((/* implicit */val<int>) var_16))))));
    *var_20 = ((/* implicit */val<signed char>) (~(((/* implicit */val<int>) var_0))));
    *var_21 = ((/* implicit */val<short>) (!(((/* implicit */val<bool>) ((((/* implicit */val<int>) var_17)) + (((/* implicit */val<int>) ((((/* implicit */val<bool>) (val<signed char>)127)) && (((/* implicit */val<bool>) var_9))))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)26417;
unsigned int var_9 = 526891472U;
unsigned char var_16 = (unsigned char)119;
short var_17 = (short)-6725;
int zero = 0;
unsigned char var_19 = (unsigned char)100;
signed char var_20 = (signed char)-118;
short var_21 = (short)-22990;
void init() {
}

void checksum() {
    value_mismatch |= var_19 != (unsigned char)118;
    value_mismatch |= var_20 != (signed char)-50;
    value_mismatch |= var_21 != (short)0;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_9, var_16, var_17, zero, &var_19, &var_20, &var_21);
  checksum();
  assert(!value_mismatch);
}
