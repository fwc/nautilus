/*
yarpgen version 2.0 (build df0ddec on 1980:01:01)
Seed: 31
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --seed=31
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
void test(val<unsigned long long int> var_2, val<bool> var_7, val<unsigned long long int> var_8, val<unsigned long long int> var_11, val<signed char> var_12, val<short> var_14, val<signed char> var_15, val<unsigned char> var_17, val<int> zero, val<short*> var_18, val<unsigned long long int*> var_19, val<signed char*> var_20, val<short*> var_21, val<unsigned int*> var_22) {
    /* LoopNest 3 */
    #pragma clang loop interleave(enable)
    for (val<unsigned short> i_0 = (val<unsigned short>)0/*0*/; i_0 < (val<unsigned short>)15/*15*/; i_0 += ((((/* implicit */val<int>) ((/* implicit */val<unsigned short>) ((val<unsigned char>) min((var_2), (((/* implicit */val<unsigned long long int>) var_15))))))) - (58))/*2*/) 
    {
        #pragma clang loop interleave(enable)
        #pragma clang loop vectorize(enable)
        for (val<unsigned short> i_1 = (val<unsigned short>)3/*3*/; i_1 < (val<unsigned short>)13/*13*/; i_1 += ((((/* implicit */val<int>) ((/* implicit */val<unsigned short>) ((((/* implicit */val<bool>) ((((/* implicit */val<bool>) ((val<unsigned char>) var_17))) ? ((~(((/* implicit */val<int>) arr_1 [i_0])))) : (((/* implicit */val<int>) var_15))))) ? (((/* implicit */val<int>) var_12)) : (((((/* implicit */val<bool>) min((1996321873U), (((/* implicit */val<unsigned int>) (val<bool>)1))))) ? (((/* implicit */val<int>) ((val<short>) arr_2 [i_0]))) : (((/* implicit */val<int>) arr_0 [i_0])))))))) - (65426))/*4*/) 
        {
            #pragma clang loop interleave(enable)
            #pragma clang loop vectorize(enable)
            #pragma clang loop vectorize_predicate(enable)
            for (val<short> i_2 = (val<short>)0/*0*/; i_2 < ((((/* implicit */val<int>) ((/* implicit */val<short>) min((min((((val<long long int>) arr_3 [i_0] [i_1 - 3])), (((/* implicit */val<long long int>) (val<short>)18190)))), (((/* implicit */val<long long int>) min((((/* implicit */val<int>) (val<signed char>)-1)), (((((/* implicit */val<bool>) arr_4 [i_0] [i_0])) ? (((/* implicit */val<int>) var_15)) : (((/* implicit */val<int>) (val<signed char>)26))))))))))) + (16))/*15*/; i_2 += ((((/* implicit */val<int>) ((/* implicit */val<short>) ((val<unsigned char>) arr_4 [i_0] [i_1])))) - (169))/*3*/) 
            {
                {
                    arr_9 [i_0] [i_0] = ((/* implicit */val<unsigned int>) max((((/* implicit */val<int>) ((val<bool>) ((((/* implicit */val<bool>) var_8)) ? (((/* implicit */val<int>) (val<signed char>)-26)) : (((/* implicit */val<int>) (val<unsigned char>)0)))))), ((~(((/* implicit */val<int>) var_14))))));
                    arr_10 [i_0] [i_1] [i_0] [i_0] = ((/* implicit */val<bool>) (+((+(arr_6 [i_0] [i_1] [i_2] [i_1 + 2])))));
                    arr_11 [i_2] = ((/* implicit */val<unsigned long long int>) min((((/* implicit */val<unsigned int>) arr_5 [i_2])), (max((((/* implicit */val<unsigned int>) arr_0 [13])), (arr_6 [i_0] [(val<unsigned char>)7] [i_0] [i_0])))));
                    *var_18 -= ((/* implicit */val<short>) max((((((/* implicit */val<bool>) arr_7 [i_2] [i_1 + 2] [i_0])) ? (((/* implicit */val<int>) arr_5 [i_0])) : (-1525811354))), (((/* implicit */val<int>) arr_5 [i_2]))));
                    *var_19 *= min((28ULL), (arr_7 [i_0] [i_0] [i_0]));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (val<short> i_3 = ((((/* implicit */val<int>) ((/* implicit */val<short>) var_7))) + (1))/*2*/; i_3 < (val<short>)12/*12*/; i_3 += ((((/* implicit */val<int>) ((/* implicit */val<short>) ((val<long long int>) ((val<unsigned int>) (val<short>)16740))))) - (16736))/*4*/) 
    {
        #pragma clang loop interleave(enable)
        for (val<int> i_4 = 0/*0*/; i_4 < 15/*15*/; i_4 += ((((/* implicit */val<int>) min((((/* implicit */val<unsigned int>) min((((((/* implicit */val<int>) (val<unsigned char>)214)) - (((/* implicit */val<int>) (val<unsigned char>)10)))), ((+(((/* implicit */val<int>) arr_12 [i_3]))))))), ((((!(((/* implicit */val<bool>) arr_12 [i_3])))) ? (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) arr_12 [i_3 + 3]))) : ((-(3254143875U)))))))) - (1040823417))/*4*/) 
        {
            {
                *var_20 = ((/* implicit */val<signed char>) max((*var_20), (((/* implicit */val<signed char>) arr_13 [i_4]))));
                arr_19 [i_3] [i_3] = ((/* implicit */val<unsigned char>) (!(((/* implicit */val<bool>) min((((/* implicit */val<long long int>) arr_14 [i_3 + 2] [i_3 + 1])), (arr_13 [i_3]))))));
                *var_21 += ((/* implicit */val<short>) arr_13 [i_3]);
            }
        } 
    } 
    /* LoopNest 2 */
    #pragma clang loop interleave(enable)
    #pragma clang loop vectorize(enable)
    for (val<int> i_5 = ((((/* implicit */val<int>) var_11)) - (192998899))/*1*/; i_5 < 20/*20*/; i_5 += 3/*3*/) 
    {
        #pragma clang loop interleave(enable)
        #pragma clang loop vectorize(enable)
        #pragma clang loop vectorize_predicate(enable)
        for (val<unsigned char> i_6 = (val<unsigned char>)0/*0*/; i_6 < (val<unsigned char>)21/*21*/; i_6 += (val<unsigned char>)4/*4*/) 
        {
            {
                *var_22 -= ((/* implicit */val<unsigned int>) var_17);
                arr_27 [i_5] = arr_20 [i_5] [i_5];
                arr_28 [i_6] [i_6] |= ((/* implicit */val<unsigned int>) (+(min((((/* implicit */val<int>) (val<bool>)1)), ((~(((/* implicit */val<int>) arr_20 [i_5 - 1] [i_6]))))))));
            }
        } 
    } 
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 1941348408850182100ULL;
bool var_7 = (bool)1;
unsigned long long int var_8 = 12304184622868279152ULL;
unsigned long long int var_11 = 10855092175075601908ULL;
signed char var_12 = (signed char)-106;
short var_14 = (short)-14390;
signed char var_15 = (signed char)60;
unsigned char var_17 = (unsigned char)11;
int zero = 0;
short var_18 = (short)-6999;
unsigned long long int var_19 = 5270629321269601047ULL;
signed char var_20 = (signed char)-34;
short var_21 = (short)-2949;
unsigned int var_22 = 2555766188U;
signed char arr_0 [15] ;
unsigned char arr_1 [15] ;
unsigned int arr_2 [15] ;
short arr_3 [15] [15] ;
unsigned int arr_4 [15] [15] ;
unsigned short arr_5 [15] ;
unsigned int arr_6 [15] [15] [15] [15] ;
unsigned long long int arr_7 [15] [15] [15] ;
signed char arr_12 [15] ;
long long int arr_13 [15] ;
signed char arr_14 [15] [15] ;
bool arr_20 [21] [21] ;
unsigned int arr_9 [15] [15] ;
bool arr_10 [15] [15] [15] [15] ;
unsigned long long int arr_11 [15] ;
unsigned char arr_19 [15] [15] ;
bool arr_27 [21] ;
unsigned int arr_28 [21] [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_0 [i_0] = (signed char)57;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_1 [i_0] = (unsigned char)206;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_2 [i_0] = 3999663103U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_3 [i_0] [i_1] = (short)25214;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_4 [i_0] [i_1] = 2357405356U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_5 [i_0] = (unsigned short)3281;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    arr_6 [i_0] [i_1] [i_2] [i_3] = 430691736U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = 16681323130662139080ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_12 [i_0] = (signed char)-86;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_13 [i_0] = -3234730772327550459LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_14 [i_0] [i_1] = (signed char)112;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_20 [i_0] [i_1] = (i_1 % 2 == 0) ? (bool)1 : (bool)0;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_9 [i_0] [i_1] = 62557400U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    arr_10 [i_0] [i_1] [i_2] [i_3] = (bool)1;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_11 [i_0] = 2512799505050492460ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_19 [i_0] [i_1] = (unsigned char)126;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_27 [i_0] = (i_0 % 2 == 0) ? (bool)0 : (bool)0;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_28 [i_0] [i_1] = (i_0 % 2 == 0) ? 1011697743U : 3566388935U;
}

void checksum() {
    value_mismatch |= var_18 != (short)-7503;
    value_mismatch |= var_19 != 0ULL;
    value_mismatch |= var_20 != (signed char)5;
    value_mismatch |= var_21 != (short)19639;
    value_mismatch |= var_22 != 2555765726U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            value_mismatch |= arr_9 [i_0] [i_1] != 14389U && arr_9 [i_0] [i_1] != 62557400U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    value_mismatch |= arr_10 [i_0] [i_1] [i_2] [i_3] != (bool)1 && arr_10 [i_0] [i_1] [i_2] [i_3] != (bool)1;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        value_mismatch |= arr_11 [i_0] != 3281ULL && arr_11 [i_0] != 2512799505050492460ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            value_mismatch |= arr_19 [i_0] [i_1] != (unsigned char)0 && arr_19 [i_0] [i_1] != (unsigned char)126;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        value_mismatch |= arr_27 [i_0] != (bool)1 && arr_27 [i_0] != (bool)0 && arr_27 [i_0] != (bool)0 && arr_27 [i_0] != (bool)0;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            value_mismatch |= arr_28 [i_0] [i_1] != 4294967295U && arr_28 [i_0] [i_1] != 1011697743U && arr_28 [i_0] [i_1] != 3566388935U && arr_28 [i_0] [i_1] != 3566388935U;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", false);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_2, var_7, var_8, var_11, var_12, var_14, var_15, var_17, zero, &var_18, &var_19, &var_20, &var_21, &var_22);
  checksum();
  assert(!value_mismatch);
}
