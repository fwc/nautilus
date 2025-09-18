/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 7264
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=7264
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
void test(val<long long int> var_0, val<unsigned char> var_2, val<int> var_3, val<long long int> var_4, val<unsigned char> var_6, val<bool> var_7, val<int> var_8, val<int> var_9, val<unsigned long long int> var_11, val<unsigned int> var_13, val<unsigned char> var_15, val<unsigned char> var_16, val<int> zero, val<long long int*> var_17, val<unsigned char*> var_18, val<unsigned short*> var_19, val<unsigned char*> var_20, val<unsigned char*> var_21, val<bool*> var_22, val<bool*> var_23, val<unsigned char*> var_24) {
    *var_17 = ((/* implicit */val<long long int>) var_2);
    if (((/* implicit */val<bool>) (val<unsigned char>)253))
    {
        *var_18 = ((/* implicit */val<unsigned char>) ((((/* implicit */val<unsigned long long int>) (~(((((/* implicit */val<bool>) var_2)) ? (((/* implicit */val<int>) (val<unsigned char>)253)) : (((/* implicit */val<int>) var_16))))))) | (((((/* implicit */val<bool>) (~(((/* implicit */val<int>) (val<unsigned char>)2))))) ? (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_7))) : (((((/* implicit */val<bool>) var_0)) ? (((/* implicit */val<unsigned long long int>) var_13)) : (var_11)))))));
        if (((/* implicit */val<bool>) ((((/* implicit */val<bool>) var_9)) ? (var_4) : (((/* implicit */val<long long int>) ((/* implicit */val<int>) ((((/* implicit */val<unsigned int>) var_3)) < ((-(2529454421U))))))))))
        {
            *var_19 = ((/* implicit */val<unsigned short>) var_6);
            *var_20 = ((/* implicit */val<unsigned char>) var_3);
            *var_21 += ((/* implicit */val<unsigned char>) ((3692923290U) * (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) (val<unsigned char>)253)))));
        }

        *var_22 = ((/* implicit */val<bool>) max((*var_22), (((/* implicit */val<bool>) (~(((((/* implicit */val<bool>) ((var_8) ^ (((/* implicit */val<int>) var_6))))) ? (((((/* implicit */val<bool>) 779702423U)) ? (((/* implicit */val<int>) (val<unsigned char>)255)) : (((/* implicit */val<int>) (val<unsigned char>)6)))) : (((/* implicit */val<int>) ((val<bool>) var_4))))))))));
        *var_23 = ((/* implicit */val<bool>) ((min((-2460551200180986543LL), (((/* implicit */val<long long int>) ((val<unsigned int>) var_8))))) ^ (((/* implicit */val<long long int>) ((/* implicit */val<int>) max((((/* implicit */val<unsigned char>) ((2251799813681152LL) == (((/* implicit */val<long long int>) ((/* implicit */val<int>) var_2)))))), ((val<unsigned char>)0)))))));
        *var_24 += ((/* implicit */val<unsigned char>) ((val<unsigned long long int>) ((((/* implicit */val<long long int>) ((/* implicit */val<int>) ((((/* implicit */val<int>) var_15)) < (((/* implicit */val<int>) var_15)))))) != ((~(-6198192393387372337LL))))));
    }

}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 7614032428955503241LL;
unsigned char var_2 = (unsigned char)17;
int var_3 = 226623124;
long long int var_4 = 6929737873319715182LL;
unsigned char var_6 = (unsigned char)156;
bool var_7 = (bool)1;
int var_8 = 1906443801;
int var_9 = 343379359;
unsigned long long int var_11 = 12442928461145586418ULL;
unsigned int var_13 = 2105138774U;
unsigned char var_15 = (unsigned char)88;
unsigned char var_16 = (unsigned char)206;
int zero = 0;
long long int var_17 = -5163138728257221264LL;
unsigned char var_18 = (unsigned char)211;
unsigned short var_19 = (unsigned short)13338;
unsigned char var_20 = (unsigned char)1;
unsigned char var_21 = (unsigned char)134;
bool var_22 = (bool)1;
bool var_23 = (bool)1;
unsigned char var_24 = (unsigned char)20;
void init() {
}

void checksum() {
    value_mismatch |= var_17 != 17LL;
    value_mismatch |= var_18 != (unsigned char)3;
    value_mismatch |= var_19 != (unsigned short)156;
    value_mismatch |= var_20 != (unsigned char)148;
    value_mismatch |= var_21 != (unsigned char)184;
    value_mismatch |= var_22 != (bool)1;
    value_mismatch |= var_23 != (bool)1;
    value_mismatch |= var_24 != (unsigned char)21;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_2, var_3, var_4, var_6, var_7, var_8, var_9, var_11, var_13, var_15, var_16, zero, &var_17, &var_18, &var_19, &var_20, &var_21, &var_22, &var_23, &var_24);
  checksum();
}
