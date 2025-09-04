/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 3840
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=3840
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
void test(val<unsigned int> var_1, val<short> var_4, val<unsigned char> var_7, val<long long int> var_9, val<bool> var_12, val<unsigned long long int> var_13, val<int> zero, val<signed char*> var_14, val<unsigned int*> var_15, val<int*> var_16, val<unsigned char*> var_17) {
    *var_14 = ((/* implicit */val<signed char>) ((var_13) >> (((((((-956126942) + (2147483647))) << (((max((var_9), (((/* implicit */val<long long int>) (val<short>)9196)))) - (9196LL))))) - (1191356681)))));
    *var_15 = ((/* implicit */val<unsigned int>) ((val<unsigned short>) ((((/* implicit */val<bool>) ((((/* implicit */val<bool>) var_1)) ? (((/* implicit */val<int>) var_7)) : (2147483628)))) ? (((/* implicit */val<unsigned long long int>) var_1)) : (min((((/* implicit */val<unsigned long long int>) (val<short>)9196)), (3283078323481822539ULL))))));
    *var_16 = ((/* implicit */val<int>) var_13);
    *var_17 = ((/* implicit */val<unsigned char>) max((((/* implicit */val<long long int>) min((((/* implicit */val<unsigned char>) (val<bool>)1)), (((val<unsigned char>) 3283078323481822539ULL))))), (max((min((((/* implicit */val<long long int>) 688432627U)), (var_9))), (((/* implicit */val<long long int>) ((((/* implicit */val<bool>) (val<signed char>)-16)) ? (((/* implicit */val<int>) var_4)) : (((/* implicit */val<int>) var_12)))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2845761115U;
short var_4 = (short)-4821;
unsigned char var_7 = (unsigned char)117;
long long int var_9 = -5919686345761527929LL;
bool var_12 = (bool)0;
unsigned long long int var_13 = 16424648707512649509ULL;
int zero = 0;
signed char var_14 = (signed char)4;
unsigned int var_15 = 1693844520U;
int var_16 = -1164529931;
unsigned char var_17 = (unsigned char)230;
void init() {
}

void checksum() {
    value_mismatch |= var_14 != (signed char)91;
    value_mismatch |= var_15 != 56923U;
    value_mismatch |= var_16 != 1541326629;
    value_mismatch |= var_17 != (unsigned char)1;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_4, var_7, var_9, var_12, var_13, zero, &var_14, &var_15, &var_16, &var_17);
  checksum();
  assert(!value_mismatch);
}
