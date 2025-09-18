/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 1206
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=1206
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
void test(val<unsigned long long int> var_2, val<bool> var_3, val<unsigned long long int> var_6, val<long long int> var_7, val<long long int> var_14, val<int> zero, val<int*> var_15, val<short*> var_16, val<unsigned long long int*> var_17, val<long long int*> var_18) {
    *var_15 = ((/* implicit */val<int>) var_7);
    *var_16 = ((/* implicit */val<short>) var_2);
    *var_17 = ((/* implicit */val<unsigned long long int>) var_3);
    *var_18 = ((((/* implicit */val<bool>) (val<short>)32767)) ? (var_14) : (((/* implicit */val<long long int>) ((/* implicit */val<int>) (!(((/* implicit */val<bool>) (-(var_6)))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 12698199379835522309ULL;
bool var_3 = (bool)1;
unsigned long long int var_6 = 551714217733185184ULL;
long long int var_7 = -5575569261714117584LL;
long long int var_14 = -7111294865608140908LL;
int zero = 0;
int var_15 = 1138423872;
short var_16 = (short)25246;
unsigned long long int var_17 = 942134500611561926ULL;
long long int var_18 = 1580523189649854535LL;
void init() {
}

void checksum() {
    value_mismatch |= var_15 != 250702896;
    value_mismatch |= var_16 != (short)-29435;
    value_mismatch |= var_17 != 1ULL;
    value_mismatch |= var_18 != -7111294865608140908LL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_2, var_3, var_6, var_7, var_14, zero, &var_15, &var_16, &var_17, &var_18);
  checksum();
}
