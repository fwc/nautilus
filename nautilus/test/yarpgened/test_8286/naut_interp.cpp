/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 8286
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=8286
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
void test(val<unsigned int> var_1, val<unsigned int> var_2, val<long long int> var_4, val<int> var_11, val<int> zero, val<long long int*> var_14, val<short*> var_15, val<unsigned int*> var_16, val<unsigned long long int*> var_17, val<long long int*> var_18) {
    *var_14 |= ((/* implicit */val<long long int>) var_1);
    *var_15 = ((/* implicit */val<short>) var_2);
    if (((/* implicit */val<bool>) (~(var_11))))
    {
        *var_16 = ((/* implicit */val<unsigned int>) min((*var_16), (((/* implicit */val<unsigned int>) var_4))));
        *var_17 = ((/* implicit */val<unsigned long long int>) (+(var_1)));
    }

    *var_18 = ((/* implicit */val<long long int>) var_2);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 169481517U;
unsigned int var_2 = 2965996144U;
long long int var_4 = 958690686490808498LL;
int var_11 = 1164331449;
int zero = 0;
long long int var_14 = 7533939534659112781LL;
short var_15 = (short)27820;
unsigned int var_16 = 2047958920U;
unsigned long long int var_17 = 3771993766059838433ULL;
long long int var_18 = -2359723037902061835LL;
void init() {
}

void checksum() {
    value_mismatch |= var_14 != 7533939534660820845LL;
    value_mismatch |= var_15 != (short)-32144;
    value_mismatch |= var_16 != 2047958920U;
    value_mismatch |= var_17 != 169481517ULL;
    value_mismatch |= var_18 != 2965996144LL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_2, var_4, var_11, zero, &var_14, &var_15, &var_16, &var_17, &var_18);
  checksum();
  assert(!value_mismatch);
}
