/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 4719
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=4719
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
void test(val<unsigned int> var_3, val<signed char> var_7, val<int> var_10, val<int> zero, val<unsigned int*> var_11, val<unsigned int*> var_12) {
    *var_11 = ((/* implicit */val<unsigned int>) min((*var_11), (((/* implicit */val<unsigned int>) min(((-(-2654008314810232746LL))), (((/* implicit */val<long long int>) ((((/* implicit */val<bool>) var_10)) ? (((/* implicit */val<unsigned int>) ((((/* implicit */val<bool>) var_3)) ? (((/* implicit */val<int>) var_7)) : (((/* implicit */val<int>) (val<bool>)1))))) : (((var_3) * (((/* implicit */val<unsigned int>) var_10))))))))))));
    *var_12 = ((/* implicit */val<unsigned int>) var_7);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 3562193090U;
signed char var_7 = (signed char)-89;
int var_10 = -211018248;
int zero = 0;
unsigned int var_11 = 2105356808U;
unsigned int var_12 = 3918167993U;
void init() {
}

void checksum() {
    value_mismatch |= var_11 != 2105356808U;
    value_mismatch |= var_12 != 4294967207U;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_3, var_7, var_10, zero, &var_11, &var_12);
  checksum();
}
