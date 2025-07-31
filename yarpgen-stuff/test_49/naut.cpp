/*
yarpgen version 2.0 (build 887b8f1 on 1980:01:01)
Seed: 49
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --seed=49
*/

#include <nautilus/core.hpp>
#include <nautilus/Engine.hpp>
#include <cassert>

using namespace nautilus;

#define max(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a > _b ? _a : _b; })
#define min(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a < _b ? _a : _b; })
void test(val<unsigned int> var_0, val<bool> var_1, val<long long int> var_2, val<unsigned char> var_3, val<unsigned long long int> var_4, val<short> var_6, val<unsigned int> var_8, val<bool> var_9, val<unsigned long long int> var_10, val<int> var_11, val<int> zero, val<unsigned long long int*> var_12, val<long long int*> var_13, val<unsigned int*> var_14, val<short*> var_15, val<unsigned int*> var_16, val<short*> var_17, val<unsigned int*> var_18, val<int*> var_19) {
    /* LoopNest 2 */
    #pragma clang loop interleave(enable)
    for (val<unsigned long long int> i_0 = ((var_4) - (6755240978520620800ULL))/*0*/; i_0 < ((((/* implicit */val<unsigned long long int>) var_3)) - (31ULL))/*17*/; i_0 += ((((/* implicit */val<unsigned long long int>) var_8)) - (3426561250ULL))/*4*/) 
    {
        for (val<unsigned short> i_1 = ((((/* implicit */val<int>) ((val<unsigned short>) ((((/* implicit */val<bool>) var_2)) ? (arr_0 [i_0] [i_0]) : (arr_0 [i_0] [i_0]))))) - (41243))/*4*/; i_1 < ((((/* implicit */val<int>) ((/* implicit */val<unsigned short>) var_0))) - (24251))/*13*/; i_1 += ((((/* implicit */val<int>) ((/* implicit */val<unsigned short>) ((((/* implicit */val<long long int>) max(((+(var_0))), (((/* implicit */val<unsigned int>) ((val<short>) var_9)))))) > (var_2))))) + (2))/*2*/) 
        {
            {
                /* LoopSeq 1 */
                #pragma clang loop vectorize(enable)
                for (val<unsigned char> i_2 = ((((/* implicit */val<int>) ((/* implicit */val<unsigned char>) (val<signed char>)109))) - (109))/*0*/; i_2 < ((((/* implicit */val<int>) ((/* implicit */val<unsigned char>) var_4))) + (17))/*17*/; i_2 += ((((/* implicit */val<int>) ((/* implicit */val<unsigned char>) var_9))) + (1))/*2*/) 
                {
                    *var_12 = ((/* implicit */val<unsigned long long int>) var_8);
                    *var_13 = ((/* implicit */val<long long int>) (-(((((/* implicit */val<int>) (val<short>)32764)) ^ (((/* implicit */val<int>) (val<unsigned char>)0))))));
                    *var_14 = ((/* implicit */val<unsigned int>) max((var_14), (((/* implicit */val<unsigned int>) (-(((val<int>) ((((/* implicit */val<bool>) arr_2 [i_0])) && (((/* implicit */val<bool>) 4158649262U))))))))));
                    *var_15 = ((/* implicit */val<short>) arr_6 [i_0] [i_2] [i_1 - 4] [i_0]);
                }
                *var_16 = ((/* implicit */val<unsigned int>) ((((/* implicit */val<bool>) var_0)) ? (((/* implicit */val<int>) var_1)) : (((/* implicit */val<int>) arr_2 [i_0]))));
                *var_17 = ((/* implicit */val<short>) (val<unsigned char>)113);
            }
        } 
    } 
    *var_18 = ((/* implicit */val<unsigned int>) var_1);
    *var_19 = ((/* implicit */val<int>) ((var_10) + (((/* implicit */val<unsigned long long int>) ((((/* implicit */val<bool>) (+(((/* implicit */val<int>) var_6))))) ? (((/* implicit */val<long long int>) ((/* implicit */val<int>) ((var_4) == (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_6))))))) : (((var_2) >> (((var_11) - (581866584))))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1875205832U;
bool var_1 = (bool)0;
long long int var_2 = 2225035222996454194LL;
unsigned char var_3 = (unsigned char)48;
unsigned long long int var_4 = 6755240978520620800ULL;
short var_6 = (short)22758;
unsigned int var_8 = 3426561254U;
bool var_9 = (bool)1;
unsigned long long int var_10 = 6867779261255719371ULL;
int var_11 = 581866605;
int zero = 0;
unsigned long long int var_12 = 4801965227946435405ULL;
long long int var_13 = -8328783759814734988LL;
unsigned int var_14 = 4011934028U;
short var_15 = (short)11910;
unsigned int var_16 = 1278497854U;
short var_17 = (short)-4337;
unsigned int var_18 = 2651304517U;
int var_19 = -1542263672;
unsigned long long int arr_0 [17] [17] ;
unsigned char arr_2 [17] ;
long long int arr_6 [17] [17] [17] [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_0 [i_0] [i_1] = 17504114357138989343ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_2 [i_0] = (unsigned char)175;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    arr_6 [i_0] [i_1] [i_2] [i_3] = 2525566822686169797LL;
}

void checksum() {
    value_mismatch |= var_12 != 3426561254ULL;
    value_mismatch |= var_13 != -32764LL;
    value_mismatch |= var_14 != 4294967295U;
    value_mismatch |= var_15 != (short)-25915;
    value_mismatch |= var_16 != 0U;
    value_mismatch |= var_17 != (short)113;
    value_mismatch |= var_18 != 0U;
    value_mismatch |= var_19 != -554624565;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", false);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_2, var_3, var_4, var_6, var_8, var_9, var_10, var_11, zero, &var_12, &var_13, &var_14, &var_15, &var_16, &var_17, &var_18, &var_19);
  checksum();
  assert(!value_mismatch);
}
