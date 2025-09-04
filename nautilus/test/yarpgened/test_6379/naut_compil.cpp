/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 6379
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=6379
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
void test(val<short> var_1, val<int> var_10, val<unsigned long long int> var_12, val<int> zero, val<bool*> var_14, val<unsigned long long int*> var_15, val<long long int*> var_16) {
    *var_14 = ((/* implicit */val<bool>) var_12);
    *var_15 = ((/* implicit */val<unsigned long long int>) var_1);
    *var_16 = ((/* implicit */val<long long int>) min((*var_16), (((/* implicit */val<long long int>) (~(((((/* implicit */val<int>) (!(((/* implicit */val<bool>) var_10))))) ^ (((((((/* implicit */val<int>) (val<signed char>)-70)) + (2147483647))) >> (((((/* implicit */val<int>) (val<short>)13706)) - (13697))))))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)18554;
int var_10 = -1899359041;
unsigned long long int var_12 = 7325385164772927325ULL;
int zero = 0;
bool var_14 = (bool)1;
unsigned long long int var_15 = 3364109646224064502ULL;
long long int var_16 = -248995189298673017LL;
void init() {
}

void checksum() {
    value_mismatch |= var_14 != (bool)1;
    value_mismatch |= var_15 != 18554ULL;
    value_mismatch |= var_16 != -248995189298673017LL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_10, var_12, zero, &var_14, &var_15, &var_16);
  checksum();
  assert(!value_mismatch);
}
