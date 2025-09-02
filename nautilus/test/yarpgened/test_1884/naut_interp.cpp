/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 1884
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=1884
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
void test(val<bool> var_0, val<unsigned char> var_3, val<int> var_4, val<int> var_5, val<int> var_6, val<unsigned long long int> var_9, val<int> zero, val<long long int*> var_11, val<signed char*> var_12, val<unsigned long long int*> var_13, val<unsigned short*> var_14, val<bool*> var_15) {
    *var_11 = ((/* implicit */val<long long int>) (~(((/* implicit */val<int>) var_0))));
    *var_12 = ((/* implicit */val<signed char>) (~(((/* implicit */val<int>) ((((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_3))) != (((((/* implicit */val<bool>) var_6)) ? (var_9) : (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_0))))))))));
    *var_13 = ((/* implicit */val<unsigned long long int>) ((((/* implicit */val<bool>) (-(((/* implicit */val<int>) (val<unsigned short>)22687))))) ? (((/* implicit */val<int>) ((((2086974314) % (((/* implicit */val<int>) var_0)))) < (((((/* implicit */val<bool>) (val<unsigned short>)42848)) ? (((/* implicit */val<int>) var_3)) : (((/* implicit */val<int>) (val<signed char>)58))))))) : (((/* implicit */val<int>) ((val<short>) var_5)))));
    *var_14 = ((/* implicit */val<unsigned short>) -2086974314);
    *var_15 ^= ((/* implicit */val<bool>) ((var_4) - ((+(((/* implicit */val<int>) (!(((/* implicit */val<bool>) (val<signed char>)69)))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

bool var_0 = (bool)1;
unsigned char var_3 = (unsigned char)231;
int var_4 = 252356157;
int var_5 = 554125227;
int var_6 = -1568368367;
unsigned long long int var_9 = 1496545557382387685ULL;
int zero = 0;
long long int var_11 = -4682119398161587550LL;
signed char var_12 = (signed char)87;
unsigned long long int var_13 = 9203754246317694770ULL;
unsigned short var_14 = (unsigned short)27585;
bool var_15 = (bool)1;
void init() {
}

void checksum() {
    value_mismatch |= var_11 != -2LL;
    value_mismatch |= var_12 != (signed char)-2;
    value_mismatch |= var_13 != 1ULL;
    value_mismatch |= var_14 != (unsigned short)19606;
    value_mismatch |= var_15 != (bool)0;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_3, var_4, var_5, var_6, var_9, zero, &var_11, &var_12, &var_13, &var_14, &var_15);
  checksum();
  assert(!value_mismatch);
}
