/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 6993
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=6993
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
void test(val<unsigned int> var_0, val<unsigned char> var_5, val<long long int> var_7, val<int> zero, val<int*> var_14, val<unsigned int*> var_15, val<unsigned char*> var_16) {
    *var_14 |= (-(((/* implicit */val<int>) var_5)));
    *var_15 = ((/* implicit */val<unsigned int>) (~(((/* implicit */val<int>) ((((/* implicit */val<bool>) var_7)) || (((/* implicit */val<bool>) (~(((/* implicit */val<int>) (val<unsigned char>)198))))))))));
    *var_16 = ((/* implicit */val<unsigned char>) ((((/* implicit */val<int>) (!(((/* implicit */val<bool>) var_5))))) * (((/* implicit */val<int>) (!(((/* implicit */val<bool>) ((var_0) * (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) (val<unsigned char>)59)))))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2971504618U;
unsigned char var_5 = (unsigned char)192;
long long int var_7 = 2625611886938648394LL;
int zero = 0;
int var_14 = -755697715;
unsigned int var_15 = 1078709352U;
unsigned char var_16 = (unsigned char)64;
void init() {
}

void checksum() {
    value_mismatch |= var_14 != -51;
    value_mismatch |= var_15 != 4294967294U;
    value_mismatch |= var_16 != (unsigned char)0;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_5, var_7, zero, &var_14, &var_15, &var_16);
  checksum();
  assert(!value_mismatch);
}
