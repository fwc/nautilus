/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 7601
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=7601
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
void test(val<long long int> var_14, val<long long int> var_17, val<int> zero, val<short*> var_19, val<short*> var_20, val<short*> var_21, val<long long int*> var_22) {
    *var_19 = ((/* implicit */val<short>) max((*var_19), (((/* implicit */val<short>) max((var_17), (((((/* implicit */val<bool>) 1287482622858743427LL)) ? (((/* implicit */val<long long int>) ((/* implicit */val<int>) (val<short>)20577))) : (4555397710753938106LL))))))));
    *var_20 = ((/* implicit */val<short>) 658491688504260981LL);
    *var_21 &= ((/* implicit */val<short>) (~((~(((val<long long int>) var_14))))));
    *var_22 = var_14;
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_14 = 7191358648040021600LL;
long long int var_17 = -864637797112306069LL;
int zero = 0;
short var_19 = (short)22317;
short var_20 = (short)-14793;
short var_21 = (short)25956;
long long int var_22 = 6437582676564636837LL;
void init() {
}

void checksum() {
    value_mismatch |= var_19 != (short)22317;
    value_mismatch |= var_20 != (short)-1675;
    value_mismatch |= var_21 != (short)17504;
    value_mismatch |= var_22 != 7191358648040021600LL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_14, var_17, zero, &var_19, &var_20, &var_21, &var_22);
  checksum();
}
