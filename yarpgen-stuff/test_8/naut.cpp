/*
yarpgen version 2.0 (build df0ddec on 1980:01:01)
Seed: 8
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --seed=8
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
void test(val<int> var_0, val<unsigned short> var_2, val<unsigned int> var_3, val<unsigned int> var_5, val<short> var_7, val<long long int> var_8, val<unsigned char> var_11, val<int> var_13, val<int> zero, val<bool*> var_15, val<unsigned int*> var_16, val<short*> var_17, val<short*> var_18, val<unsigned long long int*> var_19) {
    /* LoopNest 2 */
    #pragma clang loop unroll(enable)
    #pragma clang loop vectorize(enable)
    #pragma clang loop vectorize_predicate(enable)
    #pragma clang loop interleave(enable)
    for (val<signed char> i_0 = (val<signed char>)1/*1*/; i_0 < ((((/* implicit */val<int>) ((/* implicit */val<signed char>) var_11))) - (17))/*13*/; i_0 += (val<signed char>)2/*2*/) 
    {
        for (val<unsigned char> i_1 = ((((/* implicit */val<int>) ((/* implicit */val<unsigned char>) var_0))) - (249))/*0*/; i_1 < ((((/* implicit */val<int>) var_11)) - (14))/*16*/; i_1 += (val<unsigned char>)2/*2*/) 
        {
            {
                *var_15 = ((/* implicit */val<bool>) ((min((var_3), (((/* implicit */val<unsigned int>) var_2)))) % (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) min((arr_1 [i_0 - 1]), (arr_1 [i_0 + 1])))))));
                *var_16 = ((/* implicit */val<unsigned int>) ((((/* implicit */val<bool>) ((((/* implicit */val<bool>) arr_2 [i_0 + 2] [i_0 + 1])) ? (arr_2 [i_0 + 1] [i_0 + 1]) : (arr_2 [i_0 - 1] [i_0 - 1])))) ? (((((/* implicit */val<bool>) arr_2 [i_0 - 1] [i_0 + 3])) ? (arr_2 [i_0 + 3] [i_0 + 1]) : (arr_2 [i_0 + 3] [i_0 + 2]))) : (((/* implicit */val<unsigned long long int>) (+(-1))))));
                /* LoopSeq 2 */
                #pragma clang loop vectorize(enable)
                #pragma clang loop unroll(enable)
                #pragma clang loop vectorize_predicate(enable)
                for (val<unsigned short> i_2 = ((((/* implicit */val<int>) ((/* implicit */val<unsigned short>) (~(((/* implicit */val<int>) arr_0 [i_0 + 2] [i_1])))))) - (65455))/*2*/; i_2 < ((((/* implicit */val<int>) var_2)) - (4766))/*15*/; i_2 += (val<unsigned short>)3/*3*/) 
                {
                    arr_7 [i_0 + 2] [i_0] [i_0 + 2] [i_0 + 3] = ((/* implicit */val<unsigned short>) (~(((((/* implicit */val<bool>) arr_0 [i_2 + 1] [i_0 + 3])) ? (arr_6 [i_0 - 1] [i_1] [i_0 - 1]) : (((((/* implicit */val<bool>) var_8)) ? (((/* implicit */val<int>) (val<bool>)1)) : (((/* implicit */val<int>) arr_1 [i_0]))))))));
                    arr_8 [i_0] [i_1] = ((/* implicit */val<unsigned int>) arr_5 [i_1] [i_1] [i_2]);
                }
                #pragma clang loop vectorize_predicate(enable)
                for (val<unsigned long long int> i_3 = ((((/* implicit */val<unsigned long long int>) ((val<unsigned int>) (+((~(((/* implicit */val<int>) arr_1 [i_0 - 1])))))))) - (110ULL))/*1*/; i_3 < ((((/* implicit */val<unsigned long long int>) arr_0 [i_0 + 3] [i_0])) - (65ULL))/*13*/; i_3 += ((((/* implicit */val<unsigned long long int>) var_13)) - (334613242ULL))/*1*/) 
                {
                    arr_12 [i_1] = ((/* implicit */val<unsigned long long int>) (!(((/* implicit */val<bool>) (((-(var_5))) - (((/* implicit */val<unsigned int>) (-(arr_6 [i_0 + 2] [i_0] [i_0])))))))));
                    arr_13 [(val<short>)1] = ((/* implicit */val<unsigned short>) ((((/* implicit */val<int>) (val<bool>)0)) | (((/* implicit */val<int>) (val<unsigned char>)36))));
                }
            }
        } 
    } 
    *var_17 = var_7;
    *var_18 = ((/* implicit */val<short>) ((((/* implicit */val<unsigned int>) (~(((val<int>) var_8))))) * (((((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_7))) / (var_3)))));
    *var_19 = ((/* implicit */val<unsigned long long int>) min((*var_19), (((/* implicit */val<unsigned long long int>) var_7))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 405090809;
unsigned short var_2 = (unsigned short)4781;
unsigned int var_3 = 1108344860U;
unsigned int var_5 = 2342016023U;
short var_7 = (short)21581;
long long int var_8 = 3822614420775660503LL;
unsigned char var_11 = (unsigned char)30;
int var_13 = 334613243;
int zero = 0;
bool var_15 = (bool)0;
unsigned int var_16 = 1359125889U;
short var_17 = (short)-30153;
short var_18 = (short)27246;
unsigned long long int var_19 = 16877874512663638590ULL;
unsigned char arr_0 [16] [16] ;
signed char arr_1 [16] ;
unsigned long long int arr_2 [16] [16] ;
unsigned char arr_5 [16] [16] [16] ;
int arr_6 [16] [16] [16] ;
unsigned short arr_7 [16] [16] [16] [16] ;
unsigned int arr_8 [16] [16] ;
unsigned long long int arr_12 [16] ;
unsigned short arr_13 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned char)78;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_1 [i_0] = (signed char)-112;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_2 [i_0] [i_1] = 16254165092476642679ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (unsigned char)7;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = 1183592081;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    arr_7 [i_0] [i_1] [i_2] [i_3] = (unsigned short)15189;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_8 [i_0] [i_1] = 80070747U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_12 [i_0] = 4566938037201705101ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_13 [i_0] = (unsigned short)21619;
}

void checksum() {
    value_mismatch |= var_15 != (bool)1;
    value_mismatch |= var_16 != 2308957559U;
    value_mismatch |= var_17 != (short)21581;
    value_mismatch |= var_18 != (short)0;
    value_mismatch |= var_19 != 21581ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    value_mismatch |= arr_7 [i_0] [i_1] [i_2] [i_3] != (unsigned short)53614 && arr_7 [i_0] [i_1] [i_2] [i_3] != (unsigned short)15189;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            value_mismatch |= arr_8 [i_0] [i_1] != 7U && arr_8 [i_0] [i_1] != 80070747U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        value_mismatch |= arr_12 [i_0] != 0ULL && arr_12 [i_0] != 4566938037201705101ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        value_mismatch |= arr_13 [i_0] != (unsigned short)36 && arr_13 [i_0] != (unsigned short)21619;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", false);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_2, var_3, var_5, var_7, var_8, var_11, var_13, zero, &var_15, &var_16, &var_17, &var_18, &var_19);
  checksum();
  assert(!value_mismatch);
}
