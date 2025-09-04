/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 1125
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=1125
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
void test(val<signed char> var_1, val<int> var_2, val<unsigned long long int> var_3, val<unsigned short> var_4, val<int> zero, val<int*> var_11, val<unsigned char*> var_12, val<unsigned char*> var_13, val<unsigned short*> var_14, val<unsigned short*> var_15) {
    *var_11 = (-(((/* implicit */val<int>) var_1)));
    *var_12 = ((/* implicit */val<unsigned char>) ((((/* implicit */val<int>) ((((/* implicit */val<unsigned int>) max((((/* implicit */val<int>) var_1)), (-808335741)))) > ((~(4294967283U)))))) < (((/* implicit */val<int>) var_4))));
    *var_13 = ((/* implicit */val<unsigned char>) var_1);
    *var_14 ^= ((val<unsigned short>) var_2);
    *var_15 = ((/* implicit */val<unsigned short>) var_3);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)84;
int var_2 = 1176505172;
unsigned long long int var_3 = 17479343930476487715ULL;
unsigned short var_4 = (unsigned short)6389;
int zero = 0;
int var_11 = 763699476;
unsigned char var_12 = (unsigned char)147;
unsigned char var_13 = (unsigned char)255;
unsigned short var_14 = (unsigned short)6886;
unsigned short var_15 = (unsigned short)34762;
void init() {
}

void checksum() {
    value_mismatch |= var_11 != -84;
    value_mismatch |= var_12 != (unsigned char)1;
    value_mismatch |= var_13 != (unsigned char)84;
    value_mismatch |= var_14 != (unsigned short)4530;
    value_mismatch |= var_15 != (unsigned short)25635;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_2, var_3, var_4, zero, &var_11, &var_12, &var_13, &var_14, &var_15);
  checksum();
  assert(!value_mismatch);
}
