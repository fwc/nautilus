/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 7253
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=7253
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
void test(val<unsigned long long int> var_0, val<int> var_6, val<int> zero, val<short*> var_12, val<unsigned int*> var_13, val<unsigned short*> var_14, val<bool*> var_15) {
    *var_12 = ((/* implicit */val<short>) var_6);
    *var_13 = ((/* implicit */val<unsigned int>) var_0);
    *var_14 = ((/* implicit */val<unsigned short>) max((*var_14), (((/* implicit */val<unsigned short>) ((((/* implicit */val<long long int>) ((/* implicit */val<int>) (val<unsigned char>)0))) * ((-(-1174663494539811022LL))))))));
    *var_15 = ((/* implicit */val<bool>) max((1527625685U), (((/* implicit */val<unsigned int>) (val<bool>)1))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 6288041678739520662ULL;
int var_6 = 1036709955;
int zero = 0;
short var_12 = (short)-14937;
unsigned int var_13 = 2607067046U;
unsigned short var_14 = (unsigned short)24655;
bool var_15 = (bool)0;
void init() {
}

void checksum() {
    value_mismatch |= var_12 != (short)-4029;
    value_mismatch |= var_13 != 1646181526U;
    value_mismatch |= var_14 != (unsigned short)24655;
    value_mismatch |= var_15 != (bool)1;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_6, zero, &var_12, &var_13, &var_14, &var_15);
  checksum();
  assert(!value_mismatch);
}
