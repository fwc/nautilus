/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 6414
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=6414
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
void test(val<signed char> var_0, val<unsigned short> var_1, val<unsigned long long int> var_7, val<unsigned short> var_10, val<signed char> var_12, val<unsigned int> var_17, val<int> zero, val<unsigned long long int*> var_18, val<unsigned char*> var_19, val<short*> var_20) {
    *var_18 = ((/* implicit */val<unsigned long long int>) var_17);
    *var_19 &= ((/* implicit */val<unsigned char>) (((!(((/* implicit */val<bool>) ((((/* implicit */val<bool>) 4077517453U)) ? (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_0))) : (var_7)))))) ? (((/* implicit */val<int>) var_12)) : (((((/* implicit */val<bool>) (-(17678352486746635314ULL)))) ? (((((/* implicit */val<bool>) var_0)) ? (((/* implicit */val<int>) var_1)) : (((/* implicit */val<int>) (val<signed char>)-26)))) : ((~(((/* implicit */val<int>) var_1))))))));
    *var_20 = ((/* implicit */val<short>) var_10);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)103;
unsigned short var_1 = (unsigned short)21287;
unsigned long long int var_7 = 10104115752911478009ULL;
unsigned short var_10 = (unsigned short)4776;
signed char var_12 = (signed char)-89;
unsigned int var_17 = 4255220980U;
int zero = 0;
unsigned long long int var_18 = 7106879029285701212ULL;
unsigned char var_19 = (unsigned char)36;
short var_20 = (short)26862;
void init() {
}

void checksum() {
    value_mismatch |= var_18 != 4255220980ULL;
    value_mismatch |= var_19 != (unsigned char)36;
    value_mismatch |= var_20 != (short)4776;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_7, var_10, var_12, var_17, zero, &var_18, &var_19, &var_20);
  checksum();
}
