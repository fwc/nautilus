/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 3833
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=3833
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
void test(val<int> var_0, val<signed char> var_1, val<unsigned int> var_3, val<signed char> var_4, val<unsigned int> var_5, val<signed char> var_7, val<unsigned int> var_8, val<unsigned long long int> var_10, val<unsigned long long int> var_11, val<int> zero, val<signed char*> var_14, val<unsigned int*> var_15, val<unsigned short*> var_16, val<short*> var_17, val<int*> var_18) {
    *var_14 = ((/* implicit */val<signed char>) max((max((min((var_8), (((/* implicit */val<unsigned int>) var_7)))), (((/* implicit */val<unsigned int>) (!(((/* implicit */val<bool>) var_10))))))), (((/* implicit */val<unsigned int>) var_1))));
    *var_15 = ((/* implicit */val<unsigned int>) var_1);
    *var_16 |= ((/* implicit */val<unsigned short>) max((max((((/* implicit */val<unsigned long long int>) var_4)), (((val<unsigned long long int>) var_11)))), (((/* implicit */val<unsigned long long int>) min((max((var_3), (var_5))), (3994802945U))))));
    *var_17 = ((/* implicit */val<short>) var_3);
    *var_18 += ((/* implicit */val<int>) max((((val<unsigned long long int>) ((7160852345605220860LL) / (((/* implicit */val<long long int>) ((/* implicit */val<int>) (val<signed char>)4)))))), (((/* implicit */val<unsigned long long int>) (~((-(var_0))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -978493280;
signed char var_1 = (signed char)123;
unsigned int var_3 = 1608136677U;
signed char var_4 = (signed char)88;
unsigned int var_5 = 2980906840U;
signed char var_7 = (signed char)-46;
unsigned int var_8 = 311143670U;
unsigned long long int var_10 = 8994880451583913819ULL;
unsigned long long int var_11 = 16464619695050070173ULL;
int zero = 0;
signed char var_14 = (signed char)-22;
unsigned int var_15 = 4095435287U;
unsigned short var_16 = (unsigned short)55025;
short var_17 = (short)10086;
int var_18 = 252444145;
void init() {
}

void checksum() {
    value_mismatch |= var_14 != (signed char)-10;
    value_mismatch |= var_15 != 123U;
    value_mismatch |= var_16 != (unsigned short)57085;
    value_mismatch |= var_17 != (short)14309;
    value_mismatch |= var_18 != -726049136;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_3, var_4, var_5, var_7, var_8, var_10, var_11, zero, &var_14, &var_15, &var_16, &var_17, &var_18);
  checksum();
}
