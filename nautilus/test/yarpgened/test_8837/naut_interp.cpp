/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 8837
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=8837
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
void test(val<long long int> var_1, val<unsigned long long int> var_2, val<int> var_3, val<int> var_5, val<short> var_6, val<signed char> var_8, val<unsigned short> var_10, val<int> zero, val<bool*> var_11, val<signed char*> var_12, val<unsigned short*> var_13, val<long long int*> var_14) {
    *var_11 = ((/* implicit */val<bool>) ((((((/* implicit */val<bool>) var_8)) && (((/* implicit */val<bool>) var_5)))) ? (((/* implicit */val<long long int>) ((/* implicit */val<int>) (!(((/* implicit */val<bool>) ((val<int>) var_10))))))) : (var_1)));
    *var_12 = ((/* implicit */val<signed char>) max((((/* implicit */val<unsigned long long int>) max((((((/* implicit */val<bool>) 29ULL)) ? (8796092760064LL) : (var_1))), (((/* implicit */val<long long int>) var_5))))), (((val<unsigned long long int>) ((((/* implicit */val<bool>) var_2)) ? (((/* implicit */val<long long int>) var_5)) : (9223372036854775807LL))))));
    *var_13 = ((/* implicit */val<unsigned short>) max((((/* implicit */val<unsigned long long int>) ((val<short>) var_6))), (max((((/* implicit */val<unsigned long long int>) (+(var_3)))), (((((/* implicit */val<unsigned long long int>) var_1)) - (var_2)))))));
    *var_14 = ((/* implicit */val<long long int>) (~(((/* implicit */val<int>) (val<signed char>)-16))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 5339031979330700988LL;
unsigned long long int var_2 = 344020584195984314ULL;
int var_3 = -267339526;
int var_5 = -934204422;
short var_6 = (short)-9165;
signed char var_8 = (signed char)60;
unsigned short var_10 = (unsigned short)48348;
int zero = 0;
bool var_11 = (bool)0;
signed char var_12 = (signed char)108;
unsigned short var_13 = (unsigned short)48826;
long long int var_14 = -7551236249185995929LL;
void init() {
}

void checksum() {
    value_mismatch |= var_11 != (bool)0;
    value_mismatch |= var_12 != (signed char)-6;
    value_mismatch |= var_13 != (unsigned short)56371;
    value_mismatch |= var_14 != 15LL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_2, var_3, var_5, var_6, var_8, var_10, zero, &var_11, &var_12, &var_13, &var_14);
  checksum();
  assert(!value_mismatch);
}
