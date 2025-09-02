/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 9322
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=9322
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
void test(val<unsigned short> var_6, val<int> zero, val<unsigned short*> var_12, val<unsigned short*> var_13) {
    *var_12 *= ((/* implicit */val<unsigned short>) ((val<unsigned long long int>) ((((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_6))) <= ((~(33423360U))))));
    *var_13 |= ((/* implicit */val<unsigned short>) (-(((/* implicit */val<int>) (!(((/* implicit */val<bool>) (val<unsigned short>)46803)))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_6 = (unsigned short)40306;
int zero = 0;
unsigned short var_12 = (unsigned short)55005;
unsigned short var_13 = (unsigned short)4408;
void init() {
}

void checksum() {
    value_mismatch |= var_12 != (unsigned short)55005;
    value_mismatch |= var_13 != (unsigned short)4408;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_6, zero, &var_12, &var_13);
  checksum();
  assert(!value_mismatch);
}
