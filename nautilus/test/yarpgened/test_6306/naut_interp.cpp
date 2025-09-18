/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 6306
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=6306
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
void test(val<int> var_1, val<bool> var_4, val<unsigned int> var_5, val<long long int> var_8, val<long long int> var_10, val<int> zero, val<signed char*> var_12, val<unsigned int*> var_13, val<long long int*> var_14, val<bool*> var_15, val<bool*> var_16) {
    if (((/* implicit */val<bool>) var_8))
    {
        *var_12 = ((/* implicit */val<signed char>) (-(min((((/* implicit */val<long long int>) 3793716534U)), (((((/* implicit */val<long long int>) -481323615)) | (0LL)))))));
        *var_13 *= ((/* implicit */val<unsigned int>) (+((-(((/* implicit */val<int>) (val<signed char>)19))))));
        *var_14 = ((/* implicit */val<long long int>) ((((/* implicit */val<bool>) (val<signed char>)19)) || (((/* implicit */val<bool>) min((((/* implicit */val<int>) (val<signed char>)10)), (-316364872))))));
    }

    *var_15 = ((/* implicit */val<bool>) ((((/* implicit */val<long long int>) (-(((/* implicit */val<int>) (val<signed char>)-21))))) * ((((~(var_8))) * (((((/* implicit */val<long long int>) ((/* implicit */val<int>) var_4))) / (var_10)))))));
    *var_16 = ((/* implicit */val<bool>) ((((/* implicit */val<bool>) ((((/* implicit */val<int>) (val<bool>)0)) % (((/* implicit */val<int>) (val<bool>)1))))) ? (((/* implicit */val<int>) ((((/* implicit */val<bool>) min((var_10), (((/* implicit */val<long long int>) var_5))))) || (((/* implicit */val<bool>) var_1))))) : (((/* implicit */val<int>) (((+(var_10))) >= (((/* implicit */val<long long int>) ((/* implicit */val<int>) (val<bool>)1))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1625815532;
bool var_4 = (bool)1;
unsigned int var_5 = 1038025726U;
long long int var_8 = -8168530210298468992LL;
long long int var_10 = 1292498545114023951LL;
int zero = 0;
signed char var_12 = (signed char)-11;
unsigned int var_13 = 1037212064U;
long long int var_14 = 3191691363824542583LL;
bool var_15 = (bool)0;
bool var_16 = (bool)0;
void init() {
}

void checksum() {
    value_mismatch |= var_12 != (signed char)95;
    value_mismatch |= var_13 != 1767807264U;
    value_mismatch |= var_14 != 1LL;
    value_mismatch |= var_15 != (bool)0;
    value_mismatch |= var_16 != (bool)1;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_4, var_5, var_8, var_10, zero, &var_12, &var_13, &var_14, &var_15, &var_16);
  checksum();
}
