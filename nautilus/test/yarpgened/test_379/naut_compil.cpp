/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 379
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=379
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
void test(val<unsigned char> var_6, val<int> zero, val<unsigned char*> var_18, val<bool*> var_19, val<short*> var_20) {
    *var_18 = ((/* implicit */val<unsigned char>) min((*var_18), (((/* implicit */val<unsigned char>) (val<bool>)1))));
    *var_19 &= ((((/* implicit */val<int>) (val<bool>)1)) > (((/* implicit */val<int>) (val<unsigned char>)132)));
    *var_20 -= ((/* implicit */val<short>) (+(((/* implicit */val<int>) var_6))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_6 = (unsigned char)248;
int zero = 0;
unsigned char var_18 = (unsigned char)69;
bool var_19 = (bool)0;
short var_20 = (short)-18188;
void init() {
}

void checksum() {
    value_mismatch |= var_18 != (unsigned char)1;
    value_mismatch |= var_19 != (bool)0;
    value_mismatch |= var_20 != (short)-18436;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_6, zero, &var_18, &var_19, &var_20);
  checksum();
  assert(!value_mismatch);
}
