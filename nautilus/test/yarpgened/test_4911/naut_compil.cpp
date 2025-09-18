/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 4911
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=4911
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
void test(val<long long int> var_1, val<unsigned short> var_8, val<int> zero, val<int*> var_17, val<short*> var_18) {
    *var_17 = ((/* implicit */val<int>) var_8);
    *var_18 = ((/* implicit */val<short>) ((((val<int>) (-(((/* implicit */val<int>) (val<signed char>)0))))) >> (((var_1) + (4821821091753289415LL)))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -4821821091753289396LL;
unsigned short var_8 = (unsigned short)55066;
int zero = 0;
int var_17 = -1889937769;
short var_18 = (short)8103;
void init() {
}

void checksum() {
    value_mismatch |= var_17 != 55066;
    value_mismatch |= var_18 != (short)0;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_8, zero, &var_17, &var_18);
  checksum();
}
