/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 7290
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=7290
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
void test(val<long long int> var_4, val<short> var_12, val<int> zero, val<int*> var_15, val<bool*> var_16) {
    *var_15 = ((/* implicit */val<int>) ((((val<long long int>) 7106158240490884694LL)) + (((/* implicit */val<long long int>) ((/* implicit */val<int>) ((val<bool>) ((val<unsigned char>) var_12)))))));
    *var_16 = ((/* implicit */val<bool>) min((*var_16), (((/* implicit */val<bool>) var_4))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = 7295396179128946075LL;
short var_12 = (short)-8562;
int zero = 0;
int var_15 = -1872262226;
bool var_16 = (bool)0;
void init() {
}

void checksum() {
    value_mismatch |= var_15 != 170692183;
    value_mismatch |= var_16 != (bool)0;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_4, var_12, zero, &var_15, &var_16);
  checksum();
  assert(!value_mismatch);
}
