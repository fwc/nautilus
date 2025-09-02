/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 1080
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=1080
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
void test(val<unsigned int> var_1, val<unsigned long long int> var_4, val<unsigned int> var_5, val<unsigned int> var_7, val<unsigned int> var_8, val<long long int> var_10, val<int> zero, val<unsigned char*> var_13, val<signed char*> var_14, val<unsigned int*> var_15, val<unsigned int*> var_16, val<unsigned short*> var_17, val<signed char*> var_18, val<unsigned short*> var_19) {
    *var_13 = ((/* implicit */val<unsigned char>) var_4);
    if (((((/* implicit */val<unsigned int>) ((/* implicit */val<int>) (!(((/* implicit */val<bool>) min((var_8), (var_7)))))))) <= (var_5)))
    {
        *var_14 = ((/* implicit */val<signed char>) var_4);
        *var_15 = ((/* implicit */val<unsigned int>) ((((/* implicit */val<int>) (val<unsigned char>)36)) >= (((/* implicit */val<int>) (!(((/* implicit */val<bool>) ((4294967295U) % (1U)))))))));
        *var_16 = ((/* implicit */val<unsigned int>) ((var_4) != (((/* implicit */val<unsigned long long int>) (+((-(-4909063251083800960LL))))))));
        *var_17 *= ((/* implicit */val<unsigned short>) min((((/* implicit */val<unsigned int>) (!(((/* implicit */val<bool>) 11U))))), (var_8)));
    }

    *var_18 &= ((/* implicit */val<signed char>) var_10);
    *var_19 = ((/* implicit */val<unsigned short>) var_1);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2649715005U;
unsigned long long int var_4 = 12306705208263555670ULL;
unsigned int var_5 = 4018817418U;
unsigned int var_7 = 964587589U;
unsigned int var_8 = 607659787U;
long long int var_10 = -1350663053529689840LL;
int zero = 0;
unsigned char var_13 = (unsigned char)16;
signed char var_14 = (signed char)53;
unsigned int var_15 = 3997798849U;
unsigned int var_16 = 2931999525U;
unsigned short var_17 = (unsigned short)12218;
signed char var_18 = (signed char)98;
unsigned short var_19 = (unsigned short)46169;
void init() {
}

void checksum() {
    value_mismatch |= var_13 != (unsigned char)86;
    value_mismatch |= var_14 != (signed char)86;
    value_mismatch |= var_15 != 1U;
    value_mismatch |= var_16 != 1U;
    value_mismatch |= var_17 != (unsigned short)0;
    value_mismatch |= var_18 != (signed char)0;
    value_mismatch |= var_19 != (unsigned short)28989;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_4, var_5, var_7, var_8, var_10, zero, &var_13, &var_14, &var_15, &var_16, &var_17, &var_18, &var_19);
  checksum();
  assert(!value_mismatch);
}
