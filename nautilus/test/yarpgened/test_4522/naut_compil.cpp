/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 4522
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=4522
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
void test(val<short> var_1, val<unsigned short> var_2, val<long long int> var_3, val<unsigned short> var_5, val<bool> var_7, val<int> zero, val<int*> var_10, val<bool*> var_11, val<short*> var_12) {
    *var_10 = ((/* implicit */val<int>) max((*var_10), (((/* implicit */val<int>) max((max((var_3), (((/* implicit */val<long long int>) min((var_2), (((/* implicit */val<unsigned short>) var_7))))))), (((/* implicit */val<long long int>) var_5)))))));
    *var_11 -= ((/* implicit */val<bool>) min((((/* implicit */val<long long int>) ((((/* implicit */val<int>) ((144115188075855871ULL) == (((/* implicit */val<unsigned long long int>) 1270655714))))) + (((/* implicit */val<int>) var_1))))), (var_3)));
    *var_12 += ((/* implicit */val<short>) ((((/* implicit */val<int>) var_2)) | ((((+(((/* implicit */val<int>) var_5)))) - (((/* implicit */val<int>) var_7))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-29778;
unsigned short var_2 = (unsigned short)22740;
long long int var_3 = -1936155394751814326LL;
unsigned short var_5 = (unsigned short)56812;
bool var_7 = (bool)1;
int zero = 0;
int var_10 = -1122016231;
bool var_11 = (bool)0;
short var_12 = (short)7303;
void init() {
}

void checksum() {
    value_mismatch |= var_10 != 56812;
    value_mismatch |= var_11 != (bool)1;
    value_mismatch |= var_12 != (short)-1402;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_2, var_3, var_5, var_7, zero, &var_10, &var_11, &var_12);
  checksum();
  assert(!value_mismatch);
}
