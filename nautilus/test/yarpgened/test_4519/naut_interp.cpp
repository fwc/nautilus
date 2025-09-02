/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 4519
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=4519
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
void test(val<short> var_3, val<unsigned char> var_4, val<long long int> var_5, val<signed char> var_10, val<unsigned int> var_11, val<bool> var_13, val<int> zero, val<bool*> var_14, val<short*> var_15, val<unsigned int*> var_16, val<unsigned char*> var_17, val<unsigned int*> var_18) {
    *var_14 = ((/* implicit */val<bool>) min((*var_14), (((/* implicit */val<bool>) var_5))));
    *var_15 = max((var_3), (((/* implicit */val<short>) var_4)));
    *var_16 = max((((/* implicit */val<unsigned int>) ((((/* implicit */val<int>) (val<bool>)0)) >> (((/* implicit */val<int>) (val<bool>)1))))), (var_11));
    *var_17 = ((/* implicit */val<unsigned char>) ((((/* implicit */val<bool>) ((val<unsigned int>) ((((/* implicit */val<int>) (val<unsigned short>)58040)) + (((/* implicit */val<int>) (val<unsigned char>)75)))))) || (((/* implicit */val<bool>) var_10))));
    *var_18 = ((/* implicit */val<unsigned int>) max((((((var_13) ? (((/* implicit */val<int>) var_10)) : (((/* implicit */val<int>) var_10)))) != (((/* implicit */val<int>) (val<signed char>)-124)))), (((((/* implicit */val<long long int>) ((((/* implicit */val<int>) var_10)) + (((/* implicit */val<int>) var_13))))) == (783430164513398360LL)))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)-28426;
unsigned char var_4 = (unsigned char)242;
long long int var_5 = 7669949496754680988LL;
signed char var_10 = (signed char)7;
unsigned int var_11 = 2148152039U;
bool var_13 = (bool)1;
int zero = 0;
bool var_14 = (bool)0;
short var_15 = (short)7559;
unsigned int var_16 = 1915061231U;
unsigned char var_17 = (unsigned char)244;
unsigned int var_18 = 289111054U;
void init() {
}

void checksum() {
    value_mismatch |= var_14 != (bool)0;
    value_mismatch |= var_15 != (short)242;
    value_mismatch |= var_16 != 2148152039U;
    value_mismatch |= var_17 != (unsigned char)1;
    value_mismatch |= var_18 != 1U;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_3, var_4, var_5, var_10, var_11, var_13, zero, &var_14, &var_15, &var_16, &var_17, &var_18);
  checksum();
  assert(!value_mismatch);
}
