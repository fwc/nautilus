/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 7351
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=7351
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
void test(val<short> var_1, val<unsigned int> var_2, val<bool> var_4, val<unsigned int> var_5, val<int> var_7, val<bool> var_9, val<unsigned int> var_14, val<int> zero, val<unsigned char*> var_17, val<short*> var_18, val<unsigned char*> var_19) {
    *var_17 -= ((/* implicit */val<unsigned char>) ((((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_9))) < (((((/* implicit */val<bool>) ((val<unsigned char>) 461511462U))) ? ((~(var_14))) : (((/* implicit */val<unsigned int>) var_7))))));
    *var_18 = ((/* implicit */val<short>) min((*var_18), (((/* implicit */val<short>) var_4))));
    *var_19 = ((/* implicit */val<unsigned char>) min((*var_19), (((/* implicit */val<unsigned char>) (+(min((var_5), (((/* implicit */val<unsigned int>) ((((/* implicit */val<bool>) var_2)) ? (((/* implicit */val<int>) var_1)) : (((/* implicit */val<int>) var_1))))))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)20427;
unsigned int var_2 = 2481604861U;
bool var_4 = (bool)0;
unsigned int var_5 = 1430644089U;
int var_7 = -1529563356;
bool var_9 = (bool)0;
unsigned int var_14 = 2407643817U;
int zero = 0;
unsigned char var_17 = (unsigned char)217;
short var_18 = (short)-18590;
unsigned char var_19 = (unsigned char)9;
void init() {
}

void checksum() {
    value_mismatch |= var_17 != (unsigned char)216;
    value_mismatch |= var_18 != (short)-18590;
    value_mismatch |= var_19 != (unsigned char)9;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_2, var_4, var_5, var_7, var_9, var_14, zero, &var_17, &var_18, &var_19);
  checksum();
  assert(!value_mismatch);
}
