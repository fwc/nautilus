/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 112
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=112
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
void test(val<unsigned int> var_8, val<long long int> var_16, val<int> zero, val<signed char*> var_17, val<signed char*> var_18, val<unsigned long long int*> var_19) {
    *var_17 = ((/* implicit */val<signed char>) (-(max((((/* implicit */val<unsigned int>) (val<unsigned char>)160)), ((+(var_8)))))));
    *var_18 = ((/* implicit */val<signed char>) var_16);
    *var_19 = ((/* implicit */val<unsigned long long int>) (-(((/* implicit */val<int>) (!(((/* implicit */val<bool>) ((((/* implicit */val<bool>) 1273451885U)) ? (((/* implicit */val<long long int>) ((/* implicit */val<int>) (val<unsigned short>)27551))) : (214582221580584415LL)))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_8 = 4129466911U;
long long int var_16 = 8874341414816231562LL;
int zero = 0;
signed char var_17 = (signed char)-112;
signed char var_18 = (signed char)-112;
unsigned long long int var_19 = 11177400966870205654ULL;
void init() {
}

void checksum() {
    value_mismatch |= var_17 != (signed char)-31;
    value_mismatch |= var_18 != (signed char)-118;
    value_mismatch |= var_19 != 0ULL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_8, var_16, zero, &var_17, &var_18, &var_19);
  checksum();
}
