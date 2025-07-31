/*
yarpgen version 2.0 (build 887b8f1 on 1980:01:01)
Seed: 22
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --seed=22
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
void test(val<unsigned short> var_0, val<unsigned int> var_1, val<unsigned long long int> var_2, val<unsigned int> var_3, val<unsigned int> var_4, val<long long int> var_5, val<long long int> var_6, val<unsigned short> var_7, val<bool> var_8, val<unsigned long long int> var_9, val<unsigned short> var_10, val<bool> var_11, val<signed char> var_12, val<unsigned int> var_13, val<long long int> var_14, val<signed char> var_15, val<long long int> var_16, val<int> zero, val<unsigned long long int*> var_17, val<long long int*> var_18, val<long long int*> var_19, val<long long int*> var_20, val<unsigned int*> var_21, val<bool*> var_22, val<unsigned long long int*> var_23, val<bool*> var_24, val<unsigned int*> var_25, val<unsigned long long int*> var_26) {
    *var_17 += ((/* implicit */val<unsigned long long int>) (!(((/* implicit */val<bool>) ((((/* implicit */val<bool>) var_5)) ? (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) (!(((/* implicit */val<bool>) (val<unsigned short>)25648)))))) : (var_2))))));
    *var_18 = ((/* implicit */val<long long int>) ((((/* implicit */val<bool>) (-(((/* implicit */val<int>) var_0))))) ? (((/* implicit */val<int>) ((var_13) == (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) ((((/* implicit */val<bool>) (val<unsigned short>)65032)) && (((/* implicit */val<bool>) 10367877275096697418ULL))))))))) : (((/* implicit */val<int>) var_10))));
    *var_19 = ((/* implicit */val<long long int>) max((((((/* implicit */val<bool>) ((((/* implicit */val<int>) var_12)) + (((/* implicit */val<int>) (val<signed char>)113))))) ? ((+(var_9))) : (((/* implicit */val<unsigned long long int>) (~(((/* implicit */val<int>) var_8))))))), (var_2)));
    *var_20 = ((min((((((/* implicit */val<long long int>) 2783970693U)) <= (1503212160668977074LL))), ((!(((/* implicit */val<bool>) var_2)))))) ? (((/* implicit */val<long long int>) ((((/* implicit */val<bool>) var_0)) ? (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) ((2783970672U) == (var_3))))) : (((var_11) ? (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) (val<unsigned short>)8930))) : (var_3)))))) : ((~(1503212160668977074LL))));
    if (((/* implicit */val<bool>) min((((/* implicit */val<long long int>) (!(((/* implicit */val<bool>) var_6))))), (var_14))))
    {
        /* LoopNest 2 */
        for (val<long long int> i_0 = ((((/* implicit */val<long long int>) var_2)) + (6384541593090104257LL))/*4*/; i_0 < ((((/* implicit */val<long long int>) (~(((/* implicit */val<int>) ((var_8) || (((/* implicit */val<bool>) ((((/* implicit */val<bool>) var_5)) ? (((/* implicit */val<int>) var_12)) : (((/* implicit */val<int>) var_15))))))))))) + (14LL))/*12*/; i_0 += ((((/* implicit */val<long long int>) max((((/* implicit */val<int>) ((((((/* implicit */val<bool>) (val<unsigned short>)19)) ? (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_12))) : (var_1))) >= (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) ((((/* implicit */val<long long int>) ((/* implicit */val<int>) var_11))) <= (-7216921998841440495LL)))))))), ((-(((/* implicit */val<int>) ((3602905819710965591LL) < (var_16))))))))) + (1LL))/*2*/) 
        {
            for (val<long long int> i_1 = ((((/* implicit */val<long long int>) (!(((/* implicit */val<bool>) max((var_6), (((/* implicit */val<long long int>) ((val<signed char>) var_13))))))))) + (2LL))/*2*/; i_1 < (((-(var_6))) - (162229783807086543LL))/*11*/; i_1 += ((((/* implicit */val<long long int>) var_7)) - (39213LL))/*3*/) 
            {
                {
                    *var_21 = ((/* implicit */val<unsigned int>) ((arr_1 [i_0]) && (((/* implicit */val<bool>) (~(((/* implicit */val<int>) ((val<signed char>) var_16))))))));
                    /* LoopNest 2 */
                    #pragma omp simd
                    for (val<long long int> i_2 = ((/* implicit */val<long long int>) ((-1LL) <= (((/* implicit */val<long long int>) ((((0U) >> (((((/* implicit */val<int>) var_7)) - (39197))))) - (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_11))))))))/*1*/; i_2 < 13LL/*13*/; i_2 += ((((/* implicit */val<long long int>) (((+(var_6))) < ((((val<bool>)1) ? (((/* implicit */val<long long int>) ((/* implicit */val<int>) var_0))) : (arr_3 [i_1 + 1] [i_1 + 1] [i_1 + 3])))))) + (3LL))/*4*/) 
                    {
                        #pragma clang loop unroll(enable)
                        for (val<bool> i_3 = (val<bool>)0/*0*/; i_3 < ((((/* implicit */val<int>) ((/* implicit */val<bool>) ((((/* implicit */val<int>) var_12)) & (((/* implicit */val<int>) arr_1 [3LL])))))) + (1))/*1*/; i_3 += (val<bool>)1/*1*/) 
                        {
                            {
                                *arr_10 [(val<unsigned short>)12] [i_2] [(val<unsigned short>)6] [(val<unsigned short>)6] = ((/* implicit */val<long long int>) arr_6 [i_2 - 1] [i_2 - 1] [i_2 - 1]);
                                *var_22 = ((/* implicit */val<bool>) min((((((/* implicit */val<bool>) ((((/* implicit */val<int>) arr_5 [i_0] [14U] [i_2] [i_3])) * (((/* implicit */val<int>) (val<bool>)1))))) ? (((/* implicit */val<long long int>) ((/* implicit */val<int>) (!(((/* implicit */val<bool>) (val<signed char>)-43)))))) : (2143130746079142898LL))), (((/* implicit */val<long long int>) var_3))));
                                *var_23 = ((/* implicit */val<unsigned long long int>) ((((/* implicit */val<bool>) ((((/* implicit */val<bool>) arr_0 [i_1])) ? (((/* implicit */val<long long int>) ((((/* implicit */val<int>) (val<unsigned short>)0)) * (((/* implicit */val<int>) (val<unsigned short>)0))))) : (arr_7 [i_0] [i_1] [11LL] [i_3])))) ? (((/* implicit */val<int>) (val<unsigned short>)65516)) : (((/* implicit */val<int>) (!(((/* implicit */val<bool>) ((val<signed char>) (val<signed char>)124))))))));
                            }
                        } 
                    } 
                    *var_24 = ((/* implicit */val<bool>) min((var_24), (((/* implicit */val<bool>) ((((((/* implicit */val<bool>) arr_9 [i_0] [(val<signed char>)12] [7ULL] [i_0 + 2])) ? (arr_9 [(val<signed char>)4] [(val<signed char>)4] [(val<unsigned short>)3] [i_0 - 3]) : (arr_9 [i_0] [(val<signed char>)3] [13LL] [i_0 - 4]))) >> (((max((((((/* implicit */val<bool>) arr_0 [i_0 - 3])) ? (arr_7 [i_0] [6ULL] [i_1 + 4] [(val<unsigned short>)11]) : (3003289193620541031LL))), ((+(3003289193620541031LL))))) - (7092459169724796965LL))))))));
                }
            } 
        } 
        *var_25 = ((val<unsigned int>) var_3);
        *var_26 += ((/* implicit */val<unsigned long long int>) ((var_4) % (var_4)));
    }

}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)7181;
unsigned int var_1 = 1462565054U;
unsigned long long int var_2 = 12062202480619447363ULL;
unsigned int var_3 = 526284880U;
unsigned int var_4 = 4066995662U;
long long int var_5 = 8940395174301397916LL;
long long int var_6 = -162229783807086554LL;
unsigned short var_7 = (unsigned short)39216;
bool var_8 = (bool)0;
unsigned long long int var_9 = 17197762457023760072ULL;
unsigned short var_10 = (unsigned short)55074;
bool var_11 = (bool)1;
signed char var_12 = (signed char)-7;
unsigned int var_13 = 1277018178U;
long long int var_14 = -8093259708456890766LL;
signed char var_15 = (signed char)-118;
long long int var_16 = -4869777461846088609LL;
int zero = 0;
unsigned long long int var_17 = 5544931426132724179ULL;
long long int var_18 = -2825851195550024998LL;
long long int var_19 = -3861541924722679400LL;
long long int var_20 = 6294752380851662704LL;
unsigned int var_21 = 2035423204U;
bool var_22 = (bool)1;
unsigned long long int var_23 = 15467686565142094311ULL;
bool var_24 = (bool)0;
unsigned int var_25 = 2778060808U;
unsigned long long int var_26 = 9910317512445477605ULL;
long long int arr_0 [15] ;
bool arr_1 [15] ;
long long int arr_3 [15] [15] [15] ;
bool arr_5 [15] [15] [15] [15] ;
signed char arr_6 [15] [15] [15] ;
long long int arr_7 [15] [15] [15] [15] ;
unsigned int arr_9 [15] [15] [15] [15] ;
long long int arr_10 [15] [15] [15] [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_0 [i_0] = 2917714192400969134LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_1 [i_0] = (bool)0;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = 9091161367527711839LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    arr_5 [i_0] [i_1] [i_2] [i_3] = (bool)1;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (signed char)-65;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    arr_7 [i_0] [i_1] [i_2] [i_3] = 7092459169724796967LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    arr_9 [i_0] [i_1] [i_2] [i_3] = 3586634672U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    arr_10 [i_0] [i_1] [i_2] [i_3] = -6223418622192564859LL;
}

void checksum() {
    value_mismatch |= var_17 != 5544931426132724180ULL;
    value_mismatch |= var_18 != 0LL;
    value_mismatch |= var_19 != -1248981616685791544LL;
    value_mismatch |= var_20 != -1503212160668977075LL;
    value_mismatch |= var_21 != 0U;
    value_mismatch |= var_22 != (bool)0;
    value_mismatch |= var_23 != 0ULL;
    value_mismatch |= var_24 != (bool)0;
    value_mismatch |= var_25 != 526284880U;
    value_mismatch |= var_26 != 9910317512445477605ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    value_mismatch |= arr_10 [i_0] [i_1] [i_2] [i_3] != -65LL && arr_10 [i_0] [i_1] [i_2] [i_3] != -6223418622192564859LL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", false);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_2, var_3, var_4, var_5, var_6, var_7, var_8, var_9, var_10, var_11, var_12, var_13, var_14, var_15, var_16, zero, &var_17, &var_18, &var_19, &var_20, &var_21, &var_22, &var_23, &var_24, &var_25, &var_26);
  checksum();
  assert(!value_mismatch);
}
