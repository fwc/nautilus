/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 7349
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=7349
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
void test(val<unsigned int> var_0, val<int> var_3, val<unsigned char> var_5, val<unsigned short> var_14, val<int> zero, val<unsigned int*> var_17, val<int*> var_18, val<bool*> var_19, val<int*> var_20) {
    *var_17 = ((/* implicit */val<unsigned int>) var_3);
    *var_18 = (+(1273381595));
    *var_19 = ((/* implicit */val<bool>) min((max((((((/* implicit */val<bool>) 1273381595)) ? (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_14))) : (1277054495972321245ULL))), (((/* implicit */val<unsigned long long int>) ((val<unsigned short>) var_14))))), (((/* implicit */val<unsigned long long int>) var_0))));
    *var_20 = ((/* implicit */val<int>) (!(((/* implicit */val<bool>) var_5))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2902758104U;
int var_3 = -1486231870;
unsigned char var_5 = (unsigned char)143;
unsigned short var_14 = (unsigned short)8683;
int zero = 0;
unsigned int var_17 = 158063706U;
int var_18 = 270687172;
bool var_19 = (bool)0;
int var_20 = 1461189856;
void init() {
}

void checksum() {
    value_mismatch |= var_17 != 2808735426U;
    value_mismatch |= var_18 != 1273381595;
    value_mismatch |= var_19 != (bool)1;
    value_mismatch |= var_20 != 0;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_3, var_5, var_14, zero, &var_17, &var_18, &var_19, &var_20);
  checksum();
  assert(!value_mismatch);
}
