/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 5348
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=5348
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
void test(val<signed char> var_3, val<short> var_6, val<unsigned char> var_16, val<int> zero, val<unsigned int*> var_17, val<unsigned char*> var_18) {
    *var_17 = ((/* implicit */val<unsigned int>) ((val<int>) ((val<unsigned char>) var_16)));
    *var_18 = ((/* implicit */val<unsigned char>) (+(((/* implicit */val<int>) ((val<short>) min((((/* implicit */val<short>) var_3)), (var_6)))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)-127;
short var_6 = (short)1604;
unsigned char var_16 = (unsigned char)77;
int zero = 0;
unsigned int var_17 = 341094961U;
unsigned char var_18 = (unsigned char)13;
void init() {
}

void checksum() {
    value_mismatch |= var_17 != 77U;
    value_mismatch |= var_18 != (unsigned char)129;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_3, var_6, var_16, zero, &var_17, &var_18);
  checksum();
}
