/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 5362
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=5362
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
void test(val<unsigned long long int> var_0, val<unsigned char> var_1, val<unsigned long long int> var_2, val<int> var_6, val<bool> var_7, val<unsigned int> var_12, val<int> var_13, val<int> zero, val<short*> var_14, val<long long int*> var_15, val<bool*> var_16) {
    *var_14 = ((/* implicit */val<short>) max((*var_14), (((/* implicit */val<short>) (((val<bool>)1) ? (-5778194691714424365LL) : (-4936189372298236866LL))))));
    *var_15 = ((/* implicit */val<long long int>) ((((val<bool>) ((val<bool>) var_1))) ? (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_7))) : (min((var_12), (((/* implicit */val<unsigned int>) (+(var_13))))))));
    *var_16 = ((/* implicit */val<bool>) ((((/* implicit */val<bool>) var_2)) ? (((((/* implicit */val<bool>) ((((/* implicit */val<bool>) var_2)) ? (((/* implicit */val<unsigned long long int>) var_12)) : (var_2)))) ? (((/* implicit */val<unsigned long long int>) max((var_6), (var_13)))) : (var_0))) : (((/* implicit */val<unsigned long long int>) var_12))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 6164331923480305790ULL;
unsigned char var_1 = (unsigned char)79;
unsigned long long int var_2 = 17203860270174110354ULL;
int var_6 = 1900389178;
bool var_7 = (bool)1;
unsigned int var_12 = 4034999639U;
int var_13 = -1076934426;
int zero = 0;
short var_14 = (short)6604;
long long int var_15 = 9065591712219516454LL;
bool var_16 = (bool)0;
void init() {
}

void checksum() {
    value_mismatch |= var_14 != (short)25043;
    value_mismatch |= var_15 != 1LL;
    value_mismatch |= var_16 != (bool)1;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_2, var_6, var_7, var_12, var_13, zero, &var_14, &var_15, &var_16);
  checksum();
  assert(!value_mismatch);
}
