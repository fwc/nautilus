/*
yarpgen version 2.0 (build df0ddec on 1980:01:01)
Seed: 28
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --seed=28
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
void test(val<long long int> var_0, val<long long int> var_1, val<int> var_2, val<long long int> var_3, val<long long int> var_9, val<bool> var_10, val<bool> var_12, val<int> var_13, val<int> zero, val<bool*> var_17, val<long long int*> var_18, val<long long int*> var_19, val<bool*> var_20, val<long long int*> var_21) {
    *var_17 = ((/* implicit */val<bool>) ((((/* implicit */val<long long int>) ((val<int>) ((((/* implicit */val<bool>) -8923795547275927238LL)) ? (var_2) : (((/* implicit */val<int>) (val<bool>)1)))))) / (4851449663862544248LL)));
    /* LoopNest 2 */
    #pragma omp simd
    #pragma clang loop unroll(enable)
    #pragma clang loop vectorize_predicate(enable)
    for (val<bool> i_0 = ((((/* implicit */val<int>) ((/* implicit */val<bool>) var_9))) - (1))/*0*/; i_0 < (val<bool>)1/*1*/; i_0 += (val<bool>)1/*1*/) 
    {
        for (val<long long int> i_1 = 0LL/*0*/; i_1 < 11LL/*11*/; i_1 += ((((((/* implicit */val<bool>) max((arr_1 [i_0]), (arr_1 [i_0])))) ? (((/* implicit */val<long long int>) ((/* implicit */val<int>) (!(((/* implicit */val<bool>) arr_1 [i_0])))))) : (min((arr_1 [i_0]), (arr_1 [i_0]))))) + (3LL))/*3*/) 
        {
            {
                /* LoopNest 3 */
                for (val<int> i_2 = 4/*4*/; i_2 < ((((/* implicit */val<int>) var_12)) + (9))/*10*/; i_2 += ((var_2) + (1583009848))/*4*/) 
                {
                    #pragma clang loop unroll(enable)
                    #pragma clang loop vectorize_predicate(enable)
                    for (val<long long int> i_3 = 0LL/*0*/; i_3 < ((var_3) + (5109463806951481104LL))/*11*/; i_3 += ((((val<long long int>) arr_2 [i_1])) + (2LL))/*3*/) 
                    {
                        #pragma clang loop vectorize_predicate(enable)
                        #pragma clang loop interleave(enable)
                        #pragma clang loop vectorize(enable)
                        #pragma clang loop unroll(enable)
                        for (val<int> i_4 = 3/*3*/; i_4 < ((((/* implicit */val<int>) arr_7 [i_3] [i_2 - 1] [i_0] [i_0])) + (7))/*8*/; i_4 += ((((/* implicit */val<int>) var_1)) - (25693880))/*3*/) 
                        {
                            {
                                *var_18 ^= ((/* implicit */val<long long int>) (+((+(((/* implicit */val<int>) (val<bool>)0))))));
                                *var_19 = ((/* implicit */val<long long int>) min((*var_19), ((((~(-9223372036854775780LL))) + (arr_10 [i_2 - 2] [i_1] [i_2 - 2] [i_4 - 2])))));
                            }
                        } 
                    } 
                } 
                *var_20 = ((/* implicit */val<bool>) arr_11 [i_0] [i_0] [i_1]);
                arr_13 [i_0] [i_1] [i_1] = ((/* implicit */val<bool>) ((((/* implicit */val<bool>) ((((/* implicit */val<bool>) (~(((/* implicit */val<int>) arr_7 [i_0] [i_0] [0LL] [(val<bool>)1]))))) ? (arr_11 [i_0] [i_1] [i_1]) : (((((/* implicit */val<bool>) -2141710347)) ? (arr_3 [i_0]) : (((/* implicit */val<long long int>) var_13))))))) ? ((((val<bool>)1) ? (((/* implicit */val<long long int>) ((/* implicit */val<int>) (val<bool>)1))) : (576425567931334656LL))) : (((/* implicit */val<long long int>) arr_12 [i_0] [i_0] [i_0] [i_1]))));
                arr_14 [i_1] [i_0] = ((/* implicit */val<int>) (!(((/* implicit */val<bool>) min((((((/* implicit */val<bool>) var_0)) ? (((/* implicit */val<int>) var_10)) : (arr_12 [i_0] [i_0] [i_0] [i_1]))), (((/* implicit */val<int>) arr_2 [i_0])))))));
                *var_21 = ((((/* implicit */val<bool>) max(((+(450448771))), (arr_12 [i_1] [i_0] [i_0] [i_0])))) ? (((/* implicit */val<long long int>) ((-1) * (-1404588861)))) : (arr_10 [(val<bool>)0] [i_0] [i_1] [(val<bool>)0]));
            }
        } 
    } 
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 5676717919130001331LL;
long long int var_1 = 7637470257779052219LL;
int var_2 = -1583009844;
long long int var_3 = -5109463806951481093LL;
long long int var_9 = -8202470238739861065LL;
bool var_10 = (bool)0;
bool var_12 = (bool)1;
int var_13 = -664361279;
int zero = 0;
bool var_17 = (bool)0;
long long int var_18 = -2422590997257856179LL;
long long int var_19 = -4961534674792255232LL;
bool var_20 = (bool)0;
long long int var_21 = -4394767678014711732LL;
long long int arr_1 [11] ;
bool arr_2 [11] ;
long long int arr_3 [11] ;
bool arr_7 [11] [11] [11] [11] ;
long long int arr_10 [11] [11] [11] [11] ;
long long int arr_11 [11] [11] [11] ;
int arr_12 [11] [11] [11] [11] ;
bool arr_13 [11] [11] [11] ;
int arr_14 [11] [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_1 [i_0] = -2523694568969401115LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_2 [i_0] = (bool)1;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_3 [i_0] = 5242069194002597507LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    arr_7 [i_0] [i_1] [i_2] [i_3] = (bool)1;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    arr_10 [i_0] [i_1] [i_2] [i_3] = -6513946858862332215LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_11 [i_0] [i_1] [i_2] = -485412658531292149LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    arr_12 [i_0] [i_1] [i_2] [i_3] = -143330145;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_13 [i_0] [i_1] [i_2] = (bool)0;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_14 [i_0] [i_1] = 1323789768;
}

void checksum() {
    value_mismatch |= var_17 != (bool)0;
    value_mismatch |= var_18 != -2422590997257856179LL;
    value_mismatch |= var_19 != -4961534674792255232LL;
    value_mismatch |= var_20 != (bool)1;
    value_mismatch |= var_21 != 1404588861LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                value_mismatch |= arr_13 [i_0] [i_1] [i_2] != (bool)1 && arr_13 [i_0] [i_1] [i_2] != (bool)0;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            value_mismatch |= arr_14 [i_0] [i_1] != 1 && arr_14 [i_0] [i_1] != 1323789768;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", false);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_2, var_3, var_9, var_10, var_12, var_13, zero, &var_17, &var_18, &var_19, &var_20, &var_21);
  checksum();
  assert(!value_mismatch);
}
