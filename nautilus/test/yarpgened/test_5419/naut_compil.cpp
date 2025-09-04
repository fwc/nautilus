/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 5419
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=5419
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
void test(val<short> var_2, val<signed char> var_5, val<unsigned long long int> var_6, val<long long int> var_7, val<int> zero, val<unsigned int*> var_11, val<unsigned int*> var_12, val<unsigned int*> var_13) {
    *var_11 = ((/* implicit */val<unsigned int>) min((*var_11), (((/* implicit */val<unsigned int>) min((var_7), (var_7))))));
    *var_12 = ((/* implicit */val<unsigned int>) ((val<unsigned short>) ((((/* implicit */val<unsigned long long int>) (+(((/* implicit */val<int>) var_5))))) > (min((((/* implicit */val<unsigned long long int>) var_2)), (var_6))))));
    *var_13 = ((/* implicit */val<unsigned int>) var_5);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)23885;
signed char var_5 = (signed char)110;
unsigned long long int var_6 = 7356559143042352126ULL;
long long int var_7 = 9144633181370992184LL;
int zero = 0;
unsigned int var_11 = 1748560333U;
unsigned int var_12 = 3835460932U;
unsigned int var_13 = 3169731113U;
void init() {
}

void checksum() {
    value_mismatch |= var_11 != 1748560333U;
    value_mismatch |= var_12 != 0U;
    value_mismatch |= var_13 != 110U;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_2, var_5, var_6, var_7, zero, &var_11, &var_12, &var_13);
  checksum();
  assert(!value_mismatch);
}
