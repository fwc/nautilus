/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 450
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --seed=450
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
void test(val<int> var_2, val<int> var_3, val<bool> var_7, val<int> var_11, val<int> zero, val<bool*> var_12, val<bool*> var_13, val<int*> var_14, val<bool*> var_15) {
    *var_12 = ((/* implicit */val<bool>) min((max((8), (((/* implicit */val<int>) (!(((/* implicit */val<bool>) 1128631166))))))), (((((/* implicit */val<bool>) min((var_2), (-1606724058)))) ? ((~(((/* implicit */val<int>) (val<bool>)0)))) : (((/* implicit */val<int>) (val<bool>)1))))));
    *var_13 = ((/* implicit */val<bool>) -264546299);
    *var_14 = ((min(((val<bool>)1), ((val<bool>)1))) ? ((~(((((/* implicit */val<bool>) -2147483632)) ? (359892173) : (((/* implicit */val<int>) var_7)))))) : (var_3));
    *var_15 = ((/* implicit */val<bool>) var_11);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -1602022877;
int var_3 = 2003947719;
bool var_7 = (bool)1;
int var_11 = 1835874159;
int zero = 0;
bool var_12 = (bool)1;
bool var_13 = (bool)0;
int var_14 = -1365939997;
bool var_15 = (bool)0;
void init() {
}

void checksum() {
    value_mismatch |= var_12 != (bool)1;
    value_mismatch |= var_13 != (bool)1;
    value_mismatch |= var_14 != -359892174;
    value_mismatch |= var_15 != (bool)1;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_2, var_3, var_7, var_11, zero, &var_12, &var_13, &var_14, &var_15);
  checksum();
  assert(!value_mismatch);
}
