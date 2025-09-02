/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 1494
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=1494
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
void test(val<unsigned short> var_2, val<unsigned int> var_3, val<int> var_7, val<short> var_8, val<int> var_14, val<int> zero, val<unsigned int*> var_16, val<short*> var_17, val<long long int*> var_18, val<unsigned int*> var_19) {
    *var_16 |= ((/* implicit */val<unsigned int>) (!(((/* implicit */val<bool>) var_8))));
    *var_17 = ((/* implicit */val<short>) min((*var_17), (((/* implicit */val<short>) ((val<unsigned int>) ((((((/* implicit */val<bool>) (val<short>)-1)) ? (var_7) : (var_14))) % (((/* implicit */val<int>) ((var_3) > (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) (val<unsigned short>)48236))))))))))));
    *var_18 = ((/* implicit */val<long long int>) (val<unsigned short>)53520);
    *var_19 -= ((/* implicit */val<unsigned int>) var_2);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)53809;
unsigned int var_3 = 3057538843U;
int var_7 = 141750250;
short var_8 = (short)21718;
int var_14 = 1628689354;
int zero = 0;
unsigned int var_16 = 437695593U;
short var_17 = (short)26258;
long long int var_18 = 4587306303323560634LL;
unsigned int var_19 = 4223893266U;
void init() {
}

void checksum() {
    value_mismatch |= var_16 != 437695593U;
    value_mismatch |= var_17 != (short)0;
    value_mismatch |= var_18 != 53520LL;
    value_mismatch |= var_19 != 4223839457U;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_2, var_3, var_7, var_8, var_14, zero, &var_16, &var_17, &var_18, &var_19);
  checksum();
  assert(!value_mismatch);
}
