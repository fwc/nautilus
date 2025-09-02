/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 6211
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=6211
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
void test(val<unsigned char> var_0, val<unsigned char> var_3, val<unsigned long long int> var_6, val<unsigned long long int> var_13, val<int> var_15, val<unsigned char> var_16, val<int> zero, val<short*> var_17, val<unsigned char*> var_18) {
    *var_17 = ((/* implicit */val<short>) ((((/* implicit */val<bool>) (-(max((var_6), (((/* implicit */val<unsigned long long int>) var_3))))))) ? (((((/* implicit */val<bool>) var_15)) ? (((/* implicit */val<unsigned long long int>) ((val<int>) -1LL))) : (((((/* implicit */val<bool>) var_0)) ? (var_13) : (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_16))))))) : (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) ((val<unsigned short>) ((((/* implicit */val<bool>) var_3)) ? (var_6) : (((/* implicit */val<unsigned long long int>) -18LL)))))))));
    *var_18 = ((/* implicit */val<unsigned char>) -1LL);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)76;
unsigned char var_3 = (unsigned char)134;
unsigned long long int var_6 = 6427146205487979883ULL;
unsigned long long int var_13 = 4548550353526619396ULL;
int var_15 = -104381598;
unsigned char var_16 = (unsigned char)30;
int zero = 0;
short var_17 = (short)27561;
unsigned char var_18 = (unsigned char)187;
void init() {
}

void checksum() {
    value_mismatch |= var_17 != (short)-1;
    value_mismatch |= var_18 != (unsigned char)255;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_3, var_6, var_13, var_15, var_16, zero, &var_17, &var_18);
  checksum();
  assert(!value_mismatch);
}
