/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 7242
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=7242
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
void test(val<unsigned long long int> var_0, val<long long int> var_3, val<signed char> var_5, val<long long int> var_7, val<long long int> var_8, val<unsigned int> var_9, val<int> zero, val<unsigned int*> var_11, val<int*> var_12, val<long long int*> var_13, val<unsigned int*> var_14, val<signed char*> var_15, val<long long int*> var_16, val<long long int*> var_17) {
    if (((/* implicit */val<bool>) ((((/* implicit */val<bool>) var_0)) ? (((/* implicit */val<long long int>) (+(var_9)))) : (var_7))))
    {
        *var_11 = ((/* implicit */val<unsigned int>) (val<short>)-24079);
        if (((/* implicit */val<bool>) (~(min((((((/* implicit */val<bool>) var_0)) ? (var_8) : (-2068080929275041131LL))), (((/* implicit */val<long long int>) var_5)))))))
        {
            *var_12 = ((/* implicit */val<int>) (-(var_3)));
            *var_13 &= ((((/* implicit */val<bool>) var_8)) ? (((/* implicit */val<long long int>) ((/* implicit */val<int>) (val<signed char>)40))) : (((((/* implicit */val<bool>) ((((/* implicit */val<bool>) 2891747374391893644LL)) ? (18446744073709551615ULL) : (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) (val<short>)24093)))))) ? (var_7) : (((/* implicit */val<long long int>) ((/* implicit */val<int>) (!(((/* implicit */val<bool>) var_7)))))))));
            *var_14 *= ((/* implicit */val<unsigned int>) (+(var_7)));
        }

    }

    *var_15 = ((/* implicit */val<signed char>) min((*var_15), (((/* implicit */val<signed char>) (val<short>)26446))));
    *var_16 |= var_7;
    *var_17 = ((/* implicit */val<long long int>) (!(((/* implicit */val<bool>) var_3))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 12559371577412292139ULL;
long long int var_3 = -1729397104033052317LL;
signed char var_5 = (signed char)66;
long long int var_7 = -1628182993519036664LL;
long long int var_8 = 3064274011838269676LL;
unsigned int var_9 = 4041120512U;
int zero = 0;
unsigned int var_11 = 423166603U;
int var_12 = 1134478292;
long long int var_13 = -7167259154053927298LL;
unsigned int var_14 = 1744548188U;
signed char var_15 = (signed char)108;
long long int var_16 = 7236738827940739410LL;
long long int var_17 = -2178202892247405970LL;
void init() {
}

void checksum() {
    value_mismatch |= var_11 != 4294943217U;
    value_mismatch |= var_12 != -579160419;
    value_mismatch |= var_13 != 40LL;
    value_mismatch |= var_14 != 1320963808U;
    value_mismatch |= var_15 != (signed char)78;
    value_mismatch |= var_16 != -1337692509979066534LL;
    value_mismatch |= var_17 != 0LL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_3, var_5, var_7, var_8, var_9, zero, &var_11, &var_12, &var_13, &var_14, &var_15, &var_16, &var_17);
  checksum();
  assert(!value_mismatch);
}
