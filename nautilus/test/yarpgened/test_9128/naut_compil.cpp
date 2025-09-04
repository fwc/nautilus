/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 9128
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=9128
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
void test(val<long long int> var_4, val<int> var_10, val<unsigned int> var_12, val<int> var_16, val<int> zero, val<int*> var_20, val<int*> var_21, val<bool*> var_22) {
    *var_20 = (~((~(((/* implicit */val<int>) (val<short>)-11849)))));
    *var_21 = ((/* implicit */val<int>) max((*var_21), (((/* implicit */val<int>) (!((!(((/* implicit */val<bool>) ((((/* implicit */val<bool>) var_10)) ? (((/* implicit */val<long long int>) ((/* implicit */val<int>) (val<short>)-11849))) : (var_4)))))))))));
    *var_22 = ((/* implicit */val<bool>) ((((/* implicit */val<bool>) var_12)) ? (((/* implicit */val<int>) (!(((/* implicit */val<bool>) ((((/* implicit */val<int>) (val<unsigned char>)48)) | (var_16))))))) : (((/* implicit */val<int>) (val<short>)6007))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = 326795396762454727LL;
int var_10 = -1512230941;
unsigned int var_12 = 1991143267U;
int var_16 = 445310337;
int zero = 0;
int var_20 = -256361381;
int var_21 = -248403350;
bool var_22 = (bool)0;
void init() {
}

void checksum() {
    value_mismatch |= var_20 != -11849;
    value_mismatch |= var_21 != 1;
    value_mismatch |= var_22 != (bool)0;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_4, var_10, var_12, var_16, zero, &var_20, &var_21, &var_22);
  checksum();
  assert(!value_mismatch);
}
