/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 2535
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=2535
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
void test(val<unsigned char> var_2, val<short> var_4, val<unsigned char> var_5, val<int> var_6, val<unsigned int> var_7, val<int> zero, val<int*> var_10, val<int*> var_11) {
    *var_10 = ((((/* implicit */val<bool>) var_7)) ? (((((/* implicit */val<bool>) var_6)) ? (((/* implicit */val<int>) var_5)) : (((/* implicit */val<int>) ((((/* implicit */val<int>) var_5)) < (var_6)))))) : (((/* implicit */val<int>) var_2)));
    *var_11 = ((/* implicit */val<int>) (((-(((/* implicit */val<int>) var_4)))) >= (((/* implicit */val<int>) ((((/* implicit */val<unsigned int>) min((((/* implicit */val<int>) (val<short>)-12102)), (var_6)))) < (((((/* implicit */val<bool>) var_6)) ? (var_7) : (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_4))))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)21;
short var_4 = (short)20415;
unsigned char var_5 = (unsigned char)76;
int var_6 = 2055359838;
unsigned int var_7 = 2455747155U;
int zero = 0;
int var_10 = 1184032077;
int var_11 = -1719807726;
void init() {
}

void checksum() {
    value_mismatch |= var_10 != 76;
    value_mismatch |= var_11 != 0;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_2, var_4, var_5, var_6, var_7, zero, &var_10, &var_11);
  checksum();
  assert(!value_mismatch);
}
