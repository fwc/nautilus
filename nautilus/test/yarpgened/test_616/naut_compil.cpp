/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 616
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=616
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
void test(val<long long int> var_0, val<unsigned short> var_1, val<signed char> var_2, val<unsigned char> var_8, val<signed char> var_13, val<int> zero, val<unsigned short*> var_14, val<unsigned int*> var_15, val<unsigned char*> var_16) {
    *var_14 = ((/* implicit */val<unsigned short>) var_0);
    *var_15 = (((~(((((/* implicit */val<bool>) var_13)) ? (3082415607U) : (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_8))))))) >> (((/* implicit */val<int>) ((((/* implicit */val<bool>) var_8)) && (((/* implicit */val<bool>) ((((/* implicit */val<bool>) (val<signed char>)93)) ? (((/* implicit */val<int>) var_2)) : (((/* implicit */val<int>) (val<signed char>)51)))))))));
    *var_16 = ((/* implicit */val<unsigned char>) min((*var_16), (((/* implicit */val<unsigned char>) max((((/* implicit */val<long long int>) var_1)), (var_0))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -1354865227185088096LL;
unsigned short var_1 = (unsigned short)6178;
signed char var_2 = (signed char)2;
unsigned char var_8 = (unsigned char)119;
signed char var_13 = (signed char)67;
int zero = 0;
unsigned short var_14 = (unsigned short)28187;
unsigned int var_15 = 1092792514U;
unsigned char var_16 = (unsigned char)20;
void init() {
}

void checksum() {
    value_mismatch |= var_14 != (unsigned short)39328;
    value_mismatch |= var_15 != 606275844U;
    value_mismatch |= var_16 != (unsigned char)20;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_2, var_8, var_13, zero, &var_14, &var_15, &var_16);
  checksum();
  assert(!value_mismatch);
}
