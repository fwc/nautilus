/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 5685
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=5685
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
void test(val<unsigned short> var_0, val<int> var_1, val<int> var_4, val<short> var_8, val<unsigned char> var_9, val<int> var_11, val<int> zero, val<unsigned short*> var_13, val<bool*> var_14, val<unsigned char*> var_15) {
    *var_13 = ((/* implicit */val<unsigned short>) ((((/* implicit */val<bool>) var_8)) ? (((((/* implicit */val<bool>) var_4)) ? (var_4) : (var_1))) : (var_11)));
    *var_14 = ((/* implicit */val<bool>) var_0);
    *var_15 = ((/* implicit */val<unsigned char>) max((*var_15), (var_9)));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)32942;
int var_1 = -1157772208;
int var_4 = -19246295;
short var_8 = (short)23733;
unsigned char var_9 = (unsigned char)114;
int var_11 = -969131485;
int zero = 0;
unsigned short var_13 = (unsigned short)11531;
bool var_14 = (bool)0;
unsigned char var_15 = (unsigned char)222;
void init() {
}

void checksum() {
    value_mismatch |= var_13 != (unsigned short)21289;
    value_mismatch |= var_14 != (bool)1;
    value_mismatch |= var_15 != (unsigned char)222;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_4, var_8, var_9, var_11, zero, &var_13, &var_14, &var_15);
  checksum();
}
