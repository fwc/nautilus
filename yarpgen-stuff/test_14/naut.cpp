/*
yarpgen version 2.0 (build 27a5fb5 on 1980:01:01)
Seed: 14
Invocation: ./yarpgen --seed=14 --nautilus=true -o /home/marg/nes/nautilus/yarpgen-stuff/test_14
*/

#include <nautilus/core.hpp>
#include <nautilus/Engine.hpp>

using namespace nautilus;

#define max(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a > _b ? _a : _b; })
#define min(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a < _b ? _a : _b; })
void test(val<long long int> var_0, val<unsigned long long int> var_1, val<unsigned int> var_2, val<signed char> var_3, val<unsigned short> var_4, val<signed char> var_5, val<bool> var_7, val<long long int> var_8, val<signed char> var_9, val<int> zero, val<unsigned long long int*> var_10, val<short*> var_11, val<bool*> var_12, val<unsigned long long int*> var_13, val<unsigned int*> var_14, val<long long int*> var_15) {
    *var_10 = ((/* implicit */val<unsigned long long int>) max((((((/* implicit */val<bool>) max((((/* implicit */val<unsigned int>) (val<signed char>)-113)), (var_2)))) ? (var_8) : (((/* implicit */val<long long int>) (+(((/* implicit */val<int>) (val<signed char>)83))))))), (((/* implicit */val<long long int>) var_7))));
    /* LoopNest 2 */
    #pragma omp simd
    #pragma clang loop vectorize(enable)
    #pragma clang loop interleave(enable)
    #pragma clang loop unroll(enable)
    for (val<long long int> i_0 = 1LL/*1*/; i_0 < 11LL/*11*/; i_0 += ((((/* implicit */val<long long int>) (~(((/* implicit */val<int>) (val<signed char>)-113))))) - (109LL))/*3*/) 
    {
        #pragma clang loop vectorize(enable)
        for (val<int> i_1 = ((((/* implicit */val<int>) ((((/* implicit */val<bool>) max((var_0), (((/* implicit */val<long long int>) arr_1 [i_0 - 1]))))) ? (((((/* implicit */val<bool>) (~(var_1)))) ? (((/* implicit */val<long long int>) ((var_7) ? (arr_0 [i_0] [i_0]) : (arr_0 [i_0] [i_0])))) : (((((/* implicit */val<bool>) var_9)) ? (((/* implicit */val<long long int>) ((/* implicit */val<int>) (val<signed char>)113))) : (var_0))))) : (((/* implicit */val<long long int>) ((((/* implicit */val<bool>) ((((/* implicit */val<bool>) var_5)) ? (((/* implicit */val<int>) (val<short>)-21336)) : (((/* implicit */val<int>) (val<signed char>)-113))))) ? (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) max((var_9), (((/* implicit */val<signed char>) (val<bool>)0)))))) : (421986761U))))))) - (443929261))/*0*/; i_1 < ((((/* implicit */val<int>) var_8)) - (1353870954))/*12*/; i_1 += (((~((~(((/* implicit */val<int>) var_4)))))) - (26506))/*2*/) 
        {
            {
                if (((/* implicit */val<bool>) ((val<unsigned int>) ((((/* implicit */val<bool>) arr_5 [i_1] [i_0 - 1])) ? (((/* implicit */val<int>) (val<unsigned char>)8)) : (((/* implicit */val<int>) (val<short>)5653))))))
                {
                    *var_11 = ((/* implicit */val<short>) min((var_11), (((/* implicit */val<short>) ((((/* implicit */val<bool>) ((val<unsigned long long int>) 2460782544U))) ? (((/* implicit */val<unsigned int>) ((((/* implicit */val<bool>) (val<unsigned short>)37506)) ? (((/* implicit */val<int>) ((val<bool>) 798432105305422938LL))) : (((/* implicit */val<int>) var_5))))) : (min((min((arr_0 [i_0 - 1] [i_1]), (((/* implicit */val<unsigned int>) var_3)))), (((/* implicit */val<unsigned int>) (-(((/* implicit */val<int>) (val<unsigned char>)99))))))))))));
                    /* LoopNest 3 */
                    #pragma clang loop vectorize_predicate(enable)
                    #pragma clang loop vectorize(enable)
                    for (val<unsigned char> i_2 = (val<unsigned char>)0/*0*/; i_2 < ((((/* implicit */val<int>) ((/* implicit */val<unsigned char>) (!(((/* implicit */val<bool>) ((arr_1 [i_1]) ? (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) arr_1 [i_0 + 1]))) : (10391406226765397346ULL)))))))) + (12))/*12*/; i_2 += ((((/* implicit */val<int>) ((/* implicit */val<unsigned char>) ((((/* implicit */val<bool>) ((((/* implicit */val<bool>) ((arr_1 [i_0 - 1]) ? (arr_3 [i_1] [(val<unsigned short>)11]) : (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) (val<signed char>)92)))))) ? (((((/* implicit */val<bool>) (val<signed char>)122)) ? (15015055501165888717ULL) : (((/* implicit */val<unsigned long long int>) 1392981803U)))) : (((/* implicit */val<unsigned long long int>) ((((/* implicit */val<bool>) arr_0 [(val<bool>)1] [i_1])) ? (((/* implicit */val<long long int>) ((/* implicit */val<int>) arr_1 [i_0]))) : (var_0))))))) ? (((/* implicit */val<long long int>) 428316894)) : (((((/* implicit */val<bool>) min((1834184752U), (arr_6 [i_1] [i_1])))) ? (798432105305422938LL) : (((((/* implicit */val<bool>) (val<unsigned short>)0)) ? (((/* implicit */val<long long int>) ((/* implicit */val<int>) (val<signed char>)127))) : (798432105305422938LL))))))))) - (219))/*3*/) 
                    {
                        #pragma clang loop interleave(enable)
                        #pragma clang loop unroll(enable)
                        #pragma clang loop vectorize(enable)
                        for (val<unsigned short> i_3 = ((((/* implicit */val<int>) ((/* implicit */val<unsigned short>) max((((((/* implicit */val<bool>) arr_6 [i_0 + 1] [i_0 - 1])) ? (((/* implicit */val<unsigned long long int>) arr_6 [i_0 - 1] [i_0 - 1])) : (arr_7 [i_0] [i_0] [i_0] [i_0 - 1]))), (((/* implicit */val<unsigned long long int>) ((((/* implicit */val<bool>) (val<signed char>)127)) ? (var_0) : (((/* implicit */val<long long int>) (+(var_2))))))))))) - (6337))/*0*/; i_3 < ((((/* implicit */val<int>) ((/* implicit */val<unsigned short>) arr_7 [i_0] [i_0] [i_2] [i_0]))) - (814))/*12*/; i_3 += (val<unsigned short>)3/*3*/) 
                        {
                            #pragma clang loop vectorize_predicate(enable)
                            #pragma clang loop interleave(enable)
                            for (val<signed char> i_4 = (val<signed char>)0/*0*/; i_4 < ((((/* implicit */val<int>) ((/* implicit */val<signed char>) var_8))) - (106))/*12*/; i_4 += (val<signed char>)2/*2*/) 
                            {
                                {
                                    *arr_17 [i_0 - 1] [i_2] [2LL] [i_0 - 1] [i_0 - 1] [i_3] [i_4] = ((/* implicit */val<signed char>) 1392981803U);
                                    *var_12 = ((/* implicit */val<bool>) (+(((/* implicit */val<int>) (val<bool>)0))));
                                    *var_13 = ((((/* implicit */val<bool>) ((((/* implicit */val<bool>) arr_9 [i_0 + 1] [i_1] [i_1] [i_2])) ? (arr_9 [i_0 + 1] [i_1] [i_2] [i_2]) : (((/* implicit */val<unsigned long long int>) 428316879))))) ? ((-(arr_9 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_2]))) : (max((arr_9 [i_0 - 1] [i_0 - 1] [i_3] [i_2]), (arr_9 [i_0 - 1] [5U] [i_2] [i_2]))));
                                }
                            } 
                        } 
                    } 
                }

                *var_14 = ((/* implicit */val<unsigned int>) min((((((/* implicit */val<bool>) (val<signed char>)92)) ? (((((/* implicit */val<bool>) (val<short>)21335)) ? (((/* implicit */val<int>) (val<bool>)0)) : (((/* implicit */val<int>) arr_1 [i_0])))) : (((/* implicit */val<int>) min((var_3), ((val<signed char>)-16)))))), (((/* implicit */val<int>) (val<short>)18042))));
                *var_15 = ((/* implicit */val<long long int>) (-(arr_3 [i_0] [i_0])));
            }
        } 
    } 
}
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 7954620238225152193LL;
unsigned long long int var_1 = 10644161987968940303ULL;
unsigned int var_2 = 442199615U;
signed char var_3 = (signed char)44;
unsigned short var_4 = (unsigned short)26508;
signed char var_5 = (signed char)-51;
bool var_7 = (bool)0;
long long int var_8 = -6107884530864853386LL;
signed char var_9 = (signed char)-56;
int zero = 0;
unsigned long long int var_10 = 17344268436778999731ULL;
short var_11 = (short)13040;
bool var_12 = (bool)0;
unsigned long long int var_13 = 16959697315460644296ULL;
unsigned int var_14 = 322884733U;
long long int var_15 = 7559694557776070682LL;
unsigned int arr_0 [12] [12] ;
bool arr_1 [12] ;
unsigned long long int arr_3 [12] [12] ;
long long int arr_5 [12] [12] ;
unsigned int arr_6 [12] [12] ;
unsigned long long int arr_7 [12] [12] [12] [12] ;
unsigned long long int arr_9 [12] [12] [12] [12] ;
signed char arr_17 [12] [12] [12] [12] [12] [12] [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_0 [i_0] [i_1] = 443929261U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_1 [i_0] = (bool)1;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_3 [i_0] [i_1] = 9433072176213544228ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_5 [i_0] [i_1] = 4863035865124657786LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_6 [i_0] [i_1] = 993968132U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    arr_7 [i_0] [i_1] [i_2] [i_3] = 2997669624837047098ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    arr_9 [i_0] [i_1] [i_2] [i_3] = (i_3 % 2 == 0) ? 7320915361339250730ULL : 5740005184675813151ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 12; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 12; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 12; ++i_6) 
                                arr_17 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = (i_1 % 2 == 0) ? (signed char)122 : (signed char)94;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 12; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 12; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 12; ++i_6) 
                                hash(&seed, arr_17 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] );
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", false);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_2, var_3, var_4, var_5, var_7, var_8, var_9, zero, &var_10, &var_11, &var_12, &var_13, &var_14, &var_15);
  checksum();
  std::cout << "Result: " << seed << std::endl;
}
