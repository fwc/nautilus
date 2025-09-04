/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 3883
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=3883
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
void test(val<short> var_0, val<long long int> var_2, val<unsigned long long int> var_4, val<int> var_5, val<signed char> var_8, val<long long int> var_9, val<int> zero, val<int*> var_11, val<int*> var_12) {
    *var_11 ^= ((/* implicit */val<int>) max(((+(var_2))), (((((/* implicit */val<bool>) max((((/* implicit */val<int>) var_0)), (var_5)))) ? (max((var_2), (((/* implicit */val<long long int>) 4203406352U)))) : (var_9)))));
    *var_12 -= ((/* implicit */val<int>) max((((((/* implicit */val<bool>) max((((/* implicit */val<unsigned int>) var_8)), (1489937570U)))) ? ((~(1489937571U))) : (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) ((val<short>) var_5)))))), (((/* implicit */val<unsigned int>) ((val<int>) var_4)))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)11689;
long long int var_2 = 8142316141468747461LL;
unsigned long long int var_4 = 876610361052057187ULL;
int var_5 = -1523052075;
signed char var_8 = (signed char)-40;
long long int var_9 = 5435907766738361378LL;
int zero = 0;
int var_11 = -772655094;
int var_12 = 320916013;
void init() {
}

void checksum() {
    value_mismatch |= var_11 != -589381937;
    value_mismatch |= var_12 != 1810853585;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_2, var_4, var_5, var_8, var_9, zero, &var_11, &var_12);
  checksum();
  assert(!value_mismatch);
}
