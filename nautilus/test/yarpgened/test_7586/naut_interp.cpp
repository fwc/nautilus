/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 7586
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=7586
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
void test(val<int> var_0, val<signed char> var_1, val<unsigned char> var_5, val<bool> var_6, val<signed char> var_9, val<bool> var_10, val<short> var_11, val<signed char> var_12, val<signed char> var_13, val<unsigned short> var_14, val<int> zero, val<unsigned char*> var_15, val<bool*> var_16, val<unsigned char*> var_17) {
    *var_15 = ((/* implicit */val<unsigned char>) ((((/* implicit */val<bool>) min((((/* implicit */val<int>) (val<signed char>)15)), (((((/* implicit */val<bool>) (val<unsigned char>)255)) ? (var_0) : (((/* implicit */val<int>) var_14))))))) ? (min((((/* implicit */val<long long int>) max((((/* implicit */val<int>) var_9)), (var_0)))), (((((/* implicit */val<bool>) (val<signed char>)5)) ? (-1LL) : (((/* implicit */val<long long int>) ((/* implicit */val<int>) (val<unsigned char>)255))))))) : (((/* implicit */val<long long int>) ((((/* implicit */val<bool>) ((var_10) ? (((/* implicit */val<int>) var_11)) : (((/* implicit */val<int>) (val<signed char>)15))))) ? (((/* implicit */val<int>) (!(((/* implicit */val<bool>) var_12))))) : (((var_6) ? (((/* implicit */val<int>) (val<short>)-1)) : (((/* implicit */val<int>) var_1)))))))));
    *var_16 *= ((/* implicit */val<bool>) var_13);
    *var_17 = var_5;
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 311851756;
signed char var_1 = (signed char)-14;
unsigned char var_5 = (unsigned char)80;
bool var_6 = (bool)0;
signed char var_9 = (signed char)125;
bool var_10 = (bool)0;
short var_11 = (short)11037;
signed char var_12 = (signed char)-13;
signed char var_13 = (signed char)0;
unsigned short var_14 = (unsigned short)11144;
int zero = 0;
unsigned char var_15 = (unsigned char)115;
bool var_16 = (bool)1;
unsigned char var_17 = (unsigned char)48;
void init() {
}

void checksum() {
    value_mismatch |= var_15 != (unsigned char)255;
    value_mismatch |= var_16 != (bool)0;
    value_mismatch |= var_17 != (unsigned char)80;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_5, var_6, var_9, var_10, var_11, var_12, var_13, var_14, zero, &var_15, &var_16, &var_17);
  checksum();
  assert(!value_mismatch);
}
