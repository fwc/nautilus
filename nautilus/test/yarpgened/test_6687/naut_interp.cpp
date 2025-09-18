/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 6687
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=6687
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
void test(val<long long int> var_0, val<unsigned short> var_3, val<unsigned long long int> var_5, val<short> var_10, val<bool> var_12, val<signed char> var_13, val<short> var_16, val<bool> var_17, val<int> zero, val<signed char*> var_19, val<int*> var_20, val<short*> var_21, val<unsigned char*> var_22) {
    *var_19 = ((/* implicit */val<signed char>) ((((/* implicit */val<int>) var_3)) - (((((/* implicit */val<bool>) var_13)) ? (((/* implicit */val<int>) min((((/* implicit */val<unsigned short>) var_17)), (var_3)))) : (((/* implicit */val<int>) var_3))))));
    *var_20 += ((/* implicit */val<int>) var_3);
    *var_21 = ((/* implicit */val<short>) ((((/* implicit */val<bool>) (-(((/* implicit */val<int>) var_10))))) ? (((/* implicit */val<unsigned long long int>) (((~(5327495049758214930LL))) | (((/* implicit */val<long long int>) (~(((/* implicit */val<int>) (val<bool>)1)))))))) : (max((((((/* implicit */val<bool>) (val<unsigned char>)6)) ? (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_16))) : (var_5))), (min((var_5), (((/* implicit */val<unsigned long long int>) var_12))))))));
    *var_22 |= ((/* implicit */val<unsigned char>) var_0);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 8834746666837680847LL;
unsigned short var_3 = (unsigned short)27324;
unsigned long long int var_5 = 13734348030498218908ULL;
short var_10 = (short)-19062;
bool var_12 = (bool)0;
signed char var_13 = (signed char)-105;
short var_16 = (short)-306;
bool var_17 = (bool)1;
int zero = 0;
signed char var_19 = (signed char)-123;
int var_20 = 1988453766;
short var_21 = (short)-8232;
unsigned char var_22 = (unsigned char)17;
void init() {
}

void checksum() {
    value_mismatch |= var_19 != (signed char)-69;
    value_mismatch |= var_20 != 1988481090;
    value_mismatch |= var_21 != (short)-1;
    value_mismatch |= var_22 != (unsigned char)223;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_3, var_5, var_10, var_12, var_13, var_16, var_17, zero, &var_19, &var_20, &var_21, &var_22);
  checksum();
}
