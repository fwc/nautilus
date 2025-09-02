/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 5623
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=5623
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
void test(val<unsigned short> var_0, val<long long int> var_1, val<bool> var_2, val<short> var_3, val<bool> var_4, val<signed char> var_5, val<short> var_6, val<unsigned long long int> var_7, val<long long int> var_8, val<signed char> var_9, val<long long int> var_10, val<signed char> var_11, val<long long int> var_12, val<unsigned long long int> var_13, val<bool> var_14, val<bool> var_15, val<unsigned int> var_17, val<unsigned short> var_18, val<int> zero, val<unsigned char*> var_19, val<unsigned int*> var_20, val<unsigned int*> var_21, val<signed char*> var_22, val<bool*> var_23, val<bool*> var_24, val<unsigned short*> var_25) {
    *var_19 = ((/* implicit */val<unsigned char>) ((((/* implicit */val<bool>) ((((/* implicit */val<int>) min((var_2), (var_14)))) >> (((((((/* implicit */val<long long int>) ((/* implicit */val<int>) var_9))) ^ (var_10))) + (1915335514782101296LL)))))) ? (((/* implicit */val<long long int>) ((/* implicit */val<int>) ((((/* implicit */val<long long int>) ((/* implicit */val<int>) var_18))) == (((var_10) + (((/* implicit */val<long long int>) ((/* implicit */val<int>) var_2))))))))) : (((var_14) ? (((((/* implicit */val<bool>) var_3)) ? (var_1) : (var_12))) : (((/* implicit */val<long long int>) ((/* implicit */val<int>) var_3)))))));
    *var_20 = ((/* implicit */val<unsigned int>) ((((/* implicit */val<bool>) (-(((((/* implicit */val<bool>) var_8)) ? (var_17) : (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_11)))))))) ? (((/* implicit */val<long long int>) ((/* implicit */val<int>) max((var_18), (((/* implicit */val<unsigned short>) var_5)))))) : (max((min((var_1), (((/* implicit */val<long long int>) var_2)))), (((/* implicit */val<long long int>) ((((/* implicit */val<bool>) (val<signed char>)-10)) ? (((/* implicit */val<int>) (val<signed char>)-85)) : (((/* implicit */val<int>) (val<bool>)1)))))))));
    if (((/* implicit */val<bool>) var_7))
    {
        *var_21 = ((/* implicit */val<unsigned int>) ((min((508856406U), (((/* implicit */val<unsigned int>) (val<unsigned short>)21816)))) == (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) ((((((/* implicit */val<bool>) var_6)) ? (((/* implicit */val<int>) var_0)) : (((/* implicit */val<int>) var_11)))) == (((/* implicit */val<int>) var_2))))))));
        *var_22 = ((/* implicit */val<signed char>) min((*var_22), (((/* implicit */val<signed char>) ((val<unsigned short>) min((((/* implicit */val<unsigned long long int>) ((val<int>) var_6))), (((((/* implicit */val<bool>) var_0)) ? (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_3))) : (var_7)))))))));
        *var_23 = ((/* implicit */val<bool>) min((((var_4) ? (((((/* implicit */val<bool>) var_3)) ? (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_2))) : (var_7))) : (((/* implicit */val<unsigned long long int>) ((var_2) ? (((/* implicit */val<int>) var_18)) : (((/* implicit */val<int>) var_14))))))), (((/* implicit */val<unsigned long long int>) (!(((/* implicit */val<bool>) var_7)))))));
        *var_24 = ((/* implicit */val<bool>) ((((var_10) <= (((((/* implicit */val<bool>) var_9)) ? (((/* implicit */val<long long int>) ((/* implicit */val<int>) var_3))) : (var_12))))) ? (min((((/* implicit */val<unsigned long long int>) var_2)), (((((/* implicit */val<bool>) var_3)) ? (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_5))) : (var_13))))) : (max((((((/* implicit */val<bool>) var_11)) ? (((/* implicit */val<unsigned long long int>) var_17)) : (var_7))), (((((/* implicit */val<bool>) var_1)) ? (var_13) : (((/* implicit */val<unsigned long long int>) var_1))))))));
        *var_25 = ((val<unsigned short>) ((((/* implicit */val<bool>) ((((/* implicit */val<bool>) var_9)) ? (var_10) : (((/* implicit */val<long long int>) ((/* implicit */val<int>) var_11)))))) ? (((var_7) + (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_15))))) : (((/* implicit */val<unsigned long long int>) min((((/* implicit */val<unsigned int>) (val<unsigned short>)43720)), (316891115U))))));
    }

}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)2353;
long long int var_1 = 978957916568007868LL;
bool var_2 = (bool)0;
short var_3 = (short)27566;
bool var_4 = (bool)1;
signed char var_5 = (signed char)-76;
short var_6 = (short)5662;
unsigned long long int var_7 = 9595553331579961499ULL;
long long int var_8 = 2972895626132759289LL;
signed char var_9 = (signed char)23;
long long int var_10 = -1915335514782101311LL;
signed char var_11 = (signed char)104;
long long int var_12 = 7380369722277047082LL;
unsigned long long int var_13 = 17879277601029130622ULL;
bool var_14 = (bool)0;
bool var_15 = (bool)1;
unsigned int var_17 = 3502095469U;
unsigned short var_18 = (unsigned short)27175;
int zero = 0;
unsigned char var_19 = (unsigned char)202;
unsigned int var_20 = 1837449129U;
unsigned int var_21 = 1739683992U;
signed char var_22 = (signed char)-13;
bool var_23 = (bool)0;
bool var_24 = (bool)0;
unsigned short var_25 = (unsigned short)11275;
void init() {
}

void checksum() {
    value_mismatch |= var_19 != (unsigned char)174;
    value_mismatch |= var_20 != 65460U;
    value_mismatch |= var_21 != 0U;
    value_mismatch |= var_22 != (signed char)-13;
    value_mismatch |= var_23 != (bool)0;
    value_mismatch |= var_24 != (bool)0;
    value_mismatch |= var_25 != (unsigned short)49308;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_2, var_3, var_4, var_5, var_6, var_7, var_8, var_9, var_10, var_11, var_12, var_13, var_14, var_15, var_17, var_18, zero, &var_19, &var_20, &var_21, &var_22, &var_23, &var_24, &var_25);
  checksum();
  assert(!value_mismatch);
}
