/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 5211
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=5211
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
void test(val<signed char> var_1, val<int> var_2, val<signed char> var_4, val<signed char> var_5, val<int> zero, val<unsigned long long int*> var_13, val<unsigned short*> var_14, val<unsigned short*> var_15) {
    *var_13 = ((/* implicit */val<unsigned long long int>) ((val<unsigned short>) ((((/* implicit */val<bool>) var_4)) ? (var_2) : (((/* implicit */val<int>) var_1)))));
    *var_14 = ((/* implicit */val<unsigned short>) min((*var_14), (((/* implicit */val<unsigned short>) (+(((((val<unsigned long long int>) var_4)) - (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_4))))))))));
    *var_15 = ((/* implicit */val<unsigned short>) (!(((((/* implicit */val<int>) max(((val<unsigned short>)11602), (((/* implicit */val<unsigned short>) var_5))))) != (((/* implicit */val<int>) ((val<unsigned short>) var_1)))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)84;
int var_2 = -646678058;
signed char var_4 = (signed char)-13;
signed char var_5 = (signed char)-93;
int zero = 0;
unsigned long long int var_13 = 15598263429107598977ULL;
unsigned short var_14 = (unsigned short)42874;
unsigned short var_15 = (unsigned short)49941;
void init() {
}

void checksum() {
    value_mismatch |= var_13 != 31190ULL;
    value_mismatch |= var_14 != (unsigned short)0;
    value_mismatch |= var_15 != (unsigned short)0;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_2, var_4, var_5, zero, &var_13, &var_14, &var_15);
  checksum();
  assert(!value_mismatch);
}
