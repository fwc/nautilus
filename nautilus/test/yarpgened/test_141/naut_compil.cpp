/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 141
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=141
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
void test(val<signed char> var_0, val<short> var_9, val<unsigned long long int> var_11, val<int> zero, val<long long int*> var_12, val<signed char*> var_13, val<unsigned long long int*> var_14, val<signed char*> var_15, val<unsigned int*> var_16) {
    *var_12 = ((/* implicit */val<long long int>) min((*var_12), (((/* implicit */val<long long int>) ((val<short>) min((((/* implicit */val<unsigned long long int>) (val<signed char>)7)), (11847877089617064177ULL)))))));
    *var_13 &= ((/* implicit */val<signed char>) (-(10527003196473956285ULL)));
    *var_14 = ((/* implicit */val<unsigned long long int>) (!(((/* implicit */val<bool>) var_9))));
    *var_15 = ((/* implicit */val<signed char>) (-((-(2147483648U)))));
    *var_16 += ((/* implicit */val<unsigned int>) ((max((((/* implicit */val<unsigned long long int>) ((((/* implicit */val<bool>) var_0)) ? (((/* implicit */val<int>) var_9)) : (((/* implicit */val<int>) var_0))))), (var_11))) > (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_9)))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)14;
short var_9 = (short)6519;
unsigned long long int var_11 = 6939882159524054166ULL;
int zero = 0;
long long int var_12 = 2580372055470024005LL;
signed char var_13 = (signed char)47;
unsigned long long int var_14 = 253119954154254214ULL;
signed char var_15 = (signed char)-93;
unsigned int var_16 = 1627258384U;
void init() {
}

void checksum() {
    value_mismatch |= var_12 != 7LL;
    value_mismatch |= var_13 != (signed char)3;
    value_mismatch |= var_14 != 0ULL;
    value_mismatch |= var_15 != (signed char)0;
    value_mismatch |= var_16 != 1627258385U;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_9, var_11, zero, &var_12, &var_13, &var_14, &var_15, &var_16);
  checksum();
}
