/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 4528
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=4528
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
void test(val<bool> var_0, val<unsigned long long int> var_8, val<unsigned short> var_9, val<int> zero, val<bool*> var_10, val<short*> var_11, val<bool*> var_12, val<unsigned short*> var_13) {
    *var_10 = var_0;
    *var_11 = ((/* implicit */val<short>) var_0);
    *var_12 = ((/* implicit */val<bool>) var_8);
    *var_13 = ((/* implicit */val<unsigned short>) max(((val<bool>)0), ((!(((/* implicit */val<bool>) var_9))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

bool var_0 = (bool)0;
unsigned long long int var_8 = 7271176812669225755ULL;
unsigned short var_9 = (unsigned short)1216;
int zero = 0;
bool var_10 = (bool)1;
short var_11 = (short)-11712;
bool var_12 = (bool)1;
unsigned short var_13 = (unsigned short)55468;
void init() {
}

void checksum() {
    value_mismatch |= var_10 != (bool)0;
    value_mismatch |= var_11 != (short)0;
    value_mismatch |= var_12 != (bool)1;
    value_mismatch |= var_13 != (unsigned short)0;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_8, var_9, zero, &var_10, &var_11, &var_12, &var_13);
  checksum();
  assert(!value_mismatch);
}
