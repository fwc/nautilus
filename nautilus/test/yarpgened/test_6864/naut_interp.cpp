/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 6864
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=6864
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
void test(val<signed char> var_3, val<signed char> var_12, val<int> zero, val<unsigned short*> var_15, val<int*> var_16, val<unsigned short*> var_17) {
    *var_15 = ((/* implicit */val<unsigned short>) var_12);
    *var_16 = ((/* implicit */val<int>) (val<unsigned char>)247);
    *var_17 = ((/* implicit */val<unsigned short>) max((*var_17), (((/* implicit */val<unsigned short>) ((((/* implicit */val<bool>) var_3)) ? (((/* implicit */val<int>) ((val<signed char>) ((((/* implicit */val<int>) (val<short>)18826)) | (((/* implicit */val<int>) var_12)))))) : (((/* implicit */val<int>) var_3)))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)60;
signed char var_12 = (signed char)103;
int zero = 0;
unsigned short var_15 = (unsigned short)56713;
int var_16 = 1844922777;
unsigned short var_17 = (unsigned short)11564;
void init() {
}

void checksum() {
    value_mismatch |= var_15 != (unsigned short)103;
    value_mismatch |= var_16 != 247;
    value_mismatch |= var_17 != (unsigned short)65519;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_3, var_12, zero, &var_15, &var_16, &var_17);
  checksum();
}
