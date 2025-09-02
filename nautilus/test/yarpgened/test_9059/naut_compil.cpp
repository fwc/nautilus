/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 9059
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=9059
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
void test(val<int> var_3, val<signed char> var_4, val<short> var_6, val<unsigned short> var_7, val<signed char> var_15, val<long long int> var_17, val<int> zero, val<unsigned short*> var_19, val<unsigned int*> var_20, val<unsigned char*> var_21, val<unsigned long long int*> var_22, val<long long int*> var_23, val<unsigned int*> var_24) {
    if (((/* implicit */val<bool>) var_3))
    {
        *var_19 = ((/* implicit */val<unsigned short>) (-(((((((/* implicit */val<unsigned int>) ((/* implicit */val<int>) (val<short>)3164))) != (678177300U))) ? (281470681743360LL) : (((/* implicit */val<long long int>) (~(((/* implicit */val<int>) (val<unsigned short>)0)))))))));
        *var_20 = ((/* implicit */val<unsigned int>) (~(((((/* implicit */val<bool>) (val<short>)27768)) ? (((/* implicit */val<int>) var_15)) : ((+(((/* implicit */val<int>) (val<short>)-3146))))))));
        *var_21 &= ((/* implicit */val<unsigned char>) var_4);
        *var_22 = ((/* implicit */val<unsigned long long int>) (val<short>)-3175);
        *var_23 = ((/* implicit */val<long long int>) min((*var_23), (((/* implicit */val<long long int>) ((((/* implicit */val<int>) ((((/* implicit */val<long long int>) 0)) == (min((-281470681743360LL), (281457796841472LL)))))) > (((((/* implicit */val<bool>) var_17)) ? (((/* implicit */val<int>) var_7)) : ((~(((/* implicit */val<int>) (val<unsigned char>)55)))))))))));
    }

    *var_24 = ((/* implicit */val<unsigned int>) max((((/* implicit */val<short>) var_4)), (((val<short>) ((((/* implicit */val<int>) var_4)) - (((/* implicit */val<int>) var_6)))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = 2118444963;
signed char var_4 = (signed char)31;
short var_6 = (short)-11912;
unsigned short var_7 = (unsigned short)6153;
signed char var_15 = (signed char)-1;
long long int var_17 = 3325153318611352300LL;
int zero = 0;
unsigned short var_19 = (unsigned short)35526;
unsigned int var_20 = 2086289909U;
unsigned char var_21 = (unsigned char)181;
unsigned long long int var_22 = 268302886702444966ULL;
long long int var_23 = 3385386580429893355LL;
unsigned int var_24 = 2825544199U;
void init() {
}

void checksum() {
    value_mismatch |= var_19 != (unsigned short)0;
    value_mismatch |= var_20 != 0U;
    value_mismatch |= var_21 != (unsigned char)21;
    value_mismatch |= var_22 != 18446744073709548441ULL;
    value_mismatch |= var_23 != 0LL;
    value_mismatch |= var_24 != 11943U;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_3, var_4, var_6, var_7, var_15, var_17, zero, &var_19, &var_20, &var_21, &var_22, &var_23, &var_24);
  checksum();
  assert(!value_mismatch);
}
