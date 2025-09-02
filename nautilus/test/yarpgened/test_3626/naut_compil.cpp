/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 3626
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=3626
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
void test(val<unsigned short> var_0, val<unsigned short> var_4, val<unsigned short> var_6, val<unsigned short> var_7, val<unsigned short> var_10, val<unsigned short> var_12, val<unsigned short> var_14, val<unsigned short> var_17, val<unsigned short> var_18, val<unsigned short> var_19, val<int> zero, val<unsigned short*> var_20, val<unsigned short*> var_21, val<unsigned short*> var_22, val<unsigned short*> var_23) {
    *var_20 += var_10;
    *var_21 |= ((/* implicit */val<unsigned short>) ((((/* implicit */val<bool>) ((((/* implicit */val<int>) var_18)) >> (((((/* implicit */val<int>) ((val<unsigned short>) (val<unsigned short>)16384))) - (16367)))))) ? (((/* implicit */val<int>) var_10)) : (((((/* implicit */val<bool>) min((var_4), (var_12)))) ? (((/* implicit */val<int>) var_17)) : (((/* implicit */val<int>) (val<unsigned short>)16366))))));
    *var_22 = var_7;
    *var_23 = ((/* implicit */val<unsigned short>) ((min((((((/* implicit */val<bool>) var_0)) ? (((/* implicit */val<int>) var_14)) : (((/* implicit */val<int>) var_17)))), (((/* implicit */val<int>) ((((/* implicit */val<int>) var_19)) > (((/* implicit */val<int>) (val<unsigned short>)51398))))))) <= (((/* implicit */val<int>) ((val<unsigned short>) var_6)))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)29484;
unsigned short var_4 = (unsigned short)32906;
unsigned short var_6 = (unsigned short)46759;
unsigned short var_7 = (unsigned short)11539;
unsigned short var_10 = (unsigned short)52056;
unsigned short var_12 = (unsigned short)49882;
unsigned short var_14 = (unsigned short)29903;
unsigned short var_17 = (unsigned short)47252;
unsigned short var_18 = (unsigned short)34435;
unsigned short var_19 = (unsigned short)35420;
int zero = 0;
unsigned short var_20 = (unsigned short)47555;
unsigned short var_21 = (unsigned short)6797;
unsigned short var_22 = (unsigned short)7817;
unsigned short var_23 = (unsigned short)8282;
void init() {
}

void checksum() {
    value_mismatch |= var_20 != (unsigned short)34075;
    value_mismatch |= var_21 != (unsigned short)47773;
    value_mismatch |= var_22 != (unsigned short)11539;
    value_mismatch |= var_23 != (unsigned short)1;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_4, var_6, var_7, var_10, var_12, var_14, var_17, var_18, var_19, zero, &var_20, &var_21, &var_22, &var_23);
  checksum();
  assert(!value_mismatch);
}
