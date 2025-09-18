/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 3409
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=3409
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
void test(val<unsigned long long int> var_0, val<long long int> var_1, val<int> var_2, val<short> var_3, val<bool> var_4, val<unsigned long long int> var_5, val<unsigned short> var_6, val<unsigned long long int> var_7, val<unsigned int> var_8, val<signed char> var_9, val<int> zero, val<signed char*> var_10, val<unsigned short*> var_11, val<bool*> var_12, val<unsigned short*> var_13, val<unsigned long long int*> var_14, val<unsigned short*> var_15, val<unsigned short*> var_16, val<unsigned short*> var_17, val<unsigned short*> var_18, val<unsigned long long int*> var_19) {
    *var_10 = ((/* implicit */val<signed char>) var_7);
    *var_11 = ((/* implicit */val<unsigned short>) ((((/* implicit */val<bool>) var_0)) ? (max((min((var_5), (((/* implicit */val<unsigned long long int>) var_2)))), (((/* implicit */val<unsigned long long int>) ((var_8) - (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_3)))))))) : (((((/* implicit */val<bool>) (~(((/* implicit */val<int>) var_6))))) ? (((((/* implicit */val<bool>) var_7)) ? (((/* implicit */val<unsigned long long int>) var_2)) : (var_5))) : (var_7)))));
    *var_12 = ((/* implicit */val<bool>) ((((/* implicit */val<bool>) min((((/* implicit */val<unsigned long long int>) var_1)), (var_0)))) ? (((val<unsigned int>) var_5)) : (((/* implicit */val<unsigned int>) (~(((/* implicit */val<int>) (val<short>)3689)))))));
    if (((/* implicit */val<bool>) max((min((((val<unsigned long long int>) var_3)), (((/* implicit */val<unsigned long long int>) (~(var_8)))))), (min((((/* implicit */val<unsigned long long int>) (~(((/* implicit */val<int>) var_9))))), ((-(var_7))))))))
    {
        if (((/* implicit */val<bool>) min((((((/* implicit */val<bool>) ((val<long long int>) var_5))) ? (((/* implicit */val<int>) ((var_8) <= (((/* implicit */val<unsigned int>) var_2))))) : (((((/* implicit */val<bool>) var_3)) ? (((/* implicit */val<int>) var_3)) : (((/* implicit */val<int>) var_6)))))), (((/* implicit */val<int>) ((min((var_7), (((/* implicit */val<unsigned long long int>) var_9)))) > (((/* implicit */val<unsigned long long int>) var_8))))))))
        {
            *var_13 = ((/* implicit */val<unsigned short>) ((((/* implicit */val<bool>) max((min((((/* implicit */val<unsigned long long int>) var_1)), (var_0))), (((/* implicit */val<unsigned long long int>) var_1))))) ? ((~(((/* implicit */val<int>) var_4)))) : (min((var_2), (((((/* implicit */val<int>) var_4)) ^ (((/* implicit */val<int>) var_6))))))));
            *var_14 = ((/* implicit */val<unsigned long long int>) var_6);
        }
        else
        {
            *var_15 = ((/* implicit */val<unsigned short>) var_5);
            *var_16 = ((/* implicit */val<unsigned short>) ((((/* implicit */val<bool>) ((val<unsigned long long int>) ((val<bool>) var_9)))) ? (max((((((/* implicit */val<bool>) var_9)) ? (((/* implicit */val<unsigned long long int>) var_8)) : (var_5))), (((/* implicit */val<unsigned long long int>) ((((/* implicit */val<bool>) var_9)) ? (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_4))) : (var_8)))))) : (((/* implicit */val<unsigned long long int>) var_1))));
            *var_17 -= ((/* implicit */val<unsigned short>) ((((/* implicit */val<bool>) ((((((/* implicit */val<bool>) var_3)) || (((/* implicit */val<bool>) var_3)))) ? (min((var_5), (((/* implicit */val<unsigned long long int>) var_4)))) : (min((var_5), (((/* implicit */val<unsigned long long int>) var_3))))))) ? ((~(((((/* implicit */val<bool>) var_2)) ? (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_4))) : (var_5))))) : (((/* implicit */val<unsigned long long int>) var_8))));
            *var_18 = ((/* implicit */val<unsigned short>) ((((/* implicit */val<bool>) var_1)) ? (((/* implicit */val<int>) var_6)) : ((~(((/* implicit */val<int>) ((((/* implicit */val<bool>) var_3)) || (((/* implicit */val<bool>) var_7)))))))));
        }

        *var_19 = var_0;
    }

}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 7431147476012465770ULL;
long long int var_1 = -6354950378301016335LL;
int var_2 = 898197625;
short var_3 = (short)32745;
bool var_4 = (bool)0;
unsigned long long int var_5 = 14928087312685320289ULL;
unsigned short var_6 = (unsigned short)48032;
unsigned long long int var_7 = 10421841239170016036ULL;
unsigned int var_8 = 2925501361U;
signed char var_9 = (signed char)7;
int zero = 0;
signed char var_10 = (signed char)46;
unsigned short var_11 = (unsigned short)4690;
bool var_12 = (bool)1;
unsigned short var_13 = (unsigned short)28843;
unsigned long long int var_14 = 4425302429657254148ULL;
unsigned short var_15 = (unsigned short)42637;
unsigned short var_16 = (unsigned short)56177;
unsigned short var_17 = (unsigned short)47844;
unsigned short var_18 = (unsigned short)48005;
unsigned long long int var_19 = 9141541352766894707ULL;
void init() {
}

void checksum() {
    value_mismatch |= var_10 != (signed char)36;
    value_mismatch |= var_11 != (unsigned short)7112;
    value_mismatch |= var_12 != (bool)1;
    value_mismatch |= var_13 != (unsigned short)28843;
    value_mismatch |= var_14 != 4425302429657254148ULL;
    value_mismatch |= var_15 != (unsigned short)51297;
    value_mismatch |= var_16 != (unsigned short)39857;
    value_mismatch |= var_17 != (unsigned short)7987;
    value_mismatch |= var_18 != (unsigned short)48032;
    value_mismatch |= var_19 != 7431147476012465770ULL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_2, var_3, var_4, var_5, var_6, var_7, var_8, var_9, zero, &var_10, &var_11, &var_12, &var_13, &var_14, &var_15, &var_16, &var_17, &var_18, &var_19);
  checksum();
}
