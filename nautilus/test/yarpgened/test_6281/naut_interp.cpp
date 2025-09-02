/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 6281
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=6281
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
void test(val<long long int> var_17, val<int> zero, val<short*> var_19, val<long long int*> var_20, val<short*> var_21) {
    *var_19 = ((/* implicit */val<short>) ((((/* implicit */val<bool>) (val<unsigned short>)16384)) ? (0) : (((/* implicit */val<int>) (val<short>)-14))));
    *var_20 &= (-(var_17));
    *var_21 |= ((/* implicit */val<short>) min((((/* implicit */val<unsigned int>) (val<unsigned short>)49152)), (0U)));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_17 = -7746330050918170439LL;
int zero = 0;
short var_19 = (short)32159;
long long int var_20 = -5121764190577519356LL;
short var_21 = (short)-28545;
void init() {
}

void checksum() {
    value_mismatch |= var_19 != (short)0;
    value_mismatch |= var_20 != 2918427127630599428LL;
    value_mismatch |= var_21 != (short)-28545;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_17, zero, &var_19, &var_20, &var_21);
  checksum();
  assert(!value_mismatch);
}
