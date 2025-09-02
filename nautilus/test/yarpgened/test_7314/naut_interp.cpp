/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 7314
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=7314
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
void test(val<long long int> var_0, val<short> var_1, val<long long int> var_8, val<short> var_12, val<short> var_15, val<unsigned char> var_16, val<int> zero, val<unsigned char*> var_17, val<unsigned char*> var_18, val<unsigned char*> var_19, val<long long int*> var_20, val<unsigned char*> var_21) {
    *var_17 = ((/* implicit */val<unsigned char>) var_0);
    *var_18 &= ((/* implicit */val<unsigned char>) ((((/* implicit */val<bool>) var_16)) ? (((((/* implicit */val<bool>) var_8)) ? (((((/* implicit */val<int>) var_15)) | (((/* implicit */val<int>) var_12)))) : (((/* implicit */val<int>) var_1)))) : (((/* implicit */val<int>) ((((/* implicit */val<bool>) (val<short>)-1)) && (((/* implicit */val<bool>) (val<short>)13)))))));
    *var_19 &= ((/* implicit */val<unsigned char>) var_12);
    *var_20 = ((/* implicit */val<long long int>) var_15);
    *var_21 = ((/* implicit */val<unsigned char>) var_8);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -1095656475444853668LL;
short var_1 = (short)-18892;
long long int var_8 = -5918861496965819307LL;
short var_12 = (short)13282;
short var_15 = (short)4432;
unsigned char var_16 = (unsigned char)20;
int zero = 0;
unsigned char var_17 = (unsigned char)201;
unsigned char var_18 = (unsigned char)88;
unsigned char var_19 = (unsigned char)202;
long long int var_20 = -4133819935810737903LL;
unsigned char var_21 = (unsigned char)80;
void init() {
}

void checksum() {
    value_mismatch |= var_17 != (unsigned char)92;
    value_mismatch |= var_18 != (unsigned char)80;
    value_mismatch |= var_19 != (unsigned char)194;
    value_mismatch |= var_20 != 4432LL;
    value_mismatch |= var_21 != (unsigned char)85;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_8, var_12, var_15, var_16, zero, &var_17, &var_18, &var_19, &var_20, &var_21);
  checksum();
  assert(!value_mismatch);
}
