/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 4432
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=4432
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
void test(val<long long int> var_0, val<int> var_2, val<int> var_14, val<int> var_15, val<int> zero, val<unsigned int*> var_17, val<int*> var_18) {
    *var_17 = ((((/* implicit */val<unsigned int>) ((/* implicit */val<int>) (val<unsigned short>)12567))) / (2415390583U));
    *var_18 = ((/* implicit */val<int>) min((((min((var_0), (((/* implicit */val<long long int>) (val<unsigned short>)52948)))) - (((/* implicit */val<long long int>) ((((/* implicit */val<bool>) var_2)) ? (var_14) : (((/* implicit */val<int>) (val<unsigned short>)52966))))))), (((/* implicit */val<long long int>) var_15))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 3072267261610766997LL;
int var_2 = 1848554264;
int var_14 = -2076742300;
int var_15 = -419374640;
int zero = 0;
unsigned int var_17 = 1777942606U;
int var_18 = -551723290;
void init() {
}

void checksum() {
    value_mismatch |= var_17 != 0U;
    value_mismatch |= var_18 != -419374640;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_2, var_14, var_15, zero, &var_17, &var_18);
  checksum();
  assert(!value_mismatch);
}
