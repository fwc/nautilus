/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 1667
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=1667
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
void test(val<bool> var_0, val<signed char> var_3, val<short> var_6, val<int> var_9, val<unsigned int> var_13, val<int> zero, val<int*> var_14, val<unsigned char*> var_15, val<short*> var_16) {
    *var_14 += ((/* implicit */val<int>) max((3889059570855310415LL), (((/* implicit */val<long long int>) (val<unsigned char>)255))));
    *var_15 -= ((/* implicit */val<unsigned char>) max((((/* implicit */val<unsigned int>) max((((((/* implicit */val<bool>) var_9)) ? (((/* implicit */val<int>) var_0)) : (((/* implicit */val<int>) var_0)))), (((/* implicit */val<int>) var_6))))), (var_13)));
    *var_16 -= ((/* implicit */val<short>) max((((((/* implicit */val<unsigned int>) (-(var_9)))) - (var_13))), (((/* implicit */val<unsigned int>) ((((/* implicit */val<int>) var_3)) + (((/* implicit */val<int>) (!(((/* implicit */val<bool>) (val<unsigned short>)31))))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

bool var_0 = (bool)1;
signed char var_3 = (signed char)-50;
short var_6 = (short)-25533;
int var_9 = 977336986;
unsigned int var_13 = 1483098376U;
int zero = 0;
int var_14 = -218335539;
unsigned char var_15 = (unsigned char)146;
short var_16 = (short)17482;
void init() {
}

void checksum() {
    value_mismatch |= var_14 != 170289948;
    value_mismatch |= var_15 != (unsigned char)138;
    value_mismatch |= var_16 != (short)17532;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_3, var_6, var_9, var_13, zero, &var_14, &var_15, &var_16);
  checksum();
  assert(!value_mismatch);
}
