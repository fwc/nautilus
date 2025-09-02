/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 7666
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=7666
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
void test(val<unsigned short> var_0, val<unsigned short> var_1, val<bool> var_2, val<unsigned short> var_3, val<unsigned char> var_4, val<signed char> var_6, val<unsigned short> var_7, val<bool> var_9, val<signed char> var_10, val<signed char> var_11, val<unsigned short> var_12, val<bool> var_13, val<int> zero, val<unsigned long long int*> var_14, val<signed char*> var_15, val<signed char*> var_16, val<bool*> var_17, val<signed char*> var_18, val<signed char*> var_19, val<unsigned short*> var_20, val<unsigned short*> var_21, val<signed char*> var_22, val<long long int*> var_23, val<long long int*> var_24) {
    *var_14 *= ((/* implicit */val<unsigned long long int>) ((((((/* implicit */val<int>) var_7)) >> (((((val<long long int>) var_7)) - (40994LL))))) - ((~(((/* implicit */val<int>) (val<signed char>)-106))))));
    *var_15 = (val<signed char>)-97;
    *var_16 = var_11;
    if (((/* implicit */val<bool>) max((((/* implicit */val<int>) var_12)), (((((((/* implicit */val<bool>) (val<signed char>)106)) ? (((/* implicit */val<int>) var_0)) : (((/* implicit */val<int>) var_1)))) + (((/* implicit */val<int>) var_4)))))))
    {
        *var_17 = ((/* implicit */val<bool>) (val<signed char>)105);
        if (((/* implicit */val<bool>) var_7))
        {
            if (((/* implicit */val<bool>) ((((/* implicit */val<bool>) (val<signed char>)117)) ? (((((/* implicit */val<int>) var_12)) / (((/* implicit */val<int>) max((var_7), (var_0)))))) : (((/* implicit */val<int>) ((val<bool>) ((var_13) ? (((/* implicit */val<int>) var_3)) : (((/* implicit */val<int>) var_7)))))))))
            {
                *var_18 = ((/* implicit */val<signed char>) min((*var_18), (((/* implicit */val<signed char>) max((min((((((((/* implicit */val<int>) (val<signed char>)-106)) + (2147483647))) >> (((/* implicit */val<int>) var_13)))), (((/* implicit */val<int>) (val<signed char>)106)))), ((+(((/* implicit */val<int>) var_11)))))))));
                *var_19 = ((/* implicit */val<signed char>) var_9);
            }
            else
            {
                *var_20 = ((/* implicit */val<unsigned short>) (-(((/* implicit */val<int>) (val<signed char>)85))));
                *var_21 = ((/* implicit */val<unsigned short>) (!(((/* implicit */val<bool>) ((((/* implicit */val<int>) var_2)) / ((+(((/* implicit */val<int>) (val<signed char>)-106)))))))));
            }

            *var_22 = ((/* implicit */val<signed char>) min((*var_22), (((/* implicit */val<signed char>) (!(((/* implicit */val<bool>) ((((/* implicit */val<int>) ((val<bool>) var_6))) >> (((((/* implicit */val<int>) var_10)) - (107)))))))))));
            *var_23 = ((/* implicit */val<long long int>) ((((val<unsigned int>) ((((/* implicit */val<int>) var_12)) < (((/* implicit */val<int>) (val<signed char>)-106))))) ^ (((/* implicit */val<unsigned int>) min((((/* implicit */val<int>) ((((/* implicit */val<int>) var_10)) > (((/* implicit */val<int>) (val<signed char>)-76))))), (((((((/* implicit */val<int>) (val<signed char>)-105)) + (2147483647))) << (((((/* implicit */val<int>) (val<signed char>)105)) - (105))))))))));
        }

        *var_24 ^= ((/* implicit */val<long long int>) var_2);
    }

}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)9883;
unsigned short var_1 = (unsigned short)30344;
bool var_2 = (bool)1;
unsigned short var_3 = (unsigned short)25709;
unsigned char var_4 = (unsigned char)185;
signed char var_6 = (signed char)-50;
unsigned short var_7 = (unsigned short)41002;
bool var_9 = (bool)0;
signed char var_10 = (signed char)108;
signed char var_11 = (signed char)-106;
unsigned short var_12 = (unsigned short)20651;
bool var_13 = (bool)1;
int zero = 0;
unsigned long long int var_14 = 4695895164574034699ULL;
signed char var_15 = (signed char)75;
signed char var_16 = (signed char)-7;
bool var_17 = (bool)1;
signed char var_18 = (signed char)-70;
signed char var_19 = (signed char)-97;
unsigned short var_20 = (unsigned short)44238;
unsigned short var_21 = (unsigned short)58738;
signed char var_22 = (signed char)-107;
long long int var_23 = -8505046054761132210LL;
long long int var_24 = 7228124206030161614LL;
void init() {
}

void checksum() {
    value_mismatch |= var_14 != 19817019638185821ULL;
    value_mismatch |= var_15 != (signed char)-97;
    value_mismatch |= var_16 != (signed char)-106;
    value_mismatch |= var_17 != (bool)1;
    value_mismatch |= var_18 != (signed char)-70;
    value_mismatch |= var_19 != (signed char)-97;
    value_mismatch |= var_20 != (unsigned short)65451;
    value_mismatch |= var_21 != (unsigned short)1;
    value_mismatch |= var_22 != (signed char)-107;
    value_mismatch |= var_23 != 1LL;
    value_mismatch |= var_24 != 7228124206030161615LL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_2, var_3, var_4, var_6, var_7, var_9, var_10, var_11, var_12, var_13, zero, &var_14, &var_15, &var_16, &var_17, &var_18, &var_19, &var_20, &var_21, &var_22, &var_23, &var_24);
  checksum();
  assert(!value_mismatch);
}
