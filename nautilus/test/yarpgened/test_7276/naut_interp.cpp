/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 7276
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=7276
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
void test(val<unsigned char> var_4, val<bool> var_5, val<long long int> var_6, val<bool> var_8, val<bool> var_9, val<int> zero, val<short*> var_11, val<unsigned int*> var_12) {
    *var_11 = ((/* implicit */val<short>) ((max((max((((/* implicit */val<long long int>) (val<bool>)1)), (-9223372036854775787LL))), (((/* implicit */val<long long int>) ((((/* implicit */val<int>) var_8)) / (((/* implicit */val<int>) var_4))))))) < (((/* implicit */val<long long int>) 3379662098U))));
    *var_12 = ((/* implicit */val<unsigned int>) ((((/* implicit */val<bool>) var_6)) ? (((val<long long int>) var_5)) : (((/* implicit */val<long long int>) ((/* implicit */val<int>) var_9)))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_4 = (unsigned char)247;
bool var_5 = (bool)0;
long long int var_6 = 9051772037923800649LL;
bool var_8 = (bool)1;
bool var_9 = (bool)1;
int zero = 0;
short var_11 = (short)-11610;
unsigned int var_12 = 3129592303U;
void init() {
}

void checksum() {
    value_mismatch |= var_11 != (short)1;
    value_mismatch |= var_12 != 0U;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_4, var_5, var_6, var_8, var_9, zero, &var_11, &var_12);
  checksum();
  assert(!value_mismatch);
}
