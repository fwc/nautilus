/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 4490
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=4490
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
void test(val<signed char> var_10, val<signed char> var_11, val<int> zero, val<unsigned short*> var_17, val<int*> var_18) {
    *var_17 |= ((/* implicit */val<unsigned short>) min((((val<unsigned char>) var_10)), (((/* implicit */val<unsigned char>) (val<bool>)1))));
    *var_18 = ((/* implicit */val<int>) ((val<unsigned char>) (-(((((/* implicit */val<bool>) (val<unsigned short>)5)) ? (((/* implicit */val<int>) var_11)) : (((/* implicit */val<int>) (val<unsigned char>)0)))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_10 = (signed char)-49;
signed char var_11 = (signed char)-95;
int zero = 0;
unsigned short var_17 = (unsigned short)48073;
int var_18 = -861710347;
void init() {
}

void checksum() {
    value_mismatch |= var_17 != (unsigned short)48073;
    value_mismatch |= var_18 != 95;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_10, var_11, zero, &var_17, &var_18);
  checksum();
}
