/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 3208
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=3208
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
void test(val<short> var_1, val<unsigned char> var_3, val<bool> var_4, val<short> var_15, val<int> zero, val<unsigned int*> var_17, val<int*> var_18, val<int*> var_19) {
    *var_17 = ((/* implicit */val<unsigned int>) max((*var_17), (((/* implicit */val<unsigned int>) var_15))));
    *var_18 = ((((((/* implicit */val<int>) max((var_1), (((/* implicit */val<short>) var_4))))) * (((/* implicit */val<int>) var_4)))) - (((/* implicit */val<int>) var_4)));
    *var_19 = ((/* implicit */val<int>) ((((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_3))) == (max((((/* implicit */val<unsigned int>) (val<bool>)1)), (((((/* implicit */val<unsigned int>) ((/* implicit */val<int>) (val<short>)21310))) ^ (2651843302U)))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)12669;
unsigned char var_3 = (unsigned char)37;
bool var_4 = (bool)0;
short var_15 = (short)-25226;
int zero = 0;
unsigned int var_17 = 3413600311U;
int var_18 = 630571563;
int var_19 = 1350873602;
void init() {
}

void checksum() {
    value_mismatch |= var_17 != 4294942070U;
    value_mismatch |= var_18 != 0;
    value_mismatch |= var_19 != 0;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_3, var_4, var_15, zero, &var_17, &var_18, &var_19);
  checksum();
  assert(!value_mismatch);
}
