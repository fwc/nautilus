/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 9936
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=9936
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
void test(val<bool> var_2, val<unsigned char> var_3, val<int> var_7, val<int> zero, val<long long int*> var_12, val<long long int*> var_13) {
    *var_12 = ((/* implicit */val<long long int>) max((*var_12), (((/* implicit */val<long long int>) min((((/* implicit */val<int>) var_3)), (-1640592986))))));
    *var_13 = ((/* implicit */val<long long int>) ((((/* implicit */val<bool>) ((var_2) ? (var_7) : (((/* implicit */val<int>) ((val<unsigned short>) (val<unsigned short>)2047)))))) ? (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) (val<unsigned short>)2047))) : (max((max((((/* implicit */val<unsigned long long int>) 2263144331U)), (18446744073709551615ULL))), (((((/* implicit */val<bool>) (val<signed char>)54)) ? (15ULL) : (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) (val<unsigned char>)228)))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

bool var_2 = (bool)0;
unsigned char var_3 = (unsigned char)188;
int var_7 = -1355973905;
int zero = 0;
long long int var_12 = -7324236242336555445LL;
long long int var_13 = 788580892030187441LL;
void init() {
}

void checksum() {
    value_mismatch |= var_12 != -1640592986LL;
    value_mismatch |= var_13 != 2047LL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_2, var_3, var_7, zero, &var_12, &var_13);
  checksum();
  assert(!value_mismatch);
}
