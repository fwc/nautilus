/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 1342
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=1342
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
void test(val<unsigned short> var_0, val<signed char> var_1, val<unsigned long long int> var_2, val<unsigned char> var_4, val<unsigned char> var_5, val<short> var_7, val<short> var_9, val<short> var_11, val<unsigned long long int> var_13, val<unsigned long long int> var_15, val<int> zero, val<unsigned short*> var_16, val<unsigned short*> var_17, val<bool*> var_18, val<signed char*> var_19, val<unsigned long long int*> var_20, val<short*> var_21, val<signed char*> var_22, val<int*> var_23, val<short*> var_24) {
    *var_16 = ((/* implicit */val<unsigned short>) var_7);
    if (((/* implicit */val<bool>) var_2))
    {
        if (((/* implicit */val<bool>) min((((/* implicit */val<unsigned int>) (val<short>)0)), (4294967295U))))
        {
            if (((/* implicit */val<bool>) ((((max((((/* implicit */val<long long int>) (val<short>)32761)), (3377699720527872LL))) << (((((/* implicit */val<int>) max(((val<short>)19959), (var_11)))) - (19947))))) ^ (((/* implicit */val<long long int>) ((/* implicit */val<int>) (val<bool>)1))))))
            {
                *var_17 = ((/* implicit */val<unsigned short>) (-(((/* implicit */val<int>) ((val<short>) ((((/* implicit */val<int>) (val<bool>)1)) << (((1579327738U) - (1579327727U)))))))));
                *var_18 &= (val<bool>)1;
            }

            *var_19 = ((/* implicit */val<signed char>) max((((val<unsigned int>) ((18446744073709551615ULL) >= (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_9)))))), (((/* implicit */val<unsigned int>) ((((14880678048886499145ULL) << (((((/* implicit */val<int>) (val<short>)32756)) - (32727))))) != (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) (!(((/* implicit */val<bool>) (val<unsigned short>)61440)))))))))));
        }

        *var_20 = ((/* implicit */val<unsigned long long int>) (+(((/* implicit */val<int>) (val<unsigned short>)32616))));
        if (((((((/* implicit */val<bool>) var_11)) ? (((/* implicit */val<int>) ((-1600988651) >= (((/* implicit */val<int>) (val<short>)-32747))))) : (((/* implicit */val<int>) var_11)))) >= (((/* implicit */val<int>) var_5))))
        {
            *var_21 -= ((/* implicit */val<short>) ((((/* implicit */val<unsigned long long int>) max((((/* implicit */val<long long int>) (-(((/* implicit */val<int>) (val<signed char>)127))))), (2070677555868086485LL)))) + (max((((/* implicit */val<unsigned long long int>) max((var_7), (((/* implicit */val<short>) (val<bool>)1))))), (((((/* implicit */val<bool>) var_4)) ? (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_0))) : (var_15)))))));
            *var_22 = ((/* implicit */val<signed char>) ((((/* implicit */val<bool>) var_4)) ? (((/* implicit */val<int>) min((((((/* implicit */val<unsigned int>) 2147483647)) > (2146435072U))), (((var_13) == (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) (val<short>)-5515)))))))) : (((/* implicit */val<int>) var_9))));
        }

    }

    *var_23 = min((max((((/* implicit */val<int>) ((var_13) >= (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) (val<unsigned char>)37)))))), ((~(((/* implicit */val<int>) (val<bool>)0)))))), (((/* implicit */val<int>) var_4)));
    *var_24 = ((/* implicit */val<short>) min((*var_24), (((/* implicit */val<short>) ((((/* implicit */val<bool>) max((var_15), (max((var_2), (((/* implicit */val<unsigned long long int>) var_9))))))) ? (((((/* implicit */val<unsigned long long int>) ((9007199120523264LL) / (((/* implicit */val<long long int>) ((/* implicit */val<int>) var_0)))))) / (max((((/* implicit */val<unsigned long long int>) (val<bool>)1)), (var_13))))) : (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) ((val<bool>) (-(((/* implicit */val<int>) var_1))))))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)64322;
signed char var_1 = (signed char)91;
unsigned long long int var_2 = 15465715639493430116ULL;
unsigned char var_4 = (unsigned char)79;
unsigned char var_5 = (unsigned char)152;
short var_7 = (short)-9159;
short var_9 = (short)23385;
short var_11 = (short)4581;
unsigned long long int var_13 = 2497370987364414829ULL;
unsigned long long int var_15 = 13114405821472506914ULL;
int zero = 0;
unsigned short var_16 = (unsigned short)56785;
unsigned short var_17 = (unsigned short)61221;
bool var_18 = (bool)0;
signed char var_19 = (signed char)-120;
unsigned long long int var_20 = 4429627425902142771ULL;
short var_21 = (short)25719;
signed char var_22 = (signed char)-113;
int var_23 = 2009223056;
short var_24 = (short)8229;
void init() {
}

void checksum() {
    value_mismatch |= var_16 != (unsigned short)56377;
    value_mismatch |= var_17 != (unsigned short)61221;
    value_mismatch |= var_18 != (bool)0;
    value_mismatch |= var_19 != (signed char)-120;
    value_mismatch |= var_20 != 32616ULL;
    value_mismatch |= var_21 != (short)25719;
    value_mismatch |= var_22 != (signed char)-113;
    value_mismatch |= var_23 != 1;
    value_mismatch |= var_24 != (short)0;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_2, var_4, var_5, var_7, var_9, var_11, var_13, var_15, zero, &var_16, &var_17, &var_18, &var_19, &var_20, &var_21, &var_22, &var_23, &var_24);
  checksum();
  assert(!value_mismatch);
}
