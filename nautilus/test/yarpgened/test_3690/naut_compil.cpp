/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 3690
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=3690
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
void test(val<int> var_4, val<int> var_5, val<int> var_7, val<unsigned long long int> var_12, val<int> zero, val<unsigned long long int*> var_19, val<int*> var_20) {
    *var_19 = ((((/* implicit */val<bool>) ((((/* implicit */val<bool>) (-(405320975)))) ? (-1315443832) : (-405320952)))) ? (((/* implicit */val<unsigned long long int>) var_7)) : (var_12));
    *var_20 = ((/* implicit */val<int>) ((((/* implicit */val<bool>) ((val<short>) max((var_7), (var_5))))) ? (((/* implicit */val<unsigned int>) var_7)) : (min(((-(417952614U))), (((/* implicit */val<unsigned int>) var_4))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_4 = -987494490;
int var_5 = -1874350196;
int var_7 = 682517660;
unsigned long long int var_12 = 10264198257240270381ULL;
int zero = 0;
unsigned long long int var_19 = 5690927837952650592ULL;
int var_20 = 192939037;
void init() {
}

void checksum() {
    value_mismatch |= var_19 != 682517660ULL;
    value_mismatch |= var_20 != 682517660;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_4, var_5, var_7, var_12, zero, &var_19, &var_20);
  checksum();
}
