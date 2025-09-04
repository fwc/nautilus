/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 8915
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=8915
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
void test(val<unsigned short> var_2, val<int> zero, val<unsigned short*> var_11, val<bool*> var_12) {
    *var_11 = ((/* implicit */val<unsigned short>) ((((/* implicit */val<bool>) ((18446744073709551615ULL) << (((/* implicit */val<int>) (val<unsigned char>)18))))) ? (((/* implicit */val<int>) ((((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) (val<unsigned char>)255))) > (max((((/* implicit */val<unsigned long long int>) (val<unsigned char>)0)), (5163266970549594388ULL)))))) : (max(((-2147483647 - 1)), (((/* implicit */val<int>) (val<unsigned char>)250))))));
    *var_12 = ((/* implicit */val<bool>) var_2);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)2916;
int zero = 0;
unsigned short var_11 = (unsigned short)52797;
bool var_12 = (bool)0;
void init() {
}

void checksum() {
    value_mismatch |= var_11 != (unsigned short)0;
    value_mismatch |= var_12 != (bool)1;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_2, zero, &var_11, &var_12);
  checksum();
  assert(!value_mismatch);
}
