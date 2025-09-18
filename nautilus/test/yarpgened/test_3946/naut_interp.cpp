/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 3946
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=3946
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
void test(val<unsigned char> var_1, val<short> var_4, val<unsigned long long int> var_5, val<bool> var_6, val<int> var_14, val<int> zero, val<int*> var_19, val<unsigned char*> var_20, val<int*> var_21, val<bool*> var_22) {
    *var_19 = ((/* implicit */val<int>) min((*var_19), (((/* implicit */val<int>) min(((val<unsigned char>)184), (((/* implicit */val<unsigned char>) var_6)))))));
    *var_20 ^= ((/* implicit */val<unsigned char>) (+(((((/* implicit */val<bool>) var_5)) ? ((+(-605505077968767488LL))) : (((/* implicit */val<long long int>) ((((/* implicit */val<int>) (val<unsigned char>)213)) >> (((((/* implicit */val<int>) var_4)) + (16636))))))))));
    *var_21 = ((/* implicit */val<int>) (val<unsigned char>)253);
    *var_22 = ((/* implicit */val<bool>) ((((/* implicit */val<bool>) var_14)) ? (max((((/* implicit */val<int>) (val<bool>)1)), (255))) : ((-(((/* implicit */val<int>) var_1))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)114;
short var_4 = (short)-16635;
unsigned long long int var_5 = 14325676968115974029ULL;
bool var_6 = (bool)1;
int var_14 = 1391345368;
int zero = 0;
int var_19 = 67430033;
unsigned char var_20 = (unsigned char)119;
int var_21 = 2004603595;
bool var_22 = (bool)0;
void init() {
}

void checksum() {
    value_mismatch |= var_19 != 1;
    value_mismatch |= var_20 != (unsigned char)119;
    value_mismatch |= var_21 != 253;
    value_mismatch |= var_22 != (bool)1;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_4, var_5, var_6, var_14, zero, &var_19, &var_20, &var_21, &var_22);
  checksum();
}
