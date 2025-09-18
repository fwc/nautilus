/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 3780
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=3780
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
void test(val<signed char> var_0, val<signed char> var_1, val<int> var_8, val<int> zero, val<unsigned long long int*> var_10, val<unsigned long long int*> var_11) {
    *var_10 = ((/* implicit */val<unsigned long long int>) (+(9063550309616088584LL)));
    *var_11 = ((/* implicit */val<unsigned long long int>) ((((/* implicit */val<bool>) ((((/* implicit */val<int>) max((((/* implicit */val<unsigned short>) var_1)), ((val<unsigned short>)64204)))) - (var_8)))) ? (((max((-6494144004992180441LL), (9063550309616088584LL))) << (((((((/* implicit */val<int>) var_0)) + (102))) - (17))))) : (((/* implicit */val<long long int>) ((/* implicit */val<int>) var_1)))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-85;
signed char var_1 = (signed char)-102;
int var_8 = -1478412969;
int zero = 0;
unsigned long long int var_10 = 8192141968531535707ULL;
unsigned long long int var_11 = 17536843392407169456ULL;
void init() {
}

void checksum() {
    value_mismatch |= var_10 != 9063550309616088584ULL;
    value_mismatch |= var_11 != 9063550309616088584ULL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_8, zero, &var_10, &var_11);
  checksum();
}
