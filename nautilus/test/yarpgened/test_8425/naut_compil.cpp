/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 8425
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=8425
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
void test(val<unsigned short> var_0, val<short> var_2, val<unsigned long long int> var_3, val<long long int> var_6, val<short> var_7, val<int> zero, val<int*> var_12, val<bool*> var_13, val<bool*> var_14) {
    *var_12 = ((/* implicit */val<int>) var_0);
    *var_13 = ((/* implicit */val<bool>) max((*var_13), (((/* implicit */val<bool>) ((((/* implicit */val<bool>) min((9768219970691129250ULL), (((/* implicit */val<unsigned long long int>) 2009628363U))))) ? (var_3) : (((/* implicit */val<unsigned long long int>) ((((/* implicit */val<bool>) (val<short>)-6400)) ? (((/* implicit */val<long long int>) ((((/* implicit */val<int>) (val<signed char>)118)) + (((/* implicit */val<int>) var_2))))) : (max((((/* implicit */val<long long int>) -1165178014)), (var_6)))))))))));
    *var_14 = ((/* implicit */val<bool>) var_7);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)41715;
short var_2 = (short)21159;
unsigned long long int var_3 = 13860386436826774030ULL;
long long int var_6 = -6567026739451597044LL;
short var_7 = (short)-20289;
int zero = 0;
int var_12 = -1755479585;
bool var_13 = (bool)1;
bool var_14 = (bool)0;
void init() {
}

void checksum() {
    value_mismatch |= var_12 != 41715;
    value_mismatch |= var_13 != (bool)1;
    value_mismatch |= var_14 != (bool)1;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_2, var_3, var_6, var_7, zero, &var_12, &var_13, &var_14);
  checksum();
  assert(!value_mismatch);
}
