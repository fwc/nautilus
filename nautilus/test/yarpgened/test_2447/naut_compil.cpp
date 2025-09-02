/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 2447
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=2447
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
void test(val<long long int> var_0, val<signed char> var_3, val<signed char> var_6, val<int> zero, val<short*> var_10, val<long long int*> var_11) {
    *var_10 = ((/* implicit */val<short>) ((val<unsigned int>) (+(((/* implicit */val<int>) (val<bool>)1)))));
    *var_11 = ((/* implicit */val<long long int>) min((*var_11), (((/* implicit */val<long long int>) ((((((((/* implicit */val<bool>) -331208359)) ? (((/* implicit */val<long long int>) ((/* implicit */val<int>) var_6))) : (var_0))) < (var_0))) ? (((((/* implicit */val<bool>) ((((/* implicit */val<bool>) (val<signed char>)125)) ? (3181255757U) : (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) (val<unsigned char>)8)))))) ? (max((((/* implicit */val<unsigned long long int>) -533796840)), (4595230004836355522ULL))) : (((/* implicit */val<unsigned long long int>) ((((/* implicit */val<int>) (val<unsigned char>)252)) & (((/* implicit */val<int>) var_3))))))) : (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_3))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 490670096430204508LL;
signed char var_3 = (signed char)117;
signed char var_6 = (signed char)90;
int zero = 0;
short var_10 = (short)-13108;
long long int var_11 = -2056339005047926632LL;
void init() {
}

void checksum() {
    value_mismatch |= var_10 != (short)1;
    value_mismatch |= var_11 != -2056339005047926632LL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_3, var_6, zero, &var_10, &var_11);
  checksum();
  assert(!value_mismatch);
}
