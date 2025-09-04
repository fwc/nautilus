/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 2180
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=2180
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
void test(val<unsigned short> var_3, val<unsigned short> var_5, val<int> zero, val<unsigned short*> var_10, val<unsigned long long int*> var_11) {
    *var_10 &= ((/* implicit */val<unsigned short>) ((((/* implicit */val<bool>) (val<unsigned char>)212)) ? (((/* implicit */val<long long int>) ((/* implicit */val<int>) (val<unsigned short>)224))) : (-501555960110434012LL)));
    *var_11 = ((((/* implicit */val<bool>) var_3)) ? (((((/* implicit */val<bool>) (val<signed char>)-114)) ? (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) (val<unsigned char>)96))) : (6016190237402757708ULL))) : (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) ((val<unsigned short>) ((((/* implicit */val<int>) (val<short>)0)) < (((/* implicit */val<int>) var_5))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)50359;
unsigned short var_5 = (unsigned short)22255;
int zero = 0;
unsigned short var_10 = (unsigned short)40300;
unsigned long long int var_11 = 2852746811185136036ULL;
void init() {
}

void checksum() {
    value_mismatch |= var_10 != (unsigned short)96;
    value_mismatch |= var_11 != 96ULL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_3, var_5, zero, &var_10, &var_11);
  checksum();
  assert(!value_mismatch);
}
