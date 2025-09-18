/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 7291
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=7291
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
void test(val<unsigned long long int> var_0, val<int> var_2, val<short> var_3, val<short> var_4, val<signed char> var_5, val<bool> var_8, val<short> var_9, val<long long int> var_11, val<int> zero, val<short*> var_12, val<signed char*> var_13, val<long long int*> var_14, val<long long int*> var_15, val<int*> var_16) {
    *var_12 *= ((/* implicit */val<short>) ((((/* implicit */val<bool>) var_5)) ? (((/* implicit */val<long long int>) (-(((((/* implicit */val<bool>) var_11)) ? (((/* implicit */val<int>) var_5)) : (((/* implicit */val<int>) (val<bool>)1))))))) : ((-(max((var_11), (6544683708464537808LL)))))));
    *var_13 = ((/* implicit */val<signed char>) min((var_0), (((((/* implicit */val<bool>) ((val<int>) var_5))) ? (((((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) (val<unsigned char>)15))) & (var_0))) : (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) ((((/* implicit */val<long long int>) ((/* implicit */val<int>) var_8))) < (6543740553006265056LL)))))))));
    *var_14 = ((/* implicit */val<long long int>) var_2);
    *var_15 |= ((/* implicit */val<long long int>) ((((/* implicit */val<bool>) min((((((/* implicit */val<bool>) var_3)) ? (((/* implicit */val<int>) var_5)) : (((/* implicit */val<int>) var_8)))), (((/* implicit */val<int>) (val<unsigned short>)51779))))) ? (((((/* implicit */val<bool>) min((var_0), (((/* implicit */val<unsigned long long int>) var_8))))) ? (((/* implicit */val<int>) var_3)) : (((/* implicit */val<int>) var_4)))) : (((/* implicit */val<int>) ((val<bool>) var_4)))));
    *var_16 |= ((/* implicit */val<int>) var_9);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 821237736584177209ULL;
int var_2 = 1562292105;
short var_3 = (short)2300;
short var_4 = (short)8040;
signed char var_5 = (signed char)97;
bool var_8 = (bool)0;
short var_9 = (short)9146;
long long int var_11 = -350544260728296645LL;
int zero = 0;
short var_12 = (short)30320;
signed char var_13 = (signed char)92;
long long int var_14 = 8143995119105635223LL;
long long int var_15 = -5415165934382615448LL;
int var_16 = 1940215486;
void init() {
}

void checksum() {
    value_mismatch |= var_12 != (short)8080;
    value_mismatch |= var_13 != (signed char)9;
    value_mismatch |= var_14 != 1562292105LL;
    value_mismatch |= var_15 != -5415165934382612632LL;
    value_mismatch |= var_16 != 1940223934;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_2, var_3, var_4, var_5, var_8, var_9, var_11, zero, &var_12, &var_13, &var_14, &var_15, &var_16);
  checksum();
}
