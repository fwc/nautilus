/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 9156
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=9156
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
void test(val<int> var_1, val<unsigned int> var_2, val<long long int> var_3, val<unsigned char> var_6, val<unsigned short> var_11, val<unsigned short> var_12, val<int> var_13, val<unsigned char> var_14, val<int> zero, val<unsigned int*> var_15, val<unsigned long long int*> var_16, val<unsigned char*> var_17, val<int*> var_18, val<unsigned char*> var_19) {
    if (((/* implicit */val<bool>) ((((/* implicit */val<bool>) ((((/* implicit */val<int>) var_6)) & (var_1)))) ? (min((((/* implicit */val<unsigned int>) var_11)), (min((var_2), (((/* implicit */val<unsigned int>) var_13)))))) : (((/* implicit */val<unsigned int>) (~((~(((/* implicit */val<int>) var_11))))))))))
    {
        *var_15 = ((/* implicit */val<unsigned int>) min((*var_15), (((/* implicit */val<unsigned int>) (~((~((~(var_1))))))))));
        *var_16 |= ((/* implicit */val<unsigned long long int>) var_3);
        *var_17 = ((/* implicit */val<unsigned char>) ((((/* implicit */val<long long int>) ((/* implicit */val<int>) var_14))) + ((+(((((/* implicit */val<long long int>) ((/* implicit */val<int>) (val<short>)8192))) - (var_3)))))));
    }

    *var_18 = ((/* implicit */val<int>) var_12);
    *var_19 = ((/* implicit */val<unsigned char>) (~((~(((/* implicit */val<int>) min((var_14), (var_6))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1156471233;
unsigned int var_2 = 2635323617U;
long long int var_3 = -8342125708184572572LL;
unsigned char var_6 = (unsigned char)157;
unsigned short var_11 = (unsigned short)12539;
unsigned short var_12 = (unsigned short)38671;
int var_13 = -2097416;
unsigned char var_14 = (unsigned char)142;
int zero = 0;
unsigned int var_15 = 3613393269U;
unsigned long long int var_16 = 2687406533339087548ULL;
unsigned char var_17 = (unsigned char)123;
int var_18 = 1309197060;
unsigned char var_19 = (unsigned char)74;
void init() {
}

void checksum() {
    value_mismatch |= var_15 != 1156471232U;
    value_mismatch |= var_16 != 12500821439378468860ULL;
    value_mismatch |= var_17 != (unsigned char)42;
    value_mismatch |= var_18 != 38671;
    value_mismatch |= var_19 != (unsigned char)142;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_2, var_3, var_6, var_11, var_12, var_13, var_14, zero, &var_15, &var_16, &var_17, &var_18, &var_19);
  checksum();
}
