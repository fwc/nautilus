/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 2555
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=2555
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
void test(val<unsigned short> var_7, val<unsigned int> var_9, val<long long int> var_12, val<int> var_15, val<bool> var_16, val<short> var_17, val<long long int> var_19, val<int> zero, val<long long int*> var_20, val<long long int*> var_21, val<int*> var_22) {
    *var_20 = ((/* implicit */val<long long int>) var_17);
    *var_21 = ((var_16) ? (((/* implicit */val<long long int>) ((/* implicit */val<int>) (val<bool>)1))) : (((((/* implicit */val<bool>) ((((/* implicit */val<bool>) var_12)) ? (((/* implicit */val<int>) var_7)) : (var_15)))) ? (var_19) : (((/* implicit */val<long long int>) ((/* implicit */val<int>) ((((/* implicit */val<int>) (val<short>)31)) <= (((/* implicit */val<int>) (val<short>)14221)))))))));
    *var_22 = ((/* implicit */val<int>) (~((~(((val<long long int>) var_9))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_7 = (unsigned short)47112;
unsigned int var_9 = 1107642007U;
long long int var_12 = -9108942913237206482LL;
int var_15 = -558293054;
bool var_16 = (bool)1;
short var_17 = (short)-17708;
long long int var_19 = -7277721950406458476LL;
int zero = 0;
long long int var_20 = 9015116670240420678LL;
long long int var_21 = -567858389889558014LL;
int var_22 = 689653266;
void init() {
}

void checksum() {
    value_mismatch |= var_20 != -17708LL;
    value_mismatch |= var_21 != 1LL;
    value_mismatch |= var_22 != 1107642007;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_7, var_9, var_12, var_15, var_16, var_17, var_19, zero, &var_20, &var_21, &var_22);
  checksum();
  assert(!value_mismatch);
}
