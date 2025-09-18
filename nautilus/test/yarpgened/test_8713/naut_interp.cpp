/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 8713
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=8713
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
void test(val<int> var_0, val<signed char> var_2, val<signed char> var_7, val<unsigned int> var_13, val<int> var_18, val<int> zero, val<short*> var_19, val<unsigned char*> var_20, val<int*> var_21) {
    *var_19 |= ((/* implicit */val<short>) var_18);
    *var_20 = ((/* implicit */val<unsigned char>) var_2);
    *var_21 = ((((/* implicit */val<bool>) ((var_0) / (((((/* implicit */val<int>) (val<short>)32256)) << (((((/* implicit */val<int>) (val<short>)32256)) - (32244)))))))) ? (((/* implicit */val<int>) var_7)) : (min((((/* implicit */val<int>) ((val<bool>) var_13))), ((+(((/* implicit */val<int>) (val<short>)-32256)))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1562314125;
signed char var_2 = (signed char)26;
signed char var_7 = (signed char)37;
unsigned int var_13 = 11452076U;
int var_18 = -1180222100;
int zero = 0;
short var_19 = (short)-9609;
unsigned char var_20 = (unsigned char)189;
int var_21 = -735305421;
void init() {
}

void checksum() {
    value_mismatch |= var_19 != (short)-129;
    value_mismatch |= var_20 != (unsigned char)26;
    value_mismatch |= var_21 != 37;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_2, var_7, var_13, var_18, zero, &var_19, &var_20, &var_21);
  checksum();
}
