/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 8766
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=8766
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
void test(val<unsigned short> var_2, val<unsigned int> var_3, val<unsigned char> var_7, val<int> var_8, val<int> zero, val<unsigned short*> var_16, val<bool*> var_17) {
    *var_16 = ((/* implicit */val<unsigned short>) (~(((((/* implicit */val<bool>) (-(((/* implicit */val<int>) (val<unsigned short>)48779))))) ? (((/* implicit */val<int>) var_7)) : (((((/* implicit */val<bool>) var_3)) ? (((/* implicit */val<int>) var_2)) : (var_8)))))));
    *var_17 = ((/* implicit */val<bool>) var_3);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)24512;
unsigned int var_3 = 459012850U;
unsigned char var_7 = (unsigned char)152;
int var_8 = -1347880673;
int zero = 0;
unsigned short var_16 = (unsigned short)4522;
bool var_17 = (bool)1;
void init() {
}

void checksum() {
    value_mismatch |= var_16 != (unsigned short)65383;
    value_mismatch |= var_17 != (bool)1;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_2, var_3, var_7, var_8, zero, &var_16, &var_17);
  checksum();
}
