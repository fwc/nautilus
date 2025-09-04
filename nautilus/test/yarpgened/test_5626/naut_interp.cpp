/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 5626
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=5626
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
void test(val<short> var_0, val<unsigned long long int> var_10, val<int> zero, val<long long int*> var_12, val<unsigned long long int*> var_13) {
    *var_12 = ((/* implicit */val<long long int>) var_0);
    *var_13 = ((((/* implicit */val<bool>) ((val<short>) 14665591487398753982ULL))) ? (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) ((val<short>) max((3781152586310797634ULL), (3781152586310797627ULL)))))) : ((+(((10493531762214930637ULL) << (((var_10) - (6238601333522200625ULL))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)1390;
unsigned long long int var_10 = 6238601333522200631ULL;
int zero = 0;
long long int var_12 = 8477301910369112512LL;
unsigned long long int var_13 = 16699906109512738103ULL;
void init() {
}

void checksum() {
    value_mismatch |= var_12 != 1390LL;
    value_mismatch |= var_13 != 18446744073709537602ULL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_10, zero, &var_12, &var_13);
  checksum();
  assert(!value_mismatch);
}
