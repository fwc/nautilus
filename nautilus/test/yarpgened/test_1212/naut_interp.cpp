/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 1212
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=1212
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
void test(val<unsigned int> var_0, val<unsigned short> var_1, val<int> var_2, val<long long int> var_3, val<short> var_6, val<unsigned char> var_7, val<short> var_8, val<long long int> var_12, val<unsigned short> var_13, val<int> var_14, val<bool> var_15, val<int> zero, val<unsigned char*> var_16, val<unsigned short*> var_17, val<bool*> var_18, val<short*> var_19, val<long long int*> var_20) {
    *var_16 = ((/* implicit */val<unsigned char>) ((((/* implicit */val<bool>) ((((/* implicit */val<bool>) ((((/* implicit */val<bool>) var_14)) ? (((/* implicit */val<int>) var_8)) : (((/* implicit */val<int>) var_13))))) ? (((((/* implicit */val<bool>) var_7)) ? (var_12) : (((/* implicit */val<long long int>) ((/* implicit */val<int>) var_7))))) : (((/* implicit */val<long long int>) ((/* implicit */val<int>) var_1)))))) ? (((/* implicit */val<long long int>) ((/* implicit */val<int>) ((((/* implicit */val<int>) ((((/* implicit */val<bool>) 2595893211U)) && (((/* implicit */val<bool>) (val<short>)-8194))))) < (var_14))))) : (((((((/* implicit */val<bool>) 4294967291U)) ? (((/* implicit */val<long long int>) var_2)) : (var_12))) ^ (((/* implicit */val<long long int>) ((/* implicit */val<int>) ((((/* implicit */val<unsigned int>) ((/* implicit */val<int>) (val<unsigned char>)91))) == (1541738945U)))))))));
    *var_17 -= ((/* implicit */val<unsigned short>) var_15);
    *var_18 ^= ((/* implicit */val<bool>) var_1);
    *var_19 = ((/* implicit */val<short>) var_3);
    *var_20 = ((/* implicit */val<long long int>) ((((((((/* implicit */val<int>) var_8)) >> (((/* implicit */val<int>) (val<bool>)1)))) == (((((/* implicit */val<bool>) var_2)) ? (var_2) : (((/* implicit */val<int>) (val<unsigned short>)64539)))))) ? (((/* implicit */val<int>) var_7)) : (((((/* implicit */val<bool>) var_2)) ? (((/* implicit */val<int>) var_6)) : (((((/* implicit */val<bool>) var_0)) ? (((/* implicit */val<int>) var_7)) : (((/* implicit */val<int>) var_1))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 4612351U;
unsigned short var_1 = (unsigned short)6506;
int var_2 = 2240619;
long long int var_3 = 9074571364396109042LL;
short var_6 = (short)-27049;
unsigned char var_7 = (unsigned char)195;
short var_8 = (short)5368;
long long int var_12 = 7933025740654334563LL;
unsigned short var_13 = (unsigned short)30025;
int var_14 = 155280288;
bool var_15 = (bool)0;
int zero = 0;
unsigned char var_16 = (unsigned char)194;
unsigned short var_17 = (unsigned short)11165;
bool var_18 = (bool)0;
short var_19 = (short)7594;
long long int var_20 = -5429146205252753292LL;
void init() {
}

void checksum() {
    value_mismatch |= var_16 != (unsigned char)1;
    value_mismatch |= var_17 != (unsigned short)11165;
    value_mismatch |= var_18 != (bool)1;
    value_mismatch |= var_19 != (short)3314;
    value_mismatch |= var_20 != -27049LL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_2, var_3, var_6, var_7, var_8, var_12, var_13, var_14, var_15, zero, &var_16, &var_17, &var_18, &var_19, &var_20);
  checksum();
  assert(!value_mismatch);
}
