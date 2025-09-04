/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 3351
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=3351
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
void test(val<int> var_1, val<bool> var_3, val<short> var_4, val<signed char> var_5, val<unsigned long long int> var_6, val<int> var_7, val<short> var_8, val<signed char> var_9, val<int> zero, val<int*> var_13, val<int*> var_14, val<bool*> var_15, val<int*> var_16) {
    *var_13 -= ((((/* implicit */val<bool>) ((val<int>) var_4))) ? (((/* implicit */val<int>) var_9)) : (var_1));
    *var_14 -= ((/* implicit */val<int>) min((((/* implicit */val<long long int>) -164870326)), ((-(-9223372036854775784LL)))));
    *var_15 = ((/* implicit */val<bool>) min((((((/* implicit */val<bool>) var_8)) ? (((((/* implicit */val<bool>) var_8)) ? (((/* implicit */val<int>) var_5)) : (((/* implicit */val<int>) var_3)))) : (((/* implicit */val<int>) ((val<signed char>) 164870310))))), (var_7)));
    *var_16 = ((/* implicit */val<int>) var_6);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1452744851;
bool var_3 = (bool)0;
short var_4 = (short)7982;
signed char var_5 = (signed char)24;
unsigned long long int var_6 = 12258069869003997479ULL;
int var_7 = -1939217302;
short var_8 = (short)3667;
signed char var_9 = (signed char)-40;
int zero = 0;
int var_13 = 1647198474;
int var_14 = -1182819969;
bool var_15 = (bool)0;
int var_16 = 105545145;
void init() {
}

void checksum() {
    value_mismatch |= var_13 != 1647198514;
    value_mismatch |= var_14 != -1017949643;
    value_mismatch |= var_15 != (bool)1;
    value_mismatch |= var_16 != -1914240729;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_3, var_4, var_5, var_6, var_7, var_8, var_9, zero, &var_13, &var_14, &var_15, &var_16);
  checksum();
  assert(!value_mismatch);
}
