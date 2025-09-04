/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 9409
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=9409
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
void test(val<unsigned char> var_0, val<unsigned char> var_2, val<long long int> var_5, val<signed char> var_7, val<unsigned long long int> var_8, val<unsigned char> var_9, val<unsigned short> var_11, val<int> zero, val<int*> var_12, val<unsigned short*> var_13, val<int*> var_14) {
    *var_12 &= ((/* implicit */val<int>) max((((((/* implicit */val<bool>) ((1775892060) - (((/* implicit */val<int>) var_9))))) ? (var_8) : (((/* implicit */val<unsigned long long int>) (+(((/* implicit */val<int>) var_2))))))), (((/* implicit */val<unsigned long long int>) 560942976U))));
    *var_13 = ((/* implicit */val<unsigned short>) min((((/* implicit */val<int>) (!(((/* implicit */val<bool>) 1775892061))))), (((((/* implicit */val<bool>) ((((/* implicit */val<long long int>) ((/* implicit */val<int>) var_7))) / (var_5)))) ? (((((/* implicit */val<bool>) -1775892082)) ? (((/* implicit */val<int>) var_11)) : (((/* implicit */val<int>) var_2)))) : (((/* implicit */val<int>) var_9))))));
    *var_14 = max((((((/* implicit */val<int>) var_0)) / (((/* implicit */val<int>) var_11)))), ((~((-(1775892060))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)145;
unsigned char var_2 = (unsigned char)205;
long long int var_5 = 2138028863370936333LL;
signed char var_7 = (signed char)83;
unsigned long long int var_8 = 5260665642721546109ULL;
unsigned char var_9 = (unsigned char)17;
unsigned short var_11 = (unsigned short)1470;
int zero = 0;
int var_12 = -2068400575;
unsigned short var_13 = (unsigned short)63970;
int var_14 = 794167469;
void init() {
}

void checksum() {
    value_mismatch |= var_12 != -2071722431;
    value_mismatch |= var_13 != (unsigned short)0;
    value_mismatch |= var_14 != 1775892059;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_2, var_5, var_7, var_8, var_9, var_11, zero, &var_12, &var_13, &var_14);
  checksum();
  assert(!value_mismatch);
}
