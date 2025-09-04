/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 6470
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=6470
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
void test(val<unsigned int> var_3, val<int> var_5, val<unsigned int> var_6, val<int> var_7, val<unsigned short> var_12, val<int> zero, val<bool*> var_15, val<bool*> var_16, val<int*> var_17) {
    *var_15 = ((/* implicit */val<bool>) ((((/* implicit */val<bool>) max((0), (((((/* implicit */val<int>) (val<signed char>)9)) % (2051267327)))))) ? (((/* implicit */val<unsigned long long int>) var_6)) : (((val<unsigned long long int>) min((((/* implicit */val<unsigned int>) var_7)), (var_3))))));
    *var_16 = ((/* implicit */val<bool>) var_12);
    *var_17 = var_5;
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 3870750450U;
int var_5 = 7728633;
unsigned int var_6 = 1550624771U;
int var_7 = 991102833;
unsigned short var_12 = (unsigned short)1180;
int zero = 0;
bool var_15 = (bool)0;
bool var_16 = (bool)1;
int var_17 = -277980484;
void init() {
}

void checksum() {
    value_mismatch |= var_15 != (bool)1;
    value_mismatch |= var_16 != (bool)1;
    value_mismatch |= var_17 != 7728633;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_3, var_5, var_6, var_7, var_12, zero, &var_15, &var_16, &var_17);
  checksum();
  assert(!value_mismatch);
}
