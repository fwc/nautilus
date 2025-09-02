/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 1743
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=1743
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
void test(val<int> zero, val<short*> var_19, val<signed char*> var_20, val<unsigned int*> var_21) {
    *var_19 = ((/* implicit */val<short>) (!(((/* implicit */val<bool>) ((val<short>) -1039323789913154405LL)))));
    *var_20 *= ((/* implicit */val<signed char>) (+(max((((/* implicit */val<long long int>) (val<signed char>)96)), (1039323789913154404LL)))));
    *var_21 = ((/* implicit */val<unsigned int>) ((val<bool>) max((min((((/* implicit */val<unsigned int>) (val<short>)1023)), (1082999292U))), (((/* implicit */val<unsigned int>) ((val<unsigned short>) 0LL))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int zero = 0;
short var_19 = (short)-19937;
signed char var_20 = (signed char)-67;
unsigned int var_21 = 368082446U;
void init() {
}

void checksum() {
    value_mismatch |= var_19 != (short)0;
    value_mismatch |= var_20 != (signed char)-44;
    value_mismatch |= var_21 != 1U;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(zero, &var_19, &var_20, &var_21);
  checksum();
  assert(!value_mismatch);
}
