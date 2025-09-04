/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 9682
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=9682
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
void test(val<int> var_4, val<bool> var_6, val<int> zero, val<int*> var_16, val<long long int*> var_17) {
    *var_16 = (~(((/* implicit */val<int>) ((((/* implicit */val<bool>) ((((/* implicit */val<bool>) 1870672363U)) ? (((/* implicit */val<int>) (val<unsigned char>)39)) : (((/* implicit */val<int>) var_6))))) && (((/* implicit */val<bool>) 0LL))))));
    *var_17 -= ((/* implicit */val<long long int>) max((((/* implicit */val<unsigned char>) ((val<signed char>) var_4))), ((val<unsigned char>)205)));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_4 = -1905239347;
bool var_6 = (bool)1;
int zero = 0;
int var_16 = 773614978;
long long int var_17 = 1084351972813762986LL;
void init() {
}

void checksum() {
    value_mismatch |= var_16 != -1;
    value_mismatch |= var_17 != 1084351972813762781LL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_4, var_6, zero, &var_16, &var_17);
  checksum();
  assert(!value_mismatch);
}
