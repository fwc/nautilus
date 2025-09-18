/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 3447
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=3447
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
void test(val<long long int> var_1, val<unsigned char> var_5, val<long long int> var_7, val<int> zero, val<unsigned short*> var_16, val<unsigned short*> var_17, val<short*> var_18, val<long long int*> var_19, val<long long int*> var_20) {
    *var_16 = ((/* implicit */val<unsigned short>) -144794608);
    *var_17 = ((/* implicit */val<unsigned short>) min((max((((/* implicit */val<long long int>) (val<unsigned char>)109)), (var_1))), (var_7)));
    *var_18 = ((/* implicit */val<short>) min((((/* implicit */val<long long int>) (val<unsigned short>)32817)), (-8766699614644612234LL)));
    *var_19 = ((/* implicit */val<long long int>) var_5);
    *var_20 = ((/* implicit */val<long long int>) max((*var_20), (min((((/* implicit */val<long long int>) 894184938)), ((-(-8766699614644612234LL)))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -6260591311347238371LL;
unsigned char var_5 = (unsigned char)39;
long long int var_7 = -8995892542356429457LL;
int zero = 0;
unsigned short var_16 = (unsigned short)46912;
unsigned short var_17 = (unsigned short)593;
short var_18 = (short)17539;
long long int var_19 = 3024394125038698820LL;
long long int var_20 = 5259605517811187992LL;
void init() {
}

void checksum() {
    value_mismatch |= var_16 != (unsigned short)39952;
    value_mismatch |= var_17 != (unsigned short)25967;
    value_mismatch |= var_18 != (short)-11402;
    value_mismatch |= var_19 != 39LL;
    value_mismatch |= var_20 != 5259605517811187992LL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_5, var_7, zero, &var_16, &var_17, &var_18, &var_19, &var_20);
  checksum();
}
