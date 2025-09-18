/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 7159
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=7159
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
void test(val<int> var_0, val<short> var_1, val<short> var_3, val<short> var_4, val<unsigned short> var_7, val<unsigned short> var_9, val<short> var_12, val<int> zero, val<unsigned short*> var_13, val<unsigned long long int*> var_14, val<long long int*> var_15) {
    *var_13 &= ((/* implicit */val<unsigned short>) (~(((((/* implicit */val<bool>) ((((/* implicit */val<bool>) var_4)) ? (((/* implicit */val<int>) var_3)) : (((/* implicit */val<int>) var_3))))) ? (((/* implicit */val<int>) var_12)) : (((/* implicit */val<int>) var_12))))));
    *var_14 = ((/* implicit */val<unsigned long long int>) ((var_0) | ((((+(((/* implicit */val<int>) var_9)))) / (((((/* implicit */val<int>) var_7)) * (((/* implicit */val<int>) var_4))))))));
    *var_15 = ((/* implicit */val<long long int>) var_1);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1323159551;
short var_1 = (short)-14030;
short var_3 = (short)26409;
short var_4 = (short)1779;
unsigned short var_7 = (unsigned short)6833;
unsigned short var_9 = (unsigned short)31521;
short var_12 = (short)-19878;
int zero = 0;
unsigned short var_13 = (unsigned short)54890;
unsigned long long int var_14 = 14226640051401199241ULL;
long long int var_15 = 7665102367565157259LL;
void init() {
}

void checksum() {
    value_mismatch |= var_13 != (unsigned short)17440;
    value_mismatch |= var_14 != 18446744072386392065ULL;
    value_mismatch |= var_15 != -14030LL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_3, var_4, var_7, var_9, var_12, zero, &var_13, &var_14, &var_15);
  checksum();
}
