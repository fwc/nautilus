/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 6561
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=6561
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
void test(val<long long int> var_2, val<unsigned int> var_12, val<int> zero, val<signed char*> var_15, val<int*> var_16, val<int*> var_17) {
    *var_15 = ((/* implicit */val<signed char>) max((*var_15), (((/* implicit */val<signed char>) (-(((/* implicit */val<int>) (val<unsigned short>)27240)))))));
    *var_16 = (~(((/* implicit */val<int>) ((var_2) >= (((/* implicit */val<long long int>) var_12))))));
    *var_17 = ((/* implicit */val<int>) ((((/* implicit */val<bool>) (-(((/* implicit */val<int>) (val<unsigned short>)38295))))) ? (((/* implicit */val<long long int>) ((/* implicit */val<int>) (val<unsigned short>)38295))) : (min((((/* implicit */val<long long int>) (val<signed char>)105)), (((((/* implicit */val<bool>) (val<unsigned short>)27234)) ? (0LL) : (((/* implicit */val<long long int>) var_12))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -1279272918668034006LL;
unsigned int var_12 = 2075886214U;
int zero = 0;
signed char var_15 = (signed char)121;
int var_16 = -563185440;
int var_17 = 1031898340;
void init() {
}

void checksum() {
    value_mismatch |= var_15 != (signed char)121;
    value_mismatch |= var_16 != -1;
    value_mismatch |= var_17 != 38295;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_2, var_12, zero, &var_15, &var_16, &var_17);
  checksum();
  assert(!value_mismatch);
}
