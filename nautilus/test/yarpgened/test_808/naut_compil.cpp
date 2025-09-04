/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 808
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=808
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
void test(val<unsigned char> var_0, val<unsigned char> var_1, val<unsigned char> var_2, val<unsigned char> var_4, val<unsigned int> var_5, val<unsigned int> var_6, val<short> var_8, val<short> var_10, val<long long int> var_12, val<unsigned short> var_14, val<long long int> var_15, val<int> zero, val<unsigned char*> var_16, val<unsigned char*> var_17, val<bool*> var_18, val<short*> var_19, val<long long int*> var_20, val<unsigned char*> var_21, val<long long int*> var_22) {
    if (((/* implicit */val<bool>) max((((/* implicit */val<unsigned int>) (val<unsigned short>)24576)), (max(((+(4294967295U))), (var_5))))))
    {
        *var_16 = ((/* implicit */val<unsigned char>) (~(((/* implicit */val<int>) var_8))));
        *var_17 = ((/* implicit */val<unsigned char>) ((((/* implicit */val<bool>) ((((/* implicit */val<bool>) ((val<unsigned int>) var_0))) ? (max((var_6), (((/* implicit */val<unsigned int>) var_8)))) : (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) ((((/* implicit */val<bool>) var_15)) || (((/* implicit */val<bool>) var_1))))))))) ? (((/* implicit */val<int>) var_0)) : (((/* implicit */val<int>) (!(((((/* implicit */val<bool>) var_14)) || (((/* implicit */val<bool>) 1011699952U)))))))));
        *var_18 = ((/* implicit */val<bool>) min((((/* implicit */val<long long int>) ((((/* implicit */val<bool>) ((val<unsigned char>) var_12))) ? ((~(((/* implicit */val<int>) var_8)))) : (((((/* implicit */val<int>) var_10)) ^ (((/* implicit */val<int>) var_1))))))), ((-(((((/* implicit */val<long long int>) ((/* implicit */val<int>) var_2))) / (-2530668700589722572LL)))))));
        *var_19 = ((/* implicit */val<short>) var_4);
    }
    else
    {
        *var_20 -= var_12;
        *var_21 = ((/* implicit */val<unsigned char>) max((*var_21), (((/* implicit */val<unsigned char>) var_5))));
    }

    *var_22 = ((/* implicit */val<long long int>) (val<unsigned char>)248);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)39;
unsigned char var_1 = (unsigned char)232;
unsigned char var_2 = (unsigned char)199;
unsigned char var_4 = (unsigned char)217;
unsigned int var_5 = 3255511445U;
unsigned int var_6 = 1591668486U;
short var_8 = (short)-30420;
short var_10 = (short)10169;
long long int var_12 = 8447002763808165465LL;
unsigned short var_14 = (unsigned short)1430;
long long int var_15 = 7089535737273837398LL;
int zero = 0;
unsigned char var_16 = (unsigned char)182;
unsigned char var_17 = (unsigned char)94;
bool var_18 = (bool)0;
short var_19 = (short)27590;
long long int var_20 = 9099640266413214489LL;
unsigned char var_21 = (unsigned char)56;
long long int var_22 = -6807885937305058135LL;
void init() {
}

void checksum() {
    value_mismatch |= var_16 != (unsigned char)211;
    value_mismatch |= var_17 != (unsigned char)39;
    value_mismatch |= var_18 != (bool)0;
    value_mismatch |= var_19 != (short)217;
    value_mismatch |= var_20 != 9099640266413214489LL;
    value_mismatch |= var_21 != (unsigned char)56;
    value_mismatch |= var_22 != 248LL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_2, var_4, var_5, var_6, var_8, var_10, var_12, var_14, var_15, zero, &var_16, &var_17, &var_18, &var_19, &var_20, &var_21, &var_22);
  checksum();
  assert(!value_mismatch);
}
