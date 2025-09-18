/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 23
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=23
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
void test(val<bool> var_1, val<unsigned long long int> var_7, val<long long int> var_13, val<int> zero, val<bool*> var_16, val<int*> var_17) {
    *var_16 = ((val<bool>) var_1);
    *var_17 = ((/* implicit */val<int>) ((((/* implicit */val<bool>) ((((/* implicit */val<bool>) max((((/* implicit */val<long long int>) (val<bool>)1)), (var_13)))) ? ((~(var_7))) : (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) (val<bool>)1)))))) || (((/* implicit */val<bool>) 15492488328779036515ULL))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

bool var_1 = (bool)0;
unsigned long long int var_7 = 18199934264400157795ULL;
long long int var_13 = -6864619510465794380LL;
int zero = 0;
bool var_16 = (bool)1;
int var_17 = 60677697;
void init() {
}

void checksum() {
    value_mismatch |= var_16 != (bool)0;
    value_mismatch |= var_17 != 1;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_7, var_13, zero, &var_16, &var_17);
  checksum();
}
