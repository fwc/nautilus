/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 5700
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=5700
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
void test(val<int> var_2, val<int> var_3, val<unsigned char> var_9, val<unsigned char> var_10, val<long long int> var_11, val<int> var_16, val<int> var_18, val<int> zero, val<unsigned long long int*> var_20, val<int*> var_21, val<unsigned long long int*> var_22, val<int*> var_23, val<bool*> var_24) {
    *var_20 = ((/* implicit */val<unsigned long long int>) 2732193414U);
    *var_21 = ((/* implicit */val<int>) ((val<bool>) (+(((/* implicit */val<int>) ((var_18) > (((/* implicit */val<int>) var_10))))))));
    *var_22 = ((/* implicit */val<unsigned long long int>) var_2);
    *var_23 = ((/* implicit */val<int>) ((((/* implicit */val<bool>) var_11)) ? (((/* implicit */val<long long int>) var_16)) : (((val<long long int>) 2147483632))));
    *var_24 = ((/* implicit */val<bool>) ((((/* implicit */val<bool>) (+(var_3)))) ? (((/* implicit */val<int>) var_9)) : (((/* implicit */val<int>) ((((/* implicit */val<int>) var_10)) < (max((((/* implicit */val<int>) var_10)), (-14))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -340721560;
int var_3 = -891547361;
unsigned char var_9 = (unsigned char)213;
unsigned char var_10 = (unsigned char)179;
long long int var_11 = -8133276716663993011LL;
int var_16 = 1546276215;
int var_18 = -1044445993;
int zero = 0;
unsigned long long int var_20 = 11609729998327723106ULL;
int var_21 = -98376901;
unsigned long long int var_22 = 673771449912752134ULL;
int var_23 = -2002145801;
bool var_24 = (bool)1;
void init() {
}

void checksum() {
    value_mismatch |= var_20 != 2732193414ULL;
    value_mismatch |= var_21 != 0;
    value_mismatch |= var_22 != 18446744073368830056ULL;
    value_mismatch |= var_23 != 1546276215;
    value_mismatch |= var_24 != (bool)1;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_2, var_3, var_9, var_10, var_11, var_16, var_18, zero, &var_20, &var_21, &var_22, &var_23, &var_24);
  checksum();
}
