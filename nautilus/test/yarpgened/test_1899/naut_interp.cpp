/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 1899
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=1899
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
void test(val<unsigned int> var_2, val<int> var_4, val<unsigned char> var_5, val<unsigned int> var_6, val<unsigned int> var_10, val<int> zero, val<short*> var_11, val<bool*> var_12, val<unsigned char*> var_13, val<int*> var_14) {
    *var_11 = ((/* implicit */val<short>) ((((((/* implicit */val<bool>) var_10)) ? (var_2) : (var_6))) <= (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) (!((!(((/* implicit */val<bool>) var_5))))))))));
    *var_12 = ((/* implicit */val<bool>) (+(var_10)));
    *var_13 = ((/* implicit */val<unsigned char>) (val<short>)12);
    *var_14 = ((/* implicit */val<int>) max((*var_14), (((((((((/* implicit */val<bool>) (val<short>)6)) ? (var_6) : (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) (val<short>)-2))))) < (((((/* implicit */val<unsigned int>) ((/* implicit */val<int>) (val<bool>)1))) * (var_6))))) ? (((/* implicit */val<int>) ((val<short>) ((val<unsigned char>) var_5)))) : (((/* implicit */val<int>) (!(((/* implicit */val<bool>) (~(var_4)))))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 448921535U;
int var_4 = -725986086;
unsigned char var_5 = (unsigned char)219;
unsigned int var_6 = 3373169289U;
unsigned int var_10 = 729800401U;
int zero = 0;
short var_11 = (short)-6048;
bool var_12 = (bool)1;
unsigned char var_13 = (unsigned char)141;
int var_14 = 1123964590;
void init() {
}

void checksum() {
    value_mismatch |= var_11 != (short)0;
    value_mismatch |= var_12 != (bool)1;
    value_mismatch |= var_13 != (unsigned char)12;
    value_mismatch |= var_14 != 1123964590;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_2, var_4, var_5, var_6, var_10, zero, &var_11, &var_12, &var_13, &var_14);
  checksum();
  assert(!value_mismatch);
}
