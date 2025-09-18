/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 7574
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=7574
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
void test(val<signed char> var_0, val<signed char> var_2, val<long long int> var_3, val<long long int> var_7, val<signed char> var_8, val<unsigned long long int> var_10, val<int> zero, val<long long int*> var_17, val<unsigned long long int*> var_18, val<unsigned long long int*> var_19) {
    *var_17 -= min((((/* implicit */val<long long int>) (val<signed char>)-1)), (9054507157252619352LL));
    *var_18 = ((/* implicit */val<unsigned long long int>) ((val<long long int>) min((min((((/* implicit */val<unsigned long long int>) var_3)), (var_10))), (((/* implicit */val<unsigned long long int>) min((var_0), (var_2)))))));
    *var_19 |= min((min((((val<unsigned long long int>) -8412207022155517613LL)), (((val<unsigned long long int>) var_0)))), (((/* implicit */val<unsigned long long int>) min((max((var_7), (((/* implicit */val<long long int>) var_8)))), (((/* implicit */val<long long int>) ((val<signed char>) 8204209409605876248LL)))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)114;
signed char var_2 = (signed char)18;
long long int var_3 = -7731992932903468066LL;
long long int var_7 = 6214367474983202779LL;
signed char var_8 = (signed char)54;
unsigned long long int var_10 = 12130639659227886268ULL;
int zero = 0;
long long int var_17 = -6222618239010711475LL;
unsigned long long int var_18 = 14867044693705918745ULL;
unsigned long long int var_19 = 17340480043314239881ULL;
void init() {
}

void checksum() {
    value_mismatch |= var_17 != -6222618239010711474LL;
    value_mismatch |= var_18 != 18ULL;
    value_mismatch |= var_19 != 17340480043314239897ULL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_2, var_3, var_7, var_8, var_10, zero, &var_17, &var_18, &var_19);
  checksum();
}
