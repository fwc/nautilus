/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 6226
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=6226
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
void test(val<long long int> var_0, val<short> var_5, val<unsigned short> var_14, val<unsigned int> var_15, val<long long int> var_16, val<int> zero, val<signed char*> var_17, val<unsigned short*> var_18, val<long long int*> var_19, val<short*> var_20, val<unsigned long long int*> var_21, val<int*> var_22) {
    *var_17 = ((/* implicit */val<signed char>) min((*var_17), (((/* implicit */val<signed char>) min((((((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) (val<short>)1562))) | (14199231924314740666ULL))), (((((/* implicit */val<bool>) 6044762704638662803ULL)) ? (((((/* implicit */val<bool>) 4247512149394810942ULL)) ? (14199231924314740672ULL) : (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) (val<unsigned short>)51730))))) : (((/* implicit */val<unsigned long long int>) ((((/* implicit */val<bool>) -1732087242)) ? (((/* implicit */val<int>) (val<bool>)1)) : (((/* implicit */val<int>) (val<short>)31427))))))))))));
    if (((/* implicit */val<bool>) var_16))
    {
        *var_18 = ((/* implicit */val<unsigned short>) ((val<bool>) var_5));
        *var_19 = ((/* implicit */val<long long int>) var_15);
        *var_20 = ((/* implicit */val<short>) var_0);
    }

    *var_21 = ((/* implicit */val<unsigned long long int>) ((val<signed char>) var_14));
    *var_22 = ((/* implicit */val<int>) (+(max((((/* implicit */val<unsigned long long int>) ((((/* implicit */val<int>) (val<bool>)1)) <= (((/* implicit */val<int>) (val<short>)-28404))))), (14199231924314740675ULL)))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 8296473606131197864LL;
short var_5 = (short)21914;
unsigned short var_14 = (unsigned short)10584;
unsigned int var_15 = 408883999U;
long long int var_16 = 6096152561716012722LL;
int zero = 0;
signed char var_17 = (signed char)18;
unsigned short var_18 = (unsigned short)41605;
long long int var_19 = 9000162277609131954LL;
short var_20 = (short)28251;
unsigned long long int var_21 = 4168257595837189015ULL;
int var_22 = 902576742;
void init() {
}

void checksum() {
    value_mismatch |= var_17 != (signed char)-70;
    value_mismatch |= var_18 != (unsigned short)1;
    value_mismatch |= var_19 != 408883999LL;
    value_mismatch |= var_20 != (short)-22616;
    value_mismatch |= var_21 != 88ULL;
    value_mismatch |= var_22 != 1412077507;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_5, var_14, var_15, var_16, zero, &var_17, &var_18, &var_19, &var_20, &var_21, &var_22);
  checksum();
}
