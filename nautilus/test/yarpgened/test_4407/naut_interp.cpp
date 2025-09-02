/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 4407
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=4407
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
void test(val<unsigned int> var_6, val<short> var_7, val<int> zero, val<short*> var_13, val<unsigned char*> var_14) {
    *var_13 = ((/* implicit */val<short>) max((((/* implicit */val<int>) ((val<bool>) ((((/* implicit */val<bool>) (val<unsigned char>)33)) ? (var_6) : (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) (val<unsigned char>)33))))))), ((+(((val<int>) 2703411093U))))));
    *var_14 = ((/* implicit */val<unsigned char>) var_7);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_6 = 3948122485U;
short var_7 = (short)-9231;
int zero = 0;
short var_13 = (short)17051;
unsigned char var_14 = (unsigned char)3;
void init() {
}

void checksum() {
    value_mismatch |= var_13 != (short)1;
    value_mismatch |= var_14 != (unsigned char)241;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_6, var_7, zero, &var_13, &var_14);
  checksum();
  assert(!value_mismatch);
}
