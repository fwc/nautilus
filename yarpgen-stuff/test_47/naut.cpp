/*
yarpgen version 2.0 (build df0ddec on 1980:01:01)
Seed: 47
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --seed=47
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
void test(val<unsigned int> var_0, val<int> var_1, val<unsigned int> var_2, val<unsigned long long int> var_3, val<unsigned int> var_4, val<unsigned char> var_5, val<unsigned char> var_6, val<unsigned long long int> var_7, val<short> var_8, val<unsigned char> var_9, val<unsigned char> var_10, val<int> zero, val<bool*> var_11, val<unsigned short*> var_12, val<long long int*> var_13, val<unsigned char*> var_14, val<bool*> var_15, val<long long int*> var_16, val<unsigned int*> var_17, val<int*> var_18, val<short*> var_19, val<unsigned int*> var_20, val<unsigned long long int*> var_21) {
    if (((/* implicit */val<bool>) max((((/* implicit */val<int>) ((val<unsigned char>) (val<short>)3968))), (((((/* implicit */val<int>) (val<bool>)0)) * (((((/* implicit */val<bool>) 429482537U)) ? (((/* implicit */val<int>) var_10)) : (((/* implicit */val<int>) (val<unsigned char>)255)))))))))
    {
        *var_11 = ((/* implicit */val<bool>) (+(var_4)));
        *var_12 = ((/* implicit */val<unsigned short>) min((*var_12), (((/* implicit */val<unsigned short>) max((((/* implicit */val<unsigned int>) ((var_7) >= (((var_7) * (var_3)))))), (max((((/* implicit */val<unsigned int>) -871148210)), (((((/* implicit */val<bool>) -871148210)) ? (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_6))) : (var_4))))))))));
    }

    /* LoopNest 2 */
    #pragma clang loop unroll(enable)
    #pragma clang loop interleave(enable)
    #pragma clang loop vectorize_predicate(enable)
    for (val<unsigned char> i_0 = ((((/* implicit */val<int>) ((/* implicit */val<unsigned char>) var_8))) - (157))/*0*/; i_0 < ((((/* implicit */val<int>) ((/* implicit */val<unsigned char>) var_8))) - (147))/*10*/; i_0 += ((((/* implicit */val<int>) var_6)) - (139))/*4*/) 
    {
        #pragma clang loop vectorize_predicate(enable)
        for (val<int> i_1 = 0/*0*/; i_1 < 10/*10*/; i_1 += 3/*3*/) 
        {
            {
                *var_13 = ((/* implicit */val<long long int>) ((((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) ((var_3) != (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_5))))))) == (10498460664769838300ULL)));
                arr_5 [i_0] [i_1] [i_1] = ((/* implicit */val<bool>) 0);
            }
        } 
    } 
    /* LoopSeq 3 */
    #pragma omp simd
    #pragma clang loop unroll(enable)
    #pragma clang loop interleave(enable)
    for (val<bool> i_2 = ((/* implicit */val<int>) (!(((/* implicit */val<bool>) ((val<unsigned long long int>) ((((/* implicit */val<bool>) 310940350)) && (((/* implicit */val<bool>) var_5))))))))/*0*/; i_2 < ((/* implicit */val<int>) ((/* implicit */val<bool>) var_5))/*1*/; i_2 += ((/* implicit */val<int>) ((/* implicit */val<bool>) var_2))/*1*/) 
    {
        arr_8 [i_2] = ((/* implicit */val<bool>) max((((/* implicit */val<long long int>) (+((~(((/* implicit */val<int>) (val<unsigned short>)0))))))), (((1207132626146519354LL) * (((/* implicit */val<long long int>) ((/* implicit */val<int>) (val<bool>)0)))))));
        /* LoopSeq 1 */
        #pragma clang loop unroll(enable)
        for (val<bool> i_3 = ((((/* implicit */val<int>) ((/* implicit */val<bool>) var_3))) - (1))/*0*/; i_3 < ((/* implicit */val<int>) ((/* implicit */val<bool>) var_0))/*1*/; i_3 += ((((/* implicit */val<int>) ((((/* implicit */val<unsigned int>) ((/* implicit */val<int>) ((var_7) < (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) ((((/* implicit */val<unsigned long long int>) var_4)) >= (var_3))))))))) == (var_0)))) + (1))/*1*/) 
        {
            *var_14 = ((/* implicit */val<unsigned char>) ((((((/* implicit */val<int>) arr_0 [i_3] [i_2])) != (((/* implicit */val<int>) arr_0 [i_3] [3U])))) ? (max((((/* implicit */val<unsigned int>) (+(((/* implicit */val<int>) (val<bool>)1))))), ((-(var_2))))) : (arr_7 [i_3] [i_2])));
            arr_11 [i_2] [i_2] [i_2] = ((/* implicit */val<unsigned long long int>) (~(((((/* implicit */val<bool>) ((((/* implicit */val<bool>) (val<unsigned short>)63567)) ? (((/* implicit */val<int>) var_8)) : (((/* implicit */val<int>) var_8))))) ? (((var_2) * (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) (val<unsigned char>)255))))) : (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) ((arr_3 [i_3]) != (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_10)))))))))));
            arr_12 [i_2] = ((/* implicit */val<long long int>) max((((/* implicit */val<unsigned int>) ((((/* implicit */val<bool>) var_2)) ? (((/* implicit */val<int>) arr_4 [i_2] [i_2] [i_2])) : (((/* implicit */val<int>) arr_4 [i_3] [i_3] [i_2]))))), (var_0)));
        }
    }
    for (val<unsigned char> i_4 = ((((/* implicit */val<int>) var_10)) - (117))/*1*/; i_4 < (val<unsigned char>)16/*16*/; i_4 += ((((/* implicit */val<int>) ((/* implicit */val<unsigned char>) var_3))) - (104))/*3*/) 
    {
        arr_16 [(val<bool>)1] [i_4] = ((/* implicit */val<unsigned char>) ((arr_13 [i_4 + 1]) * (((/* implicit */val<unsigned int>) ((arr_15 [i_4 + 1]) ? (((/* implicit */val<int>) arr_15 [i_4])) : (((/* implicit */val<int>) arr_15 [i_4 + 1])))))));
        *var_15 = ((/* implicit */val<bool>) ((((/* implicit */val<int>) ((((/* implicit */val<unsigned int>) ((/* implicit */val<int>) (val<bool>)0))) >= (448534896U)))) * ((+(((/* implicit */val<int>) arr_14 [i_4 - 1] [(val<short>)9]))))));
    }
    for (val<unsigned long long int> i_5 = ((((/* implicit */val<unsigned long long int>) var_9)) - (172ULL))/*0*/; i_5 < 14ULL/*14*/; i_5 += 4ULL/*4*/) 
    {
        /* LoopNest 2 */
        #pragma omp simd
        #pragma clang loop interleave(enable)
        #pragma clang loop unroll(enable)
        for (val<unsigned char> i_6 = ((((/* implicit */val<int>) ((/* implicit */val<unsigned char>) var_1))) - (62))/*0*/; i_6 < ((((/* implicit */val<int>) ((/* implicit */val<unsigned char>) var_4))) - (69))/*14*/; i_6 += (val<unsigned char>)4/*4*/) 
        {
            #pragma clang loop interleave(enable)
            for (val<int> i_7 = 0/*0*/; i_7 < 14/*14*/; i_7 += ((((/* implicit */val<int>) var_10)) - (115))/*3*/) 
            {
                {
                    arr_24 [13] [i_6] &= ((/* implicit */val<unsigned char>) ((val<unsigned long long int>) max((var_6), ((val<unsigned char>)104))));
                    /* LoopSeq 1 */
                    #pragma clang loop vectorize_predicate(enable)
                    #pragma clang loop unroll(enable)
                    for (val<unsigned char> i_8 = (val<unsigned char>)0/*0*/; i_8 < (val<unsigned char>)14/*14*/; i_8 += (val<unsigned char>)4/*4*/) 
                    {
                        arr_28 [(val<bool>)1] [i_5] [i_6] [i_7] [i_8] = ((/* implicit */val<unsigned char>) (-(((((/* implicit */val<bool>) max((((/* implicit */val<unsigned long long int>) arr_23 [i_5] [8] [11LL])), (var_7)))) ? (((/* implicit */val<int>) arr_21 [i_5] [i_6])) : ((-(704680480)))))));
                        if (((/* implicit */val<bool>) arr_13 [(val<unsigned char>)6]))
                        {
                            *var_16 = ((/* implicit */val<long long int>) min((*var_16), (((/* implicit */val<long long int>) ((val<int>) ((((/* implicit */val<bool>) ((((/* implicit */val<unsigned int>) ((/* implicit */val<int>) arr_14 [(val<short>)8] [i_6]))) % (var_0)))) || (arr_15 [i_6])))))));
                            arr_29 [i_5] = ((/* implicit */val<int>) max((-2050964109181618362LL), (((/* implicit */val<long long int>) -1999497662))));
                        }

                    }
                }
            } 
        } 
        /* LoopNest 2 */
        #pragma clang loop interleave(enable)
        for (val<int> i_9 = 0/*0*/; i_9 < 14/*14*/; i_9 += ((((/* implicit */val<int>) 1736100503U)) - (1736100499))/*4*/) 
        {
            for (val<bool> i_10 = ((/* implicit */val<int>) ((/* implicit */val<bool>) ((((/* implicit */val<unsigned int>) ((((/* implicit */val<bool>) ((((/* implicit */val<bool>) arr_27 [i_5] [i_5] [i_5] [i_5] [i_5])) ? (var_3) : (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) (val<unsigned char>)154)))))) ? (((/* implicit */val<int>) arr_14 [i_5] [(val<bool>)1])) : (((/* implicit */val<int>) arr_22 [i_9] [i_9]))))) * (max((arr_13 [i_9]), (arr_13 [i_5]))))))/*0*/; i_10 < (val<bool>)1/*1*/; i_10 += (val<bool>)1/*1*/) 
            {
                {
                    arr_35 [i_10] [i_9] = ((/* implicit */val<int>) ((((/* implicit */val<bool>) arr_19 [i_10] [i_9] [i_5])) ? (((var_3) * (((/* implicit */val<unsigned long long int>) var_1)))) : (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) ((((/* implicit */val<bool>) arr_19 [i_5] [(val<unsigned char>)7] [i_10])) && (((/* implicit */val<bool>) arr_19 [i_5] [i_5] [i_5]))))))));
                    *var_17 = ((/* implicit */val<unsigned int>) ((((/* implicit */val<unsigned int>) 704680482)) <= (2145386496U)));
                }
            } 
        } 
    }
    if (((/* implicit */val<bool>) ((((/* implicit */val<int>) (val<unsigned char>)73)) / ((+(((/* implicit */val<int>) var_9)))))))
    {
        *var_18 = ((/* implicit */val<int>) var_10);
        *var_19 = ((/* implicit */val<short>) var_0);
        *var_20 = var_4;
        *var_21 = ((/* implicit */val<unsigned long long int>) var_0);
    }

}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3532828849U;
int var_1 = 435199038;
unsigned int var_2 = 2231626424U;
unsigned long long int var_3 = 6646527817738241899ULL;
unsigned int var_4 = 1691971923U;
unsigned char var_5 = (unsigned char)111;
unsigned char var_6 = (unsigned char)143;
unsigned long long int var_7 = 14522008565508428748ULL;
short var_8 = (short)-22115;
unsigned char var_9 = (unsigned char)172;
unsigned char var_10 = (unsigned char)118;
int zero = 0;
bool var_11 = (bool)0;
unsigned short var_12 = (unsigned short)31375;
long long int var_13 = -6512079598141321081LL;
unsigned char var_14 = (unsigned char)117;
bool var_15 = (bool)1;
long long int var_16 = 4447644808731967706LL;
unsigned int var_17 = 520553873U;
int var_18 = 1837980269;
short var_19 = (short)-9435;
unsigned int var_20 = 3901049649U;
unsigned long long int var_21 = 15905810352331503850ULL;
unsigned char arr_0 [10] [10] ;
unsigned int arr_3 [10] ;
unsigned short arr_4 [10] [10] [10] ;
unsigned int arr_7 [10] [10] ;
unsigned int arr_13 [17] ;
bool arr_14 [17] [17] ;
bool arr_15 [17] ;
unsigned char arr_19 [14] [14] [14] ;
unsigned char arr_21 [14] [14] ;
bool arr_22 [14] [14] ;
unsigned int arr_23 [14] [14] [14] ;
unsigned char arr_27 [14] [14] [14] [14] [14] ;
bool arr_5 [10] [10] [10] ;
bool arr_8 [10] ;
unsigned long long int arr_11 [10] [10] [10] ;
long long int arr_12 [10] ;
unsigned char arr_16 [17] [17] ;
unsigned char arr_24 [14] [14] ;
unsigned char arr_28 [14] [14] [14] [14] [14] ;
int arr_29 [14] ;
int arr_35 [14] [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned char)19;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_3 [i_0] = 4069015737U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (unsigned short)63766;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_7 [i_0] [i_1] = 3025246662U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_13 [i_0] = 3736725186U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_14 [i_0] [i_1] = (bool)0;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_15 [i_0] = (bool)0;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_19 [i_0] [i_1] [i_2] = (unsigned char)96;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_21 [i_0] [i_1] = (unsigned char)152;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_22 [i_0] [i_1] = (bool)0;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_23 [i_0] [i_1] [i_2] = 2855068932U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 14; ++i_4) 
                        arr_27 [i_0] [i_1] [i_2] [i_3] [i_4] = (unsigned char)128;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (bool)1 : (bool)1;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_8 [i_0] = (i_0 % 2 == 0) ? (bool)0 : (bool)0;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_11 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? 13014286068334534888ULL : 14819732674603733985ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_12 [i_0] = (i_0 % 2 == 0) ? -4871855462211075628LL : 6357273103241260573LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_16 [i_0] [i_1] = (unsigned char)92;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_24 [i_0] [i_1] = (unsigned char)96;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 14; ++i_4) 
                        arr_28 [i_0] [i_1] [i_2] [i_3] [i_4] = (unsigned char)19;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_29 [i_0] = -1150998916;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_35 [i_0] [i_1] = (i_0 % 2 == 0) ? 1032442385 : -1939147379;
}

void checksum() {
    value_mismatch |= var_11 != (bool)1;
    value_mismatch |= var_12 != (unsigned short)21838;
    value_mismatch |= var_13 != 0LL;
    value_mismatch |= var_14 != (unsigned char)198;
    value_mismatch |= var_15 != (bool)0;
    value_mismatch |= var_16 != 0LL;
    value_mismatch |= var_17 != 1U;
    value_mismatch |= var_18 != 1837980269;
    value_mismatch |= var_19 != (short)-9435;
    value_mismatch |= var_20 != 3901049649U;
    value_mismatch |= var_21 != 15905810352331503850ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                value_mismatch |= arr_5 [i_0] [i_1] [i_2] != (bool)0 && arr_5 [i_0] [i_1] [i_2] != (bool)1 && arr_5 [i_0] [i_1] [i_2] != (bool)0 && arr_5 [i_0] [i_1] [i_2] != (bool)1;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        value_mismatch |= arr_8 [i_0] != (bool)0 && arr_8 [i_0] != (bool)0 && arr_8 [i_0] != (bool)0 && arr_8 [i_0] != (bool)0;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                value_mismatch |= arr_11 [i_0] [i_1] [i_2] != 2165912247ULL && arr_11 [i_0] [i_1] [i_2] != 13014286068334534888ULL && arr_11 [i_0] [i_1] [i_2] != 2165912247ULL && arr_11 [i_0] [i_1] [i_2] != 14819732674603733985ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        value_mismatch |= arr_12 [i_0] != 3532828849LL && arr_12 [i_0] != -4871855462211075628LL && arr_12 [i_0] != 3532828849LL && arr_12 [i_0] != 6357273103241260573LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            value_mismatch |= arr_16 [i_0] [i_1] != (unsigned char)0 && arr_16 [i_0] [i_1] != (unsigned char)92;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            value_mismatch |= arr_24 [i_0] [i_1] != (unsigned char)0 && arr_24 [i_0] [i_1] != (unsigned char)96;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 14; ++i_4) 
                        value_mismatch |= arr_28 [i_0] [i_1] [i_2] [i_3] [i_4] != (unsigned char)104 && arr_28 [i_0] [i_1] [i_2] [i_3] [i_4] != (unsigned char)19;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        value_mismatch |= arr_29 [i_0] != -1999497662 && arr_29 [i_0] != -1150998916;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            value_mismatch |= arr_35 [i_0] [i_1] != 1901232106 && arr_35 [i_0] [i_1] != 1032442385 && arr_35 [i_0] [i_1] != 1901232106 && arr_35 [i_0] [i_1] != -1939147379;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", false);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_2, var_3, var_4, var_5, var_6, var_7, var_8, var_9, var_10, zero, &var_11, &var_12, &var_13, &var_14, &var_15, &var_16, &var_17, &var_18, &var_19, &var_20, &var_21);
  checksum();
  assert(!value_mismatch);
}
