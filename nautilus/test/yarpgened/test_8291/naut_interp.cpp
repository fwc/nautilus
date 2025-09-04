/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 8291
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=8291
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
void test(val<short> var_0, val<unsigned char> var_1, val<unsigned char> var_4, val<unsigned int> var_6, val<int> var_7, val<int> var_8, val<unsigned int> var_9, val<unsigned long long int> var_10, val<unsigned long long int> var_13, val<unsigned long long int> var_15, val<int> zero, val<unsigned short*> var_19, val<short*> var_20) {
    *var_19 = ((/* implicit */val<unsigned short>) (((+(var_10))) + (((/* implicit */val<unsigned long long int>) ((var_6) | ((-(var_9))))))));
    *var_20 = ((/* implicit */val<short>) ((((/* implicit */val<bool>) max((((((/* implicit */val<int>) var_1)) / (var_8))), (((((/* implicit */val<int>) var_0)) - (var_8)))))) ? (((val<unsigned long long int>) var_4)) : (max((((((/* implicit */val<bool>) (val<unsigned short>)33842)) ? (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_0))) : (var_15))), (max((((/* implicit */val<unsigned long long int>) var_7)), (var_13)))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-10533;
unsigned char var_1 = (unsigned char)23;
unsigned char var_4 = (unsigned char)155;
unsigned int var_6 = 2071506594U;
int var_7 = -1610479759;
int var_8 = 577700902;
unsigned int var_9 = 756944531U;
unsigned long long int var_10 = 8570265587594352114ULL;
unsigned long long int var_13 = 7867269916700383507ULL;
unsigned long long int var_15 = 11976254036309198222ULL;
int zero = 0;
unsigned short var_19 = (unsigned short)63090;
short var_20 = (short)-30482;
void init() {
}

void checksum() {
    value_mismatch |= var_19 != (unsigned short)54753;
    value_mismatch |= var_20 != (short)-10533;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_4, var_6, var_7, var_8, var_9, var_10, var_13, var_15, zero, &var_19, &var_20);
  checksum();
  assert(!value_mismatch);
}
