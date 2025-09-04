/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 5634
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=5634
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
void test(val<unsigned char> var_0, val<unsigned char> var_1, val<signed char> var_4, val<unsigned int> var_6, val<short> var_10, val<signed char> var_13, val<unsigned long long int> var_16, val<unsigned short> var_18, val<int> zero, val<short*> var_19, val<signed char*> var_20) {
    *var_19 = ((/* implicit */val<short>) var_16);
    *var_20 = ((/* implicit */val<signed char>) ((((/* implicit */val<bool>) var_0)) ? (((((/* implicit */val<bool>) ((((/* implicit */val<long long int>) ((/* implicit */val<int>) var_4))) & (5566187782591890225LL)))) ? (min((((/* implicit */val<unsigned int>) var_1)), (var_6))) : (((/* implicit */val<unsigned int>) ((((/* implicit */val<bool>) var_18)) ? (((/* implicit */val<int>) var_13)) : (((/* implicit */val<int>) var_10))))))) : (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_4)))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)45;
unsigned char var_1 = (unsigned char)85;
signed char var_4 = (signed char)45;
unsigned int var_6 = 3530617223U;
short var_10 = (short)17833;
signed char var_13 = (signed char)81;
unsigned long long int var_16 = 6061501423830638134ULL;
unsigned short var_18 = (unsigned short)21812;
int zero = 0;
short var_19 = (short)312;
signed char var_20 = (signed char)-114;
void init() {
}

void checksum() {
    value_mismatch |= var_19 != (short)7734;
    value_mismatch |= var_20 != (signed char)85;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_4, var_6, var_10, var_13, var_16, var_18, zero, &var_19, &var_20);
  checksum();
  assert(!value_mismatch);
}
