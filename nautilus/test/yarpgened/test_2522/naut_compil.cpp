/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 2522
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=2522
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
void test(val<signed char> var_1, val<long long int> var_6, val<signed char> var_7, val<unsigned long long int> var_11, val<unsigned short> var_18, val<int> zero, val<unsigned short*> var_19, val<unsigned char*> var_20, val<unsigned int*> var_21) {
    *var_19 = ((/* implicit */val<unsigned short>) ((((/* implicit */val<bool>) (~(var_6)))) ? (((/* implicit */val<int>) (!(((/* implicit */val<bool>) 1073741312U))))) : (((/* implicit */val<int>) ((((/* implicit */val<unsigned int>) ((/* implicit */val<int>) (val<signed char>)-61))) != (3221225984U))))));
    *var_20 = ((/* implicit */val<unsigned char>) var_1);
    *var_21 = ((/* implicit */val<unsigned int>) ((((/* implicit */val<bool>) var_11)) ? (((((/* implicit */val<bool>) max((((/* implicit */val<long long int>) var_18)), (807208909863506884LL)))) ? (((((/* implicit */val<bool>) 5231266921091920323LL)) ? ((-9223372036854775807LL - 1LL)) : (((/* implicit */val<long long int>) 3221225984U)))) : (((/* implicit */val<long long int>) max((2620416137U), (((/* implicit */val<unsigned int>) var_7))))))) : (((/* implicit */val<long long int>) (-(1624817357U))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-30;
long long int var_6 = -3544078236263637013LL;
signed char var_7 = (signed char)-73;
unsigned long long int var_11 = 3647660033691867322ULL;
unsigned short var_18 = (unsigned short)4150;
int zero = 0;
unsigned short var_19 = (unsigned short)49125;
unsigned char var_20 = (unsigned char)135;
unsigned int var_21 = 2134949782U;
void init() {
}

void checksum() {
    value_mismatch |= var_19 != (unsigned short)0;
    value_mismatch |= var_20 != (unsigned char)226;
    value_mismatch |= var_21 != 0U;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_6, var_7, var_11, var_18, zero, &var_19, &var_20, &var_21);
  checksum();
  assert(!value_mismatch);
}
