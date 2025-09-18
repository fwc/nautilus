/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 7719
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=7719
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
void test(val<short> var_12, val<long long int> var_13, val<int> zero, val<short*> var_20, val<unsigned char*> var_21, val<unsigned short*> var_22) {
    *var_20 = var_12;
    *var_21 = ((/* implicit */val<unsigned char>) (!(((/* implicit */val<bool>) (((~(((/* implicit */val<int>) (val<short>)-1)))) % (((/* implicit */val<int>) var_12)))))));
    *var_22 ^= ((/* implicit */val<unsigned short>) max(((~(((((/* implicit */val<long long int>) 617072620)) ^ (var_13))))), (((/* implicit */val<long long int>) var_12))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_12 = (short)15110;
long long int var_13 = 3385327768548517499LL;
int zero = 0;
short var_20 = (short)-29644;
unsigned char var_21 = (unsigned char)188;
unsigned short var_22 = (unsigned short)19159;
void init() {
}

void checksum() {
    value_mismatch |= var_20 != (short)15110;
    value_mismatch |= var_21 != (unsigned char)1;
    value_mismatch |= var_22 != (unsigned short)29137;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_12, var_13, zero, &var_20, &var_21, &var_22);
  checksum();
}
