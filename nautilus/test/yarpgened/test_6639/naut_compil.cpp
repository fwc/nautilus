/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 6639
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=6639
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
void test(val<short> var_3, val<unsigned char> var_5, val<short> var_6, val<unsigned long long int> var_13, val<int> var_14, val<int> zero, val<unsigned long long int*> var_15, val<bool*> var_16, val<unsigned short*> var_17) {
    *var_15 *= ((/* implicit */val<unsigned long long int>) var_14);
    *var_16 = ((/* implicit */val<bool>) max((var_13), (((/* implicit */val<unsigned long long int>) var_6))));
    *var_17 = ((/* implicit */val<unsigned short>) max((((/* implicit */val<int>) ((((/* implicit */val<bool>) ((((/* implicit */val<bool>) var_5)) ? ((-2147483647 - 1)) : (((/* implicit */val<int>) (val<unsigned char>)1))))) && ((!(((/* implicit */val<bool>) 1421809879))))))), ((~(((/* implicit */val<int>) ((((/* implicit */val<int>) var_3)) > (1421809879))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)25527;
unsigned char var_5 = (unsigned char)49;
short var_6 = (short)1108;
unsigned long long int var_13 = 7734036172147740861ULL;
int var_14 = 2140847978;
int zero = 0;
unsigned long long int var_15 = 4410150623894351167ULL;
bool var_16 = (bool)0;
unsigned short var_17 = (unsigned short)38959;
void init() {
}

void checksum() {
    value_mismatch |= var_15 != 1419287710665784598ULL;
    value_mismatch |= var_16 != (bool)1;
    value_mismatch |= var_17 != (unsigned short)0;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_3, var_5, var_6, var_13, var_14, zero, &var_15, &var_16, &var_17);
  checksum();
}
