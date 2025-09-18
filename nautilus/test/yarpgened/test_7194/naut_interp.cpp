/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 7194
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=7194
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
void test(val<long long int> var_1, val<bool> var_3, val<bool> var_4, val<unsigned int> var_5, val<short> var_7, val<unsigned int> var_14, val<int> zero, val<unsigned long long int*> var_15, val<signed char*> var_16) {
    *var_15 = ((/* implicit */val<unsigned long long int>) var_4);
    *var_16 = ((/* implicit */val<signed char>) ((((/* implicit */val<bool>) var_5)) ? (((((/* implicit */val<bool>) (+(var_1)))) ? (((((/* implicit */val<bool>) 18446744073709551615ULL)) ? (var_14) : (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_7))))) : (((/* implicit */val<unsigned int>) ((((/* implicit */val<int>) (val<signed char>)-16)) % (((/* implicit */val<int>) (val<signed char>)-105))))))) : (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_3)))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -3126604620862638003LL;
bool var_3 = (bool)0;
bool var_4 = (bool)0;
unsigned int var_5 = 1172447300U;
short var_7 = (short)-9561;
unsigned int var_14 = 1910595438U;
int zero = 0;
unsigned long long int var_15 = 3476137410034883310ULL;
signed char var_16 = (signed char)15;
void init() {
}

void checksum() {
    value_mismatch |= var_15 != 0ULL;
    value_mismatch |= var_16 != (signed char)110;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_3, var_4, var_5, var_7, var_14, zero, &var_15, &var_16);
  checksum();
}
