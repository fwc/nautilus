/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 6094
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=6094
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
void test(val<signed char> var_2, val<long long int> var_3, val<unsigned int> var_4, val<bool> var_6, val<signed char> var_8, val<int> var_10, val<int> zero, val<unsigned short*> var_11, val<unsigned char*> var_12, val<short*> var_13, val<unsigned short*> var_14) {
    *var_11 = ((/* implicit */val<unsigned short>) ((((/* implicit */val<bool>) ((((/* implicit */val<bool>) ((((/* implicit */val<bool>) var_4)) ? (var_3) : (((/* implicit */val<long long int>) ((/* implicit */val<int>) var_6)))))) ? ((~(((/* implicit */val<int>) var_2)))) : (max((((/* implicit */val<int>) var_8)), (var_10)))))) || (((/* implicit */val<bool>) var_10))));
    *var_12 &= ((/* implicit */val<unsigned char>) var_3);
    *var_13 = ((/* implicit */val<short>) var_6);
    *var_14 = ((/* implicit */val<unsigned short>) 1543348124U);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)42;
long long int var_3 = -3652851897192712559LL;
unsigned int var_4 = 2314148926U;
bool var_6 = (bool)1;
signed char var_8 = (signed char)14;
int var_10 = 1294334524;
int zero = 0;
unsigned short var_11 = (unsigned short)5043;
unsigned char var_12 = (unsigned char)145;
short var_13 = (short)30714;
unsigned short var_14 = (unsigned short)19239;
void init() {
}

void checksum() {
    value_mismatch |= var_11 != (unsigned short)1;
    value_mismatch |= var_12 != (unsigned char)145;
    value_mismatch |= var_13 != (short)1;
    value_mismatch |= var_14 != (unsigned short)40860;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_2, var_3, var_4, var_6, var_8, var_10, zero, &var_11, &var_12, &var_13, &var_14);
  checksum();
}
