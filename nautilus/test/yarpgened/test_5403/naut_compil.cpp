/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 5403
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=5403
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
void test(val<bool> var_4, val<unsigned char> var_7, val<short> var_9, val<int> zero, val<short*> var_15, val<unsigned char*> var_16, val<unsigned short*> var_17) {
    *var_15 = ((/* implicit */val<short>) min((*var_15), (((/* implicit */val<short>) ((((/* implicit */val<bool>) var_9)) ? (((/* implicit */val<int>) (val<unsigned char>)180)) : (((/* implicit */val<int>) ((val<bool>) -8769818850789195119LL))))))));
    *var_16 = ((/* implicit */val<unsigned char>) max((*var_16), (((/* implicit */val<unsigned char>) (+(((/* implicit */val<int>) var_4)))))));
    *var_17 = ((/* implicit */val<unsigned short>) var_7);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

bool var_4 = (bool)0;
unsigned char var_7 = (unsigned char)59;
short var_9 = (short)9019;
int zero = 0;
short var_15 = (short)4708;
unsigned char var_16 = (unsigned char)19;
unsigned short var_17 = (unsigned short)63542;
void init() {
}

void checksum() {
    value_mismatch |= var_15 != (short)180;
    value_mismatch |= var_16 != (unsigned char)19;
    value_mismatch |= var_17 != (unsigned short)59;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_4, var_7, var_9, zero, &var_15, &var_16, &var_17);
  checksum();
  assert(!value_mismatch);
}
