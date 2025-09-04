/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 7663
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=7663
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
void test(val<signed char> var_0, val<short> var_1, val<signed char> var_2, val<unsigned int> var_4, val<unsigned short> var_6, val<unsigned char> var_8, val<unsigned short> var_9, val<unsigned short> var_11, val<int> zero, val<short*> var_15, val<signed char*> var_16, val<long long int*> var_17) {
    *var_15 = ((/* implicit */val<short>) var_6);
    *var_16 = ((/* implicit */val<signed char>) ((((/* implicit */val<bool>) max(((-(-1))), ((+(((/* implicit */val<int>) var_1))))))) ? (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) (!(((/* implicit */val<bool>) ((((/* implicit */val<bool>) var_1)) ? (((/* implicit */val<unsigned int>) -1)) : (1432894505U)))))))) : (min((((((/* implicit */val<bool>) var_4)) ? (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_11))) : (var_4))), (((/* implicit */val<unsigned int>) ((((/* implicit */val<bool>) 2862072784U)) ? (((/* implicit */val<int>) var_11)) : (((/* implicit */val<int>) var_8)))))))));
    *var_17 = ((/* implicit */val<long long int>) ((((/* implicit */val<bool>) var_8)) ? (((((/* implicit */val<int>) var_0)) | (((((/* implicit */val<bool>) var_2)) ? (((/* implicit */val<int>) var_6)) : (((/* implicit */val<int>) var_11)))))) : (((/* implicit */val<int>) var_9))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-60;
short var_1 = (short)31930;
signed char var_2 = (signed char)18;
unsigned int var_4 = 3556595179U;
unsigned short var_6 = (unsigned short)37177;
unsigned char var_8 = (unsigned char)48;
unsigned short var_9 = (unsigned short)33157;
unsigned short var_11 = (unsigned short)17704;
int zero = 0;
short var_15 = (short)-28432;
signed char var_16 = (signed char)80;
long long int var_17 = -6529977463578533441LL;
void init() {
}

void checksum() {
    value_mismatch |= var_15 != (short)-28359;
    value_mismatch |= var_16 != (signed char)0;
    value_mismatch |= var_17 != -3LL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_2, var_4, var_6, var_8, var_9, var_11, zero, &var_15, &var_16, &var_17);
  checksum();
  assert(!value_mismatch);
}
