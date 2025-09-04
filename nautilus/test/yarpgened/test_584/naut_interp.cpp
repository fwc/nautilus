/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 584
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=584
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
void test(val<short> var_0, val<unsigned long long int> var_3, val<unsigned int> var_10, val<signed char> var_11, val<int> zero, val<signed char*> var_15, val<unsigned int*> var_16) {
    *var_15 = ((/* implicit */val<signed char>) min((*var_15), (((/* implicit */val<signed char>) max((min((((/* implicit */val<unsigned long long int>) var_0)), (var_3))), (((/* implicit */val<unsigned long long int>) ((((/* implicit */val<int>) (val<unsigned short>)49038)) > (((/* implicit */val<int>) ((val<short>) var_10)))))))))));
    *var_16 *= ((/* implicit */val<unsigned int>) (!(((/* implicit */val<bool>) max((((((/* implicit */val<bool>) var_11)) ? (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) (val<short>)-26369))) : (var_3))), (((/* implicit */val<unsigned long long int>) ((val<int>) 1615283885U))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)17113;
unsigned long long int var_3 = 11243825453153685470ULL;
unsigned int var_10 = 4266968190U;
signed char var_11 = (signed char)38;
int zero = 0;
signed char var_15 = (signed char)39;
unsigned int var_16 = 3138556384U;
void init() {
}

void checksum() {
    value_mismatch |= var_15 != (signed char)-39;
    value_mismatch |= var_16 != 0U;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_3, var_10, var_11, zero, &var_15, &var_16);
  checksum();
  assert(!value_mismatch);
}
