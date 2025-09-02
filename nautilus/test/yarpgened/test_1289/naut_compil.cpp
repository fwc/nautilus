/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 1289
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=1289
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
void test(val<short> var_0, val<unsigned int> var_1, val<signed char> var_2, val<bool> var_6, val<long long int> var_7, val<unsigned int> var_12, val<bool> var_15, val<int> zero, val<signed char*> var_19, val<unsigned int*> var_20, val<bool*> var_21) {
    *var_19 = ((/* implicit */val<signed char>) (!(((/* implicit */val<bool>) (+(((var_15) ? (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_2))) : (var_1))))))));
    *var_20 = ((/* implicit */val<unsigned int>) var_15);
    *var_21 = ((/* implicit */val<bool>) (-(((((/* implicit */val<bool>) ((((/* implicit */val<bool>) var_12)) ? (((/* implicit */val<int>) var_0)) : (((/* implicit */val<int>) var_6))))) ? (var_1) : (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) (!(((/* implicit */val<bool>) var_7))))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)29055;
unsigned int var_1 = 2844414377U;
signed char var_2 = (signed char)-71;
bool var_6 = (bool)0;
long long int var_7 = -9008331900697247155LL;
unsigned int var_12 = 3591984491U;
bool var_15 = (bool)0;
int zero = 0;
signed char var_19 = (signed char)118;
unsigned int var_20 = 1166583691U;
bool var_21 = (bool)1;
void init() {
}

void checksum() {
    value_mismatch |= var_19 != (signed char)0;
    value_mismatch |= var_20 != 0U;
    value_mismatch |= var_21 != (bool)1;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_2, var_6, var_7, var_12, var_15, zero, &var_19, &var_20, &var_21);
  checksum();
  assert(!value_mismatch);
}
