/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 7224
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=7224
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
void test(val<short> var_0, val<short> var_1, val<int> var_5, val<short> var_7, val<int> zero, val<unsigned char*> var_10, val<bool*> var_11) {
    *var_10 = ((/* implicit */val<unsigned char>) var_5);
    *var_11 = ((/* implicit */val<bool>) max((*var_11), (((/* implicit */val<bool>) (((!(((/* implicit */val<bool>) (-(((/* implicit */val<int>) var_1))))))) ? (((/* implicit */val<int>) var_7)) : (((/* implicit */val<int>) var_0)))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)16930;
short var_1 = (short)-26110;
int var_5 = 186327059;
short var_7 = (short)2666;
int zero = 0;
unsigned char var_10 = (unsigned char)93;
bool var_11 = (bool)1;
void init() {
}

void checksum() {
    value_mismatch |= var_10 != (unsigned char)19;
    value_mismatch |= var_11 != (bool)1;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_5, var_7, zero, &var_10, &var_11);
  checksum();
  assert(!value_mismatch);
}
