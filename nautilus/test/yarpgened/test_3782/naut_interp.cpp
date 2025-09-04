/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 3782
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=3782
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
void test(val<int> var_2, val<int> var_6, val<unsigned int> var_7, val<unsigned short> var_8, val<int> var_12, val<long long int> var_13, val<int> var_14, val<int> zero, val<unsigned short*> var_16, val<unsigned int*> var_17, val<unsigned int*> var_18, val<unsigned int*> var_19, val<unsigned int*> var_20) {
    if (((/* implicit */val<bool>) var_7))
    {
        *var_16 ^= var_8;
        *var_17 = ((/* implicit */val<unsigned int>) var_12);
        *var_18 = ((/* implicit */val<unsigned int>) var_13);
        *var_19 = ((/* implicit */val<unsigned int>) min((*var_19), (((/* implicit */val<unsigned int>) var_2))));
    }

    *var_20 = ((/* implicit */val<unsigned int>) ((var_14) / ((~(var_6)))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 1928429549;
int var_6 = 268929667;
unsigned int var_7 = 2586298909U;
unsigned short var_8 = (unsigned short)63152;
int var_12 = -1420915526;
long long int var_13 = -3880582394627932375LL;
int var_14 = -72135106;
int zero = 0;
unsigned short var_16 = (unsigned short)3685;
unsigned int var_17 = 1133333025U;
unsigned int var_18 = 2420590375U;
unsigned int var_19 = 3868586410U;
unsigned int var_20 = 1486535064U;
void init() {
}

void checksum() {
    value_mismatch |= var_16 != (unsigned short)63701;
    value_mismatch |= var_17 != 2874051770U;
    value_mismatch |= var_18 != 1318141737U;
    value_mismatch |= var_19 != 1928429549U;
    value_mismatch |= var_20 != 0U;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_2, var_6, var_7, var_8, var_12, var_13, var_14, zero, &var_16, &var_17, &var_18, &var_19, &var_20);
  checksum();
  assert(!value_mismatch);
}
