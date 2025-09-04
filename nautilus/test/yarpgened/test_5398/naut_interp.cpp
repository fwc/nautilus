/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 5398
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=5398
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
void test(val<unsigned char> var_2, val<signed char> var_11, val<signed char> var_15, val<unsigned char> var_16, val<int> zero, val<unsigned long long int*> var_17, val<int*> var_18, val<unsigned char*> var_19) {
    *var_17 = ((/* implicit */val<unsigned long long int>) var_11);
    *var_18 *= ((/* implicit */val<int>) (val<short>)0);
    *var_19 = ((/* implicit */val<unsigned char>) ((((/* implicit */val<bool>) min((((/* implicit */val<int>) var_16)), (((((/* implicit */val<bool>) (val<unsigned char>)213)) ? (((/* implicit */val<int>) var_15)) : (((/* implicit */val<int>) (val<unsigned char>)42))))))) ? (((/* implicit */val<long long int>) ((/* implicit */val<int>) var_2))) : (56431956756742779LL)));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)198;
signed char var_11 = (signed char)-106;
signed char var_15 = (signed char)-48;
unsigned char var_16 = (unsigned char)166;
int zero = 0;
unsigned long long int var_17 = 15857864844671834065ULL;
int var_18 = 1548308629;
unsigned char var_19 = (unsigned char)4;
void init() {
}

void checksum() {
    value_mismatch |= var_17 != 18446744073709551510ULL;
    value_mismatch |= var_18 != 0;
    value_mismatch |= var_19 != (unsigned char)198;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_2, var_11, var_15, var_16, zero, &var_17, &var_18, &var_19);
  checksum();
  assert(!value_mismatch);
}
