/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 9104
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=9104
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
void test(val<bool> var_2, val<bool> var_3, val<unsigned long long int> var_4, val<unsigned long long int> var_7, val<short> var_8, val<unsigned char> var_10, val<unsigned long long int> var_12, val<long long int> var_13, val<unsigned int> var_16, val<int> var_17, val<int> zero, val<unsigned int*> var_20, val<unsigned char*> var_21, val<int*> var_22, val<unsigned char*> var_23, val<int*> var_24) {
    *var_20 = ((/* implicit */val<unsigned int>) max((((((/* implicit */val<bool>) (val<unsigned char>)38)) ? (((/* implicit */val<unsigned long long int>) ((var_17) << (((var_17) - (238958435)))))) : (((((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_3))) - (var_12))))), (((/* implicit */val<unsigned long long int>) (!(((/* implicit */val<bool>) max((((/* implicit */val<unsigned long long int>) var_13)), (var_7)))))))));
    if (((/* implicit */val<bool>) max((max((((/* implicit */val<unsigned long long int>) var_2)), ((-(var_4))))), (((/* implicit */val<unsigned long long int>) max((((/* implicit */val<long long int>) (-(((/* implicit */val<int>) var_10))))), (var_13)))))))
    {
        *var_21 = ((/* implicit */val<unsigned char>) ((((((/* implicit */val<bool>) (-(((/* implicit */val<int>) var_10))))) ? (((/* implicit */val<int>) ((((/* implicit */val<bool>) var_13)) && (((/* implicit */val<bool>) -1990702049))))) : (((/* implicit */val<int>) var_10)))) / (((/* implicit */val<int>) (val<unsigned char>)117))));
        *var_22 = ((/* implicit */val<int>) 1672045695080357321LL);
        *var_23 = ((/* implicit */val<unsigned char>) var_16);
    }

    *var_24 = ((((/* implicit */val<int>) var_8)) << (((var_13) + (972078125742672544LL))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

bool var_2 = (bool)0;
bool var_3 = (bool)0;
unsigned long long int var_4 = 5339929132048485268ULL;
unsigned long long int var_7 = 511554368353477010ULL;
short var_8 = (short)12748;
unsigned char var_10 = (unsigned char)212;
unsigned long long int var_12 = 1244366616518969258ULL;
long long int var_13 = -972078125742672530LL;
unsigned int var_16 = 2118440071U;
int var_17 = 238958436;
int zero = 0;
unsigned int var_20 = 3657042236U;
unsigned char var_21 = (unsigned char)93;
int var_22 = -217967422;
unsigned char var_23 = (unsigned char)227;
int var_24 = 1737361411;
void init() {
}

void checksum() {
    value_mismatch |= var_20 != 477916872U;
    value_mismatch |= var_21 != (unsigned char)0;
    value_mismatch |= var_22 != 1736203721;
    value_mismatch |= var_23 != (unsigned char)135;
    value_mismatch |= var_24 != 208863232;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_2, var_3, var_4, var_7, var_8, var_10, var_12, var_13, var_16, var_17, zero, &var_20, &var_21, &var_22, &var_23, &var_24);
  checksum();
}
