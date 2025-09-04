/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 2655
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=2655
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
void test(val<unsigned int> var_3, val<unsigned int> var_4, val<long long int> var_8, val<int> zero, val<unsigned short*> var_15, val<unsigned short*> var_16, val<signed char*> var_17, val<long long int*> var_18) {
    *var_15 += ((/* implicit */val<unsigned short>) var_3);
    *var_16 = ((/* implicit */val<unsigned short>) (~(((((/* implicit */val<long long int>) ((/* implicit */val<int>) (val<bool>)0))) & (-2360543027577936966LL)))));
    *var_17 = ((/* implicit */val<signed char>) ((8469570067980310427ULL) >> (((((val<unsigned long long int>) ((((/* implicit */val<bool>) var_4)) ? (3525383110090847941LL) : (var_8)))) - (3525383110090847918ULL)))));
    *var_18 = ((/* implicit */val<long long int>) var_3);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 1767260590U;
unsigned int var_4 = 1186840972U;
long long int var_8 = 5105423362930799568LL;
int zero = 0;
unsigned short var_15 = (unsigned short)53894;
unsigned short var_16 = (unsigned short)24764;
signed char var_17 = (signed char)-84;
long long int var_18 = -8460596434043408470LL;
void init() {
}

void checksum() {
    value_mismatch |= var_15 != (unsigned short)5172;
    value_mismatch |= var_16 != (unsigned short)65535;
    value_mismatch |= var_17 != (signed char)-52;
    value_mismatch |= var_18 != 1767260590LL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_3, var_4, var_8, zero, &var_15, &var_16, &var_17, &var_18);
  checksum();
  assert(!value_mismatch);
}
