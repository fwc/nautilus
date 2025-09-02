/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 5347
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=5347
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
void test(val<int> var_1, val<int> var_8, val<unsigned short> var_9, val<long long int> var_10, val<unsigned short> var_11, val<short> var_12, val<int> zero, val<unsigned short*> var_13, val<short*> var_14, val<int*> var_15, val<unsigned int*> var_16, val<short*> var_17) {
    *var_13 = ((/* implicit */val<unsigned short>) var_8);
    *var_14 = ((/* implicit */val<short>) var_9);
    *var_15 |= ((/* implicit */val<int>) min((((/* implicit */val<unsigned long long int>) max((min((var_10), (((/* implicit */val<long long int>) var_11)))), (((/* implicit */val<long long int>) min((var_1), (((/* implicit */val<int>) (val<short>)-17159)))))))), (((val<unsigned long long int>) (!(((/* implicit */val<bool>) 0LL)))))));
    *var_16 = ((/* implicit */val<unsigned int>) var_12);
    *var_17 = ((/* implicit */val<short>) max((*var_17), (((/* implicit */val<short>) var_11))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 601071121;
int var_8 = -748673604;
unsigned short var_9 = (unsigned short)23260;
long long int var_10 = 4759713773314284037LL;
unsigned short var_11 = (unsigned short)18138;
short var_12 = (short)5242;
int zero = 0;
unsigned short var_13 = (unsigned short)44516;
short var_14 = (short)-9414;
int var_15 = -738898302;
unsigned int var_16 = 3098000984U;
short var_17 = (short)-15510;
void init() {
}

void checksum() {
    value_mismatch |= var_13 != (unsigned short)9660;
    value_mismatch |= var_14 != (short)23260;
    value_mismatch |= var_15 != -738898301;
    value_mismatch |= var_16 != 5242U;
    value_mismatch |= var_17 != (short)18138;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_8, var_9, var_10, var_11, var_12, zero, &var_13, &var_14, &var_15, &var_16, &var_17);
  checksum();
  assert(!value_mismatch);
}
