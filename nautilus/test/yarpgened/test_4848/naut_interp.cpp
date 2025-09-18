/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 4848
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=4848
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
void test(val<signed char> var_0, val<signed char> var_1, val<long long int> var_2, val<unsigned char> var_3, val<bool> var_4, val<signed char> var_7, val<signed char> var_10, val<bool> var_12, val<int> var_13, val<unsigned int> var_15, val<int> zero, val<bool*> var_16, val<int*> var_17, val<unsigned short*> var_18, val<bool*> var_19, val<unsigned short*> var_20) {
    *var_16 = ((/* implicit */val<bool>) ((((/* implicit */val<bool>) var_0)) ? (((/* implicit */val<unsigned long long int>) min((((var_12) ? (((/* implicit */val<long long int>) ((/* implicit */val<int>) var_1))) : (6875290994928426321LL))), (((((/* implicit */val<bool>) var_13)) ? (var_2) : (((/* implicit */val<long long int>) ((/* implicit */val<int>) (val<unsigned char>)126)))))))) : (min((10941759073478800272ULL), (((/* implicit */val<unsigned long long int>) ((((/* implicit */val<int>) var_7)) < (((/* implicit */val<int>) (val<signed char>)-124)))))))));
    if (((/* implicit */val<bool>) ((val<signed char>) (~(((((/* implicit */val<bool>) var_2)) ? (((/* implicit */val<int>) (val<unsigned char>)126)) : (((/* implicit */val<int>) var_0))))))))
    {
        if (((/* implicit */val<bool>) ((((((/* implicit */val<bool>) ((((/* implicit */val<bool>) var_10)) ? (((/* implicit */val<unsigned long long int>) var_2)) : (7504985000230751344ULL)))) && (((/* implicit */val<bool>) ((((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_3))) + (var_15)))))) ? (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) (val<unsigned char>)47))) : (((val<unsigned int>) (val<unsigned char>)136)))))
        {
            *var_17 = ((/* implicit */val<int>) var_7);
            *var_18 = ((/* implicit */val<unsigned short>) (-(((((((/* implicit */val<int>) var_1)) << (((((/* implicit */val<int>) var_3)) - (59))))) + (((((/* implicit */val<bool>) var_10)) ? (((/* implicit */val<int>) var_3)) : (((/* implicit */val<int>) (val<signed char>)93))))))));
            *var_19 = ((/* implicit */val<bool>) 108838639702936275LL);
        }

        *var_20 = ((/* implicit */val<unsigned short>) min((((/* implicit */val<long long int>) ((((/* implicit */val<bool>) ((((/* implicit */val<bool>) (val<unsigned char>)97)) ? (10941759073478800279ULL) : (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_3)))))) ? (((/* implicit */val<int>) ((val<signed char>) 3900221530380161831LL))) : (((/* implicit */val<int>) ((((/* implicit */val<bool>) 10941759073478800273ULL)) && (((/* implicit */val<bool>) var_2)))))))), (((((/* implicit */val<bool>) ((((/* implicit */val<bool>) (val<signed char>)110)) ? (10941759073478800278ULL) : (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_4)))))) ? (((val<long long int>) var_0)) : (((/* implicit */val<long long int>) (-(((/* implicit */val<int>) (val<unsigned char>)140)))))))));
    }

}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-18;
signed char var_1 = (signed char)18;
long long int var_2 = 4820903386874690918LL;
unsigned char var_3 = (unsigned char)73;
bool var_4 = (bool)0;
signed char var_7 = (signed char)27;
signed char var_10 = (signed char)42;
bool var_12 = (bool)1;
int var_13 = 2056997740;
unsigned int var_15 = 1844586427U;
int zero = 0;
bool var_16 = (bool)0;
int var_17 = -112530090;
unsigned short var_18 = (unsigned short)53319;
bool var_19 = (bool)1;
unsigned short var_20 = (unsigned short)55901;
void init() {
}

void checksum() {
    value_mismatch |= var_16 != (bool)1;
    value_mismatch |= var_17 != 27;
    value_mismatch |= var_18 != (unsigned short)32695;
    value_mismatch |= var_19 != (bool)1;
    value_mismatch |= var_20 != (unsigned short)65518;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_2, var_3, var_4, var_7, var_10, var_12, var_13, var_15, zero, &var_16, &var_17, &var_18, &var_19, &var_20);
  checksum();
}
