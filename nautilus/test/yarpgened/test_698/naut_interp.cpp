/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 698
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=698
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
void test(val<unsigned int> var_3, val<unsigned short> var_8, val<short> var_9, val<unsigned short> var_11, val<short> var_12, val<unsigned char> var_13, val<int> zero, val<int*> var_14, val<unsigned short*> var_15, val<signed char*> var_16) {
    *var_14 = ((/* implicit */val<int>) min((*var_14), (((/* implicit */val<int>) ((val<unsigned int>) ((((/* implicit */val<bool>) min(((val<unsigned short>)61674), (var_11)))) ? (((/* implicit */val<int>) var_13)) : (((/* implicit */val<int>) ((((/* implicit */val<int>) var_12)) >= (((/* implicit */val<int>) var_8)))))))))));
    *var_15 = ((/* implicit */val<unsigned short>) var_9);
    *var_16 += ((/* implicit */val<signed char>) (((~(((val<int>) (val<short>)5015)))) | (((/* implicit */val<int>) ((((/* implicit */val<bool>) (-(((/* implicit */val<int>) var_9))))) && (((/* implicit */val<bool>) var_3)))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 462565488U;
unsigned short var_8 = (unsigned short)3701;
short var_9 = (short)-20046;
unsigned short var_11 = (unsigned short)17084;
short var_12 = (short)-25140;
unsigned char var_13 = (unsigned char)10;
int zero = 0;
int var_14 = -1081320137;
unsigned short var_15 = (unsigned short)51961;
signed char var_16 = (signed char)127;
void init() {
}

void checksum() {
    value_mismatch |= var_14 != -1081320137;
    value_mismatch |= var_15 != (unsigned short)45490;
    value_mismatch |= var_16 != (signed char)-24;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_3, var_8, var_9, var_11, var_12, var_13, zero, &var_14, &var_15, &var_16);
  checksum();
}
