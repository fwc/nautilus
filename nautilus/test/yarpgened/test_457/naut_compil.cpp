/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 457
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=457
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
void test(val<short> var_0, val<unsigned char> var_2, val<signed char> var_3, val<long long int> var_4, val<unsigned int> var_7, val<int> var_9, val<int> zero, val<bool*> var_10, val<long long int*> var_11, val<unsigned long long int*> var_12, val<signed char*> var_13, val<long long int*> var_14) {
    *var_10 = ((/* implicit */val<bool>) min((*var_10), (((/* implicit */val<bool>) (val<signed char>)-82))));
    *var_11 |= ((/* implicit */val<long long int>) ((((/* implicit */val<bool>) ((((/* implicit */val<bool>) var_7)) ? (((/* implicit */val<int>) ((((/* implicit */val<bool>) var_3)) || (((/* implicit */val<bool>) (val<signed char>)66))))) : (var_9)))) || (((/* implicit */val<bool>) var_4))));
    *var_12 |= ((/* implicit */val<unsigned long long int>) var_2);
    *var_13 = ((/* implicit */val<signed char>) (~(((/* implicit */val<int>) ((((/* implicit */val<bool>) ((((/* implicit */val<bool>) var_3)) ? (var_9) : (((/* implicit */val<int>) var_2))))) || (((/* implicit */val<bool>) ((val<signed char>) var_0))))))));
    *var_14 = ((/* implicit */val<long long int>) ((((/* implicit */val<bool>) var_0)) || (((/* implicit */val<bool>) var_0))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-2989;
unsigned char var_2 = (unsigned char)223;
signed char var_3 = (signed char)-113;
long long int var_4 = 8838729417276413798LL;
unsigned int var_7 = 868641696U;
int var_9 = -2054976712;
int zero = 0;
bool var_10 = (bool)0;
long long int var_11 = 6684299636486180038LL;
unsigned long long int var_12 = 1478130210957053684ULL;
signed char var_13 = (signed char)0;
long long int var_14 = 7259370272469167624LL;
void init() {
}

void checksum() {
    value_mismatch |= var_10 != (bool)0;
    value_mismatch |= var_11 != 6684299636486180039LL;
    value_mismatch |= var_12 != 1478130210957053695ULL;
    value_mismatch |= var_13 != (signed char)-2;
    value_mismatch |= var_14 != 1LL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_2, var_3, var_4, var_7, var_9, zero, &var_10, &var_11, &var_12, &var_13, &var_14);
  checksum();
  assert(!value_mismatch);
}
