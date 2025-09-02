/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 7852
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=7852
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
void test(val<unsigned short> var_1, val<unsigned short> var_2, val<unsigned long long int> var_3, val<unsigned long long int> var_4, val<int> zero, val<unsigned short*> var_11, val<long long int*> var_12, val<short*> var_13) {
    *var_11 = var_1;
    *var_12 = ((/* implicit */val<long long int>) ((((/* implicit */val<bool>) var_3)) ? ((((!(((/* implicit */val<bool>) (val<short>)30768)))) ? (var_4) : (((/* implicit */val<unsigned long long int>) min((((/* implicit */val<long long int>) (val<short>)13946)), (2960477233698478569LL)))))) : (((/* implicit */val<unsigned long long int>) (~((+(((/* implicit */val<int>) (val<short>)-1442)))))))));
    *var_13 = ((/* implicit */val<short>) min((*var_13), (((/* implicit */val<short>) var_2))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)32661;
unsigned short var_2 = (unsigned short)23022;
unsigned long long int var_3 = 4650222637216784425ULL;
unsigned long long int var_4 = 16578475763810530415ULL;
int zero = 0;
unsigned short var_11 = (unsigned short)30807;
long long int var_12 = 4938276748269067158LL;
short var_13 = (short)8654;
void init() {
}

void checksum() {
    value_mismatch |= var_11 != (unsigned short)32661;
    value_mismatch |= var_12 != 13946LL;
    value_mismatch |= var_13 != (short)8654;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_2, var_3, var_4, zero, &var_11, &var_12, &var_13);
  checksum();
  assert(!value_mismatch);
}
