/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 25
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=25
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
void test(val<int> var_0, val<long long int> var_2, val<unsigned char> var_3, val<bool> var_4, val<unsigned char> var_5, val<unsigned short> var_6, val<unsigned short> var_7, val<unsigned char> var_8, val<long long int> var_10, val<signed char> var_11, val<int> zero, val<unsigned long long int*> var_15, val<unsigned long long int*> var_16, val<bool*> var_17, val<long long int*> var_18, val<long long int*> var_19, val<unsigned short*> var_20, val<unsigned long long int*> var_21, val<unsigned int*> var_22) {
    if (((/* implicit */val<bool>) max((((/* implicit */val<unsigned short>) (val<short>)-5112)), (var_7))))
    {
        *var_15 = ((/* implicit */val<unsigned long long int>) max((((/* implicit */val<unsigned int>) (((val<bool>)1) ? (((/* implicit */val<int>) var_11)) : (((/* implicit */val<int>) max(((val<unsigned char>)44), (((/* implicit */val<unsigned char>) (val<signed char>)14)))))))), (((((/* implicit */val<bool>) (val<signed char>)-14)) ? (8064U) : (((/* implicit */val<unsigned int>) (~(-225247959))))))));
        *var_16 += ((/* implicit */val<unsigned long long int>) (~((+(((((/* implicit */val<bool>) 0ULL)) ? (((/* implicit */val<int>) var_11)) : (((/* implicit */val<int>) var_4))))))));
        *var_17 = ((/* implicit */val<bool>) (+((+(((((/* implicit */val<bool>) (val<signed char>)11)) ? (((/* implicit */val<int>) var_3)) : (((/* implicit */val<int>) (val<signed char>)0))))))));
        *var_18 = ((/* implicit */val<long long int>) ((((/* implicit */val<bool>) var_8)) ? (((/* implicit */val<int>) max(((val<unsigned short>)65524), (((/* implicit */val<unsigned short>) (!(((/* implicit */val<bool>) var_6)))))))) : (((/* implicit */val<int>) (val<unsigned char>)206))));
    }

    *var_19 &= ((/* implicit */val<long long int>) (-(((/* implicit */val<int>) (((val<bool>)1) || (((/* implicit */val<bool>) (+(((/* implicit */val<int>) (val<short>)10))))))))));
    *var_20 = ((/* implicit */val<unsigned short>) ((((/* implicit */val<bool>) ((val<unsigned int>) (!(((/* implicit */val<bool>) var_5)))))) ? (((/* implicit */val<long long int>) (+(((/* implicit */val<int>) ((val<signed char>) var_4)))))) : ((((((val<bool>)0) ? (((/* implicit */val<long long int>) ((/* implicit */val<int>) (val<bool>)0))) : (var_2))) << (((/* implicit */val<int>) (val<bool>)1))))));
    *var_21 += ((/* implicit */val<unsigned long long int>) ((((/* implicit */val<bool>) ((val<signed char>) (val<signed char>)7))) ? (((((/* implicit */val<bool>) (~(((/* implicit */val<int>) (val<bool>)1))))) ? (((/* implicit */val<long long int>) max((((/* implicit */val<int>) (val<bool>)1)), (var_0)))) : (((var_10) | (((/* implicit */val<long long int>) ((/* implicit */val<int>) (val<signed char>)-15))))))) : (((((/* implicit */val<long long int>) ((/* implicit */val<int>) ((((/* implicit */val<bool>) (val<signed char>)2)) && (((/* implicit */val<bool>) (val<signed char>)-70)))))) + ((-(var_2)))))));
    *var_22 = ((/* implicit */val<unsigned int>) (~(max((((/* implicit */val<unsigned long long int>) ((val<long long int>) (val<signed char>)-15))), (max((((/* implicit */val<unsigned long long int>) var_4)), (8103543172501630583ULL)))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1219885248;
long long int var_2 = 3359814395717232290LL;
unsigned char var_3 = (unsigned char)110;
bool var_4 = (bool)0;
unsigned char var_5 = (unsigned char)247;
unsigned short var_6 = (unsigned short)18815;
unsigned short var_7 = (unsigned short)6010;
unsigned char var_8 = (unsigned char)136;
long long int var_10 = -2960338634299516006LL;
signed char var_11 = (signed char)103;
int zero = 0;
unsigned long long int var_15 = 15152044396188323137ULL;
unsigned long long int var_16 = 17754982792918079400ULL;
bool var_17 = (bool)0;
long long int var_18 = -8340306158574760059LL;
long long int var_19 = -2106467767435918969LL;
unsigned short var_20 = (unsigned short)14864;
unsigned long long int var_21 = 4142317346216833993ULL;
unsigned int var_22 = 2063448140U;
void init() {
}

void checksum() {
    value_mismatch |= var_15 != 8064ULL;
    value_mismatch |= var_16 != 17754982792918079399ULL;
    value_mismatch |= var_17 != (bool)1;
    value_mismatch |= var_18 != 65524LL;
    value_mismatch |= var_19 != -2106467767435918969LL;
    value_mismatch |= var_20 != (unsigned short)19780;
    value_mismatch |= var_21 != 4142317347436719241ULL;
    value_mismatch |= var_22 != 14U;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_2, var_3, var_4, var_5, var_6, var_7, var_8, var_10, var_11, zero, &var_15, &var_16, &var_17, &var_18, &var_19, &var_20, &var_21, &var_22);
  checksum();
  assert(!value_mismatch);
}
