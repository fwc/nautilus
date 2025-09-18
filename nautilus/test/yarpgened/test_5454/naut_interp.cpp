/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 5454
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=5454
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
void test(val<signed char> var_2, val<unsigned short> var_13, val<int> zero, val<unsigned int*> var_17, val<unsigned int*> var_18, val<unsigned int*> var_19) {
    *var_17 = ((/* implicit */val<unsigned int>) ((((/* implicit */val<int>) (val<signed char>)71)) + (((/* implicit */val<int>) (val<unsigned short>)57136))));
    *var_18 |= ((/* implicit */val<unsigned int>) min((((/* implicit */val<unsigned long long int>) 3273421506U)), (min((5422528674986687592ULL), (((/* implicit */val<unsigned long long int>) var_13))))));
    *var_19 = ((/* implicit */val<unsigned int>) var_2);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-89;
unsigned short var_13 = (unsigned short)14620;
int zero = 0;
unsigned int var_17 = 355914224U;
unsigned int var_18 = 3845216499U;
unsigned int var_19 = 1841119784U;
void init() {
}

void checksum() {
    value_mismatch |= var_17 != 57207U;
    value_mismatch |= var_18 != 3845224959U;
    value_mismatch |= var_19 != 4294967207U;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_2, var_13, zero, &var_17, &var_18, &var_19);
  checksum();
}
