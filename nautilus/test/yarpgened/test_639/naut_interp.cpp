/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 639
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=639
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
void test(val<int> var_4, val<int> var_5, val<signed char> var_11, val<int> zero, val<long long int*> var_15, val<signed char*> var_16) {
    *var_15 = ((/* implicit */val<long long int>) var_4);
    *var_16 = ((/* implicit */val<signed char>) ((max((((/* implicit */val<int>) ((((/* implicit */val<int>) (val<signed char>)-1)) != (((/* implicit */val<int>) (val<short>)-1))))), (((val<int>) var_11)))) * (((/* implicit */val<int>) ((val<signed char>) ((val<long long int>) var_5))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_4 = 1208551328;
int var_5 = -1971418329;
signed char var_11 = (signed char)-58;
int zero = 0;
long long int var_15 = 6994203032960601769LL;
signed char var_16 = (signed char)-124;
void init() {
}

void checksum() {
    value_mismatch |= var_15 != 1208551328LL;
    value_mismatch |= var_16 != (signed char)0;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_4, var_5, var_11, zero, &var_15, &var_16);
  checksum();
}
