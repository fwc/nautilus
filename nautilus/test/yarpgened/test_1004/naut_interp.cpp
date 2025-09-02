/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 1004
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=1004
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
void test(val<int> var_3, val<signed char> var_8, val<short> var_11, val<short> var_14, val<int> zero, val<unsigned int*> var_17, val<short*> var_18, val<unsigned long long int*> var_19, val<unsigned int*> var_20) {
    *var_17 -= ((/* implicit */val<unsigned int>) ((((/* implicit */val<bool>) var_8)) ? (var_3) : (((/* implicit */val<int>) var_14))));
    *var_18 = ((/* implicit */val<short>) var_8);
    *var_19 = ((/* implicit */val<unsigned long long int>) -243666425);
    *var_20 = ((/* implicit */val<unsigned int>) var_11);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = -1569320688;
signed char var_8 = (signed char)92;
short var_11 = (short)3760;
short var_14 = (short)-23136;
int zero = 0;
unsigned int var_17 = 3246082539U;
short var_18 = (short)-11778;
unsigned long long int var_19 = 7631990198650884714ULL;
unsigned int var_20 = 1616989475U;
void init() {
}

void checksum() {
    value_mismatch |= var_17 != 520435931U;
    value_mismatch |= var_18 != (short)92;
    value_mismatch |= var_19 != 18446744073465885191ULL;
    value_mismatch |= var_20 != 3760U;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_3, var_8, var_11, var_14, zero, &var_17, &var_18, &var_19, &var_20);
  checksum();
  assert(!value_mismatch);
}
