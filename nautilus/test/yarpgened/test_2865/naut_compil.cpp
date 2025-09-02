/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 2865
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=2865
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
void test(val<short> var_0, val<long long int> var_1, val<long long int> var_2, val<unsigned int> var_4, val<short> var_5, val<unsigned char> var_6, val<unsigned int> var_7, val<unsigned short> var_8, val<unsigned short> var_10, val<signed char> var_11, val<signed char> var_13, val<int> zero, val<signed char*> var_14, val<bool*> var_15, val<bool*> var_16, val<bool*> var_17, val<unsigned short*> var_18, val<signed char*> var_19, val<bool*> var_20, val<bool*> var_21, val<long long int*> var_22) {
    if (((/* implicit */val<bool>) min((((/* implicit */val<long long int>) var_11)), (((((var_1) + (((/* implicit */val<long long int>) var_4)))) << (((((((/* implicit */val<int>) (val<signed char>)127)) - (((/* implicit */val<int>) var_11)))) - (12))))))))
    {
        *var_14 = ((/* implicit */val<signed char>) ((((/* implicit */val<unsigned int>) min((((/* implicit */val<int>) ((val<short>) var_11))), (((((/* implicit */val<bool>) var_6)) ? (((/* implicit */val<int>) var_11)) : (((/* implicit */val<int>) var_11))))))) | ((+(1395216230U)))));
        if (((/* implicit */val<bool>) var_1))
        {
            *var_15 ^= ((/* implicit */val<bool>) max((((((/* implicit */val<int>) (val<signed char>)90)) / (((/* implicit */val<int>) (val<bool>)1)))), ((+(((val<int>) 1594524971U))))));
            *var_16 = ((/* implicit */val<bool>) var_10);
            *var_17 = (!((val<bool>)1));
        }

    }

    if (((/* implicit */val<bool>) max((((/* implicit */val<unsigned long long int>) var_0)), (min((max((((/* implicit */val<unsigned long long int>) (val<signed char>)74)), (7557696630040327817ULL))), (((/* implicit */val<unsigned long long int>) max(((val<bool>)1), ((val<bool>)1)))))))))
    {
        *var_18 = ((/* implicit */val<unsigned short>) var_11);
        *var_19 = ((/* implicit */val<signed char>) ((((/* implicit */val<bool>) var_13)) ? (((/* implicit */val<long long int>) 2655157384U)) : ((+(var_2)))));
    }

    if (((/* implicit */val<bool>) (+(((/* implicit */val<int>) (val<unsigned short>)28282)))))
    {
        *var_20 = ((/* implicit */val<bool>) var_7);
        if (((/* implicit */val<bool>) min((var_1), (((/* implicit */val<long long int>) max((((/* implicit */val<unsigned int>) var_8)), (((val<unsigned int>) var_5))))))))
        {
            *var_21 = ((/* implicit */val<bool>) ((((((/* implicit */val<int>) var_10)) == (((/* implicit */val<int>) var_8)))) ? ((-(min((1594524971U), (((/* implicit */val<unsigned int>) (val<bool>)1)))))) : (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) ((((/* implicit */val<int>) var_6)) > (((/* implicit */val<int>) ((val<unsigned short>) var_2)))))))));
            *var_22 = ((/* implicit */val<long long int>) max((var_7), (((/* implicit */val<unsigned int>) var_10))));
        }

    }

}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-30616;
long long int var_1 = 6495318607014156748LL;
long long int var_2 = 1291892225436699846LL;
unsigned int var_4 = 3723887310U;
short var_5 = (short)-8875;
unsigned char var_6 = (unsigned char)179;
unsigned int var_7 = 924485294U;
unsigned short var_8 = (unsigned short)19682;
unsigned short var_10 = (unsigned short)57364;
signed char var_11 = (signed char)114;
signed char var_13 = (signed char)112;
int zero = 0;
signed char var_14 = (signed char)5;
bool var_15 = (bool)0;
bool var_16 = (bool)0;
bool var_17 = (bool)1;
unsigned short var_18 = (unsigned short)59768;
signed char var_19 = (signed char)65;
bool var_20 = (bool)0;
bool var_21 = (bool)0;
long long int var_22 = -7587939700113826953LL;
void init() {
}

void checksum() {
    value_mismatch |= var_14 != (signed char)118;
    value_mismatch |= var_15 != (bool)1;
    value_mismatch |= var_16 != (bool)1;
    value_mismatch |= var_17 != (bool)0;
    value_mismatch |= var_18 != (unsigned short)114;
    value_mismatch |= var_19 != (signed char)-120;
    value_mismatch |= var_20 != (bool)1;
    value_mismatch |= var_21 != (bool)0;
    value_mismatch |= var_22 != 924485294LL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_2, var_4, var_5, var_6, var_7, var_8, var_10, var_11, var_13, zero, &var_14, &var_15, &var_16, &var_17, &var_18, &var_19, &var_20, &var_21, &var_22);
  checksum();
  assert(!value_mismatch);
}
