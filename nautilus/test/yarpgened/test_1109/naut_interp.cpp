/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 1109
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=1109
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
void test(val<signed char> var_1, val<bool> var_3, val<unsigned short> var_4, val<long long int> var_9, val<int> zero, val<unsigned long long int*> var_10, val<short*> var_11) {
    *var_10 = ((/* implicit */val<unsigned long long int>) ((((((/* implicit */val<bool>) var_9)) ? (((/* implicit */val<int>) (val<unsigned short>)13767)) : ((+(((/* implicit */val<int>) var_1)))))) << (((((((/* implicit */val<bool>) (-(((/* implicit */val<int>) var_1))))) ? (((/* implicit */val<long long int>) (+(((/* implicit */val<int>) var_4))))) : (min((((/* implicit */val<long long int>) (val<unsigned short>)13767)), (var_9))))) - (64682LL)))));
    *var_11 = ((/* implicit */val<short>) var_3);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)55;
bool var_3 = (bool)1;
unsigned short var_4 = (unsigned short)64698;
long long int var_9 = 8033500326327765357LL;
int zero = 0;
unsigned long long int var_10 = 18269565574596746851ULL;
short var_11 = (short)20393;
void init() {
}

void checksum() {
    value_mismatch |= var_10 != 902234112ULL;
    value_mismatch |= var_11 != (short)1;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_3, var_4, var_9, zero, &var_10, &var_11);
  checksum();
  assert(!value_mismatch);
}
