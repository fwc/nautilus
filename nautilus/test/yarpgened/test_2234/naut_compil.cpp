/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 2234
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=2234
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
void test(val<bool> var_0, val<short> var_2, val<bool> var_4, val<unsigned char> var_6, val<short> var_7, val<bool> var_10, val<short> var_15, val<int> var_16, val<unsigned char> var_18, val<int> zero, val<long long int*> var_20, val<signed char*> var_21, val<short*> var_22) {
    *var_20 = ((/* implicit */val<long long int>) min((var_4), (var_10)));
    *var_21 = ((/* implicit */val<signed char>) ((((((/* implicit */val<bool>) (val<signed char>)-123)) ? ((-(((/* implicit */val<int>) var_0)))) : (((/* implicit */val<int>) ((((/* implicit */val<int>) var_6)) != (var_16)))))) + (((((16777215) >= (((/* implicit */val<int>) var_7)))) ? (((/* implicit */val<int>) min((var_2), (var_15)))) : ((~(((/* implicit */val<int>) (val<unsigned char>)0))))))));
    *var_22 = ((/* implicit */val<short>) ((((/* implicit */val<bool>) var_6)) ? (((val<long long int>) ((((/* implicit */val<bool>) var_7)) ? (((/* implicit */val<int>) var_18)) : (((/* implicit */val<int>) (val<bool>)1))))) : (((val<long long int>) ((val<unsigned char>) (val<bool>)1)))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

bool var_0 = (bool)1;
short var_2 = (short)18445;
bool var_4 = (bool)1;
unsigned char var_6 = (unsigned char)161;
short var_7 = (short)31951;
bool var_10 = (bool)0;
short var_15 = (short)-14535;
int var_16 = 1838768744;
unsigned char var_18 = (unsigned char)188;
int zero = 0;
long long int var_20 = 6974919572297294422LL;
signed char var_21 = (signed char)71;
short var_22 = (short)25794;
void init() {
}

void checksum() {
    value_mismatch |= var_20 != 0LL;
    value_mismatch |= var_21 != (signed char)56;
    value_mismatch |= var_22 != (short)188;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_2, var_4, var_6, var_7, var_10, var_15, var_16, var_18, zero, &var_20, &var_21, &var_22);
  checksum();
  assert(!value_mismatch);
}
