/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 7483
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=7483
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
void test(val<long long int> var_1, val<long long int> var_8, val<unsigned long long int> var_10, val<int> zero, val<long long int*> var_14, val<unsigned long long int*> var_15) {
    *var_14 = ((/* implicit */val<long long int>) max((*var_14), (((/* implicit */val<long long int>) ((((/* implicit */val<bool>) ((((/* implicit */val<bool>) max((var_1), (-1LL)))) ? ((~(var_8))) : ((+(-8077841044391657715LL)))))) ? (((/* implicit */val<unsigned long long int>) var_8)) : (var_10))))));
    *var_15 = ((/* implicit */val<unsigned long long int>) (!(((/* implicit */val<bool>) (~(4638894904623655574LL))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 626543624196163105LL;
long long int var_8 = -6623070590562885255LL;
unsigned long long int var_10 = 15145336513991782531ULL;
int zero = 0;
long long int var_14 = 5355633775645466877LL;
unsigned long long int var_15 = 5268184686658487140ULL;
void init() {
}

void checksum() {
    value_mismatch |= var_14 != 5355633775645466877LL;
    value_mismatch |= var_15 != 0ULL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_8, var_10, zero, &var_14, &var_15);
  checksum();
  assert(!value_mismatch);
}
