/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 7116
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=7116
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
void test(val<long long int> var_1, val<unsigned short> var_2, val<unsigned char> var_3, val<unsigned short> var_4, val<unsigned long long int> var_5, val<unsigned char> var_6, val<unsigned char> var_7, val<short> var_8, val<signed char> var_9, val<unsigned long long int> var_12, val<bool> var_15, val<short> var_16, val<unsigned long long int> var_17, val<signed char> var_18, val<long long int> var_19, val<int> zero, val<unsigned char*> var_20, val<signed char*> var_21, val<signed char*> var_22, val<bool*> var_23, val<unsigned char*> var_24, val<unsigned int*> var_25, val<unsigned long long int*> var_26) {
    *var_20 = ((/* implicit */val<unsigned char>) ((((((/* implicit */val<bool>) (~(((/* implicit */val<int>) (val<short>)-5442))))) && (((/* implicit */val<bool>) ((((/* implicit */val<bool>) var_19)) ? (var_12) : (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_9)))))))) ? (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) ((((/* implicit */val<bool>) ((((/* implicit */val<bool>) (val<unsigned char>)241)) ? (((/* implicit */val<long long int>) ((/* implicit */val<int>) var_8))) : (var_1)))) || (((((/* implicit */val<int>) var_4)) != (((/* implicit */val<int>) var_15)))))))) : (((((((/* implicit */val<int>) var_6)) != (((/* implicit */val<int>) (val<unsigned char>)17)))) ? (((((/* implicit */val<bool>) var_7)) ? (((/* implicit */val<unsigned long long int>) var_19)) : (var_5))) : (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_7)))))));
    if (((/* implicit */val<bool>) var_7))
    {
        *var_21 = ((/* implicit */val<signed char>) max((*var_21), (((/* implicit */val<signed char>) ((((/* implicit */val<bool>) var_16)) ? (((((/* implicit */val<bool>) var_5)) ? (((((/* implicit */val<bool>) 3441371121292957960ULL)) ? (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) (val<short>)-13274))) : (var_17))) : (((/* implicit */val<unsigned long long int>) ((((/* implicit */val<bool>) var_6)) ? (var_19) : (((/* implicit */val<long long int>) ((/* implicit */val<int>) var_6)))))))) : (((((/* implicit */val<bool>) ((((/* implicit */val<bool>) (val<unsigned char>)6)) ? (var_12) : (var_5)))) ? (((((/* implicit */val<bool>) var_16)) ? (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_9))) : (var_5))) : (((/* implicit */val<unsigned long long int>) var_1)))))))));
        *var_22 = ((/* implicit */val<signed char>) ((((/* implicit */val<bool>) 0ULL)) ? (-1109132173) : (((/* implicit */val<int>) (val<unsigned char>)255))));
        *var_23 = ((/* implicit */val<bool>) var_16);
        *var_24 = ((/* implicit */val<unsigned char>) ((((((/* implicit */val<long long int>) ((/* implicit */val<int>) var_9))) ^ (((var_15) ? (var_1) : (((/* implicit */val<long long int>) ((/* implicit */val<int>) var_2))))))) / (((((/* implicit */val<bool>) ((((/* implicit */val<bool>) var_8)) ? (((/* implicit */val<int>) var_18)) : (((/* implicit */val<int>) (val<unsigned char>)250))))) ? (((((/* implicit */val<bool>) 3612061484U)) ? (((/* implicit */val<long long int>) ((/* implicit */val<int>) (val<unsigned char>)243))) : (var_19))) : (((/* implicit */val<long long int>) ((/* implicit */val<int>) var_18)))))));
        *var_25 = ((/* implicit */val<unsigned int>) max((*var_25), (((/* implicit */val<unsigned int>) var_8))));
    }

    *var_26 = (+(((((/* implicit */val<bool>) var_3)) ? (((/* implicit */val<unsigned long long int>) var_19)) : (var_5))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -5102353773521673046LL;
unsigned short var_2 = (unsigned short)7862;
unsigned char var_3 = (unsigned char)179;
unsigned short var_4 = (unsigned short)21358;
unsigned long long int var_5 = 340673866263870802ULL;
unsigned char var_6 = (unsigned char)247;
unsigned char var_7 = (unsigned char)7;
short var_8 = (short)27079;
signed char var_9 = (signed char)-16;
unsigned long long int var_12 = 1008740199730964734ULL;
bool var_15 = (bool)1;
short var_16 = (short)-12058;
unsigned long long int var_17 = 14343305724146594519ULL;
signed char var_18 = (signed char)-17;
long long int var_19 = -8858982012275923285LL;
int zero = 0;
unsigned char var_20 = (unsigned char)248;
signed char var_21 = (signed char)-75;
signed char var_22 = (signed char)-1;
bool var_23 = (bool)1;
unsigned char var_24 = (unsigned char)38;
unsigned int var_25 = 1085127831U;
unsigned long long int var_26 = 8071281613437566465ULL;
void init() {
}

void checksum() {
    value_mismatch |= var_20 != (unsigned char)1;
    value_mismatch |= var_21 != (signed char)38;
    value_mismatch |= var_22 != (signed char)-1;
    value_mismatch |= var_23 != (bool)1;
    value_mismatch |= var_24 != (unsigned char)176;
    value_mismatch |= var_25 != 1085127831U;
    value_mismatch |= var_26 != 9587762061433628331ULL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_2, var_3, var_4, var_5, var_6, var_7, var_8, var_9, var_12, var_15, var_16, var_17, var_18, var_19, zero, &var_20, &var_21, &var_22, &var_23, &var_24, &var_25, &var_26);
  checksum();
}
