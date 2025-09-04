/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 3115
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=3115
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
void test(val<signed char> var_0, val<unsigned int> var_1, val<short> var_5, val<unsigned int> var_7, val<bool> var_8, val<bool> var_10, val<unsigned char> var_12, val<unsigned long long int> var_13, val<int> zero, val<bool*> var_14, val<int*> var_15, val<unsigned long long int*> var_16) {
    *var_14 = ((/* implicit */val<bool>) ((val<short>) var_5));
    *var_15 = ((var_10) ? (((/* implicit */val<int>) ((val<signed char>) ((((/* implicit */val<bool>) var_0)) ? (((/* implicit */val<int>) var_12)) : (((/* implicit */val<int>) var_0)))))) : (((/* implicit */val<int>) var_12)));
    *var_16 = ((/* implicit */val<unsigned long long int>) ((((/* implicit */val<bool>) ((((/* implicit */val<bool>) ((((/* implicit */val<bool>) (val<short>)1592)) ? (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) (val<bool>)0))) : (var_13)))) ? (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) (!(((/* implicit */val<bool>) 45451542)))))) : (((((/* implicit */val<bool>) (val<signed char>)2)) ? (var_1) : (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) (val<unsigned short>)11058)))))))) ? (((/* implicit */val<int>) ((val<short>) var_10))) : (min((((/* implicit */val<int>) ((((/* implicit */val<int>) (val<unsigned short>)11058)) <= (((/* implicit */val<int>) var_8))))), (((((/* implicit */val<bool>) var_7)) ? (-1217391691) : (((/* implicit */val<int>) var_5))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-13;
unsigned int var_1 = 2018839022U;
short var_5 = (short)19763;
unsigned int var_7 = 36544320U;
bool var_8 = (bool)0;
bool var_10 = (bool)0;
unsigned char var_12 = (unsigned char)174;
unsigned long long int var_13 = 17704697348722640966ULL;
int zero = 0;
bool var_14 = (bool)0;
int var_15 = -2064185348;
unsigned long long int var_16 = 5235608383910672414ULL;
void init() {
}

void checksum() {
    value_mismatch |= var_14 != (bool)1;
    value_mismatch |= var_15 != 174;
    value_mismatch |= var_16 != 0ULL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_5, var_7, var_8, var_10, var_12, var_13, zero, &var_14, &var_15, &var_16);
  checksum();
  assert(!value_mismatch);
}
