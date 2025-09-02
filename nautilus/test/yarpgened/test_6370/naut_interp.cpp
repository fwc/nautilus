/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 6370
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=6370
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
void test(val<int> var_0, val<int> var_3, val<int> var_4, val<int> var_6, val<int> var_8, val<int> var_12, val<int> var_13, val<int> var_17, val<int> zero, val<int*> var_18, val<int*> var_19) {
    *var_18 = var_12;
    *var_19 = ((/* implicit */val<int>) min((*var_19), (((((/* implicit */val<bool>) min((((((/* implicit */val<bool>) var_3)) ? (var_17) : (var_8))), (var_4)))) ? (((var_0) + (var_6))) : (((((/* implicit */val<bool>) (-(4193280)))) ? (var_13) : (((/* implicit */val<int>) ((var_8) != (var_3))))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1691883288;
int var_3 = 1679512845;
int var_4 = 283649776;
int var_6 = 318575821;
int var_8 = -600494511;
int var_12 = 1964873484;
int var_13 = 9307207;
int var_17 = 1506604416;
int zero = 0;
int var_18 = 801880859;
int var_19 = 798138517;
void init() {
}

void checksum() {
    value_mismatch |= var_18 != 1964873484;
    value_mismatch |= var_19 != 798138517;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_3, var_4, var_6, var_8, var_12, var_13, var_17, zero, &var_18, &var_19);
  checksum();
  assert(!value_mismatch);
}
