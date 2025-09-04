/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 4506
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=4506
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
void test(val<unsigned int> var_0, val<signed char> var_4, val<unsigned short> var_6, val<unsigned short> var_7, val<int> zero, val<unsigned long long int*> var_14, val<short*> var_15, val<int*> var_16) {
    *var_14 = ((/* implicit */val<unsigned long long int>) min((*var_14), (((/* implicit */val<unsigned long long int>) (~(((((/* implicit */val<bool>) var_4)) ? (var_0) : (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) ((((/* implicit */val<int>) (val<bool>)0)) >= (((/* implicit */val<int>) var_6)))))))))))));
    *var_15 = ((/* implicit */val<short>) var_7);
    *var_16 = ((/* implicit */val<int>) var_7);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 706024701U;
signed char var_4 = (signed char)-90;
unsigned short var_6 = (unsigned short)22492;
unsigned short var_7 = (unsigned short)47084;
int zero = 0;
unsigned long long int var_14 = 6407305627516518707ULL;
short var_15 = (short)-23914;
int var_16 = -582674025;
void init() {
}

void checksum() {
    value_mismatch |= var_14 != 3588942594ULL;
    value_mismatch |= var_15 != (short)-18452;
    value_mismatch |= var_16 != 47084;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_4, var_6, var_7, zero, &var_14, &var_15, &var_16);
  checksum();
  assert(!value_mismatch);
}
