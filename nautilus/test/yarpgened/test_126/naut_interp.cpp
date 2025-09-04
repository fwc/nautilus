/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 126
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=126
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
void test(val<unsigned int> var_0, val<unsigned int> var_1, val<unsigned long long int> var_3, val<short> var_4, val<unsigned long long int> var_9, val<unsigned int> var_10, val<short> var_11, val<unsigned long long int> var_13, val<bool> var_15, val<int> zero, val<int*> var_16, val<unsigned short*> var_17, val<int*> var_18, val<unsigned char*> var_19, val<unsigned long long int*> var_20, val<unsigned long long int*> var_21, val<long long int*> var_22, val<int*> var_23, val<int*> var_24, val<unsigned int*> var_25, val<unsigned char*> var_26) {
    *var_16 |= ((/* implicit */val<int>) ((((/* implicit */val<bool>) min((max((((/* implicit */val<long long int>) (val<bool>)0)), (5291821323781473828LL))), (((/* implicit */val<long long int>) (val<signed char>)127))))) && (((/* implicit */val<bool>) ((val<unsigned long long int>) (-(((/* implicit */val<int>) (val<short>)127))))))));
    *var_17 = ((/* implicit */val<unsigned short>) ((val<int>) var_0));
    if (((/* implicit */val<bool>) var_10))
    {
        *var_18 = ((/* implicit */val<int>) ((((/* implicit */val<bool>) (~(((/* implicit */val<int>) var_4))))) ? ((-(min((((/* implicit */val<unsigned long long int>) var_11)), (var_3))))) : (((/* implicit */val<unsigned long long int>) (-((-(((/* implicit */val<int>) (val<signed char>)33)))))))));
        *var_19 = ((/* implicit */val<unsigned char>) ((((/* implicit */val<unsigned long long int>) (~(((/* implicit */val<int>) min((((/* implicit */val<short>) var_15)), ((val<short>)-127))))))) - (min((((/* implicit */val<unsigned long long int>) var_1)), (var_13)))));
    }
    else
    {
        if (((min((((/* implicit */val<unsigned int>) (-(((/* implicit */val<int>) (val<short>)127))))), (535822336U))) == (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) ((((/* implicit */val<unsigned long long int>) (+(((/* implicit */val<int>) (val<short>)-127))))) == (((var_13) - (((/* implicit */val<unsigned long long int>) var_1))))))))))
        {
            *var_20 += ((/* implicit */val<unsigned long long int>) (val<unsigned short>)65535);
            if (((/* implicit */val<bool>) (val<unsigned short>)1))
            {
                *var_21 = var_13;
                *var_22 = ((/* implicit */val<long long int>) var_9);
                if (((/* implicit */val<bool>) min((-1), (((/* implicit */val<int>) (val<unsigned short>)2)))))
                {
                    *var_23 = ((/* implicit */val<int>) var_11);
                    *var_24 = ((/* implicit */val<int>) max((*var_24), (((/* implicit */val<int>) (val<unsigned short>)65534))));
                }

            }

        }

        *var_25 = ((/* implicit */val<unsigned int>) ((val<bool>) (+(var_9))));
        *var_26 = ((/* implicit */val<unsigned char>) ((((/* implicit */val<unsigned long long int>) (-(((((((/* implicit */val<int>) var_11)) + (2147483647))) >> (((var_10) - (1680565476U)))))))) == (((((/* implicit */val<bool>) ((((/* implicit */val<bool>) (val<unsigned short>)2)) ? (16317716641276881459ULL) : (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) (val<bool>)1)))))) ? (var_9) : (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_15)))))));
    }

}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2623433905U;
unsigned int var_1 = 2102552393U;
unsigned long long int var_3 = 16888405222698269382ULL;
short var_4 = (short)-30929;
unsigned long long int var_9 = 875744556180263709ULL;
unsigned int var_10 = 1680565497U;
short var_11 = (short)-30186;
unsigned long long int var_13 = 13846173285647321797ULL;
bool var_15 = (bool)1;
int zero = 0;
int var_16 = 189291623;
unsigned short var_17 = (unsigned short)5203;
int var_18 = 1708053074;
unsigned char var_19 = (unsigned char)73;
unsigned long long int var_20 = 10176088237450058411ULL;
unsigned long long int var_21 = 4559884507849265573ULL;
long long int var_22 = 5368644342953177933LL;
int var_23 = 1865836414;
int var_24 = -1557279733;
unsigned int var_25 = 3393947927U;
unsigned char var_26 = (unsigned char)61;
void init() {
}

void checksum() {
    value_mismatch |= var_16 != 189291623;
    value_mismatch |= var_17 != (unsigned short)27825;
    value_mismatch |= var_18 != -1237859014;
    value_mismatch |= var_19 != (unsigned char)53;
    value_mismatch |= var_20 != 10176088237450058411ULL;
    value_mismatch |= var_21 != 4559884507849265573ULL;
    value_mismatch |= var_22 != 5368644342953177933LL;
    value_mismatch |= var_23 != 1865836414;
    value_mismatch |= var_24 != -1557279733;
    value_mismatch |= var_25 != 3393947927U;
    value_mismatch |= var_26 != (unsigned char)61;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_3, var_4, var_9, var_10, var_11, var_13, var_15, zero, &var_16, &var_17, &var_18, &var_19, &var_20, &var_21, &var_22, &var_23, &var_24, &var_25, &var_26);
  checksum();
  assert(!value_mismatch);
}
