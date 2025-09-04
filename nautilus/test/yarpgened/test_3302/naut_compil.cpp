/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 3302
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=3302
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
void test(val<unsigned char> var_1, val<unsigned char> var_2, val<unsigned short> var_5, val<unsigned short> var_6, val<unsigned char> var_8, val<unsigned short> var_9, val<unsigned short> var_12, val<unsigned short> var_17, val<int> zero, val<unsigned char*> var_18, val<unsigned char*> var_19, val<unsigned int*> var_20, val<long long int*> var_21, val<unsigned short*> var_22) {
    *var_18 = ((/* implicit */val<unsigned char>) ((min((((((/* implicit */val<int>) var_9)) + (((/* implicit */val<int>) (val<bool>)1)))), (((/* implicit */val<int>) var_1)))) >= (((/* implicit */val<int>) var_9))));
    *var_19 = ((/* implicit */val<unsigned char>) ((((/* implicit */val<int>) var_17)) < (((/* implicit */val<int>) var_12))));
    *var_20 = ((/* implicit */val<unsigned int>) var_8);
    *var_21 &= min((((/* implicit */val<long long int>) var_6)), (((val<long long int>) var_2)));
    *var_22 = ((/* implicit */val<unsigned short>) ((((((/* implicit */val<int>) (val<bool>)1)) & ((~(((/* implicit */val<int>) (val<bool>)1)))))) + ((+(((/* implicit */val<int>) ((((/* implicit */val<bool>) var_5)) || (((/* implicit */val<bool>) var_6)))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)43;
unsigned char var_2 = (unsigned char)10;
unsigned short var_5 = (unsigned short)53429;
unsigned short var_6 = (unsigned short)32494;
unsigned char var_8 = (unsigned char)77;
unsigned short var_9 = (unsigned short)43949;
unsigned short var_12 = (unsigned short)50530;
unsigned short var_17 = (unsigned short)54738;
int zero = 0;
unsigned char var_18 = (unsigned char)72;
unsigned char var_19 = (unsigned char)84;
unsigned int var_20 = 168951713U;
long long int var_21 = 5039408974140876569LL;
unsigned short var_22 = (unsigned short)61217;
void init() {
}

void checksum() {
    value_mismatch |= var_18 != (unsigned char)0;
    value_mismatch |= var_19 != (unsigned char)0;
    value_mismatch |= var_20 != 77U;
    value_mismatch |= var_21 != 8LL;
    value_mismatch |= var_22 != (unsigned short)1;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_2, var_5, var_6, var_8, var_9, var_12, var_17, zero, &var_18, &var_19, &var_20, &var_21, &var_22);
  checksum();
  assert(!value_mismatch);
}
