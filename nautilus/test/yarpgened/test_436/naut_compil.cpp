/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 436
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=436
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
void test(val<unsigned int> var_0, val<long long int> var_1, val<unsigned char> var_4, val<unsigned short> var_5, val<unsigned long long int> var_7, val<unsigned int> var_8, val<short> var_10, val<int> zero, val<unsigned int*> var_11, val<unsigned short*> var_12, val<short*> var_13) {
    *var_11 = ((/* implicit */val<unsigned int>) (((+(((/* implicit */val<int>) ((((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_5))) <= (var_7)))))) ^ (((((/* implicit */val<int>) ((((/* implicit */val<int>) var_4)) != (((/* implicit */val<int>) var_10))))) % (((/* implicit */val<int>) var_4))))));
    *var_12 = ((/* implicit */val<unsigned short>) (!(((((var_1) - (((/* implicit */val<long long int>) var_8)))) <= ((-(var_1)))))));
    *var_13 = ((/* implicit */val<short>) var_0);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 4038514838U;
long long int var_1 = -2046951473481249448LL;
unsigned char var_4 = (unsigned char)243;
unsigned short var_5 = (unsigned short)13891;
unsigned long long int var_7 = 9432912563727256898ULL;
unsigned int var_8 = 2055624794U;
short var_10 = (short)-19730;
int zero = 0;
unsigned int var_11 = 3827075617U;
unsigned short var_12 = (unsigned short)51493;
short var_13 = (short)9305;
void init() {
}

void checksum() {
    value_mismatch |= var_11 != 0U;
    value_mismatch |= var_12 != (unsigned short)0;
    value_mismatch |= var_13 != (short)-10090;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_4, var_5, var_7, var_8, var_10, zero, &var_11, &var_12, &var_13);
  checksum();
  assert(!value_mismatch);
}
