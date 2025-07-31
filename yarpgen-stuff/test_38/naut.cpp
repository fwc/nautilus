/*
yarpgen version 2.0 (build 887b8f1 on 1980:01:01)
Seed: 38
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --seed=38
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
void test(val<int> var_0, val<int> var_5, val<unsigned short> var_7, val<unsigned int> var_8, val<int> zero, val<int*> var_10, val<bool*> var_11, val<int*> var_12, val<signed char*> var_13, val<unsigned int*> var_14, val<int*> var_15, val<bool*> var_16, val<signed char*> var_17) {
    /* LoopSeq 2 */
    /* vectorizable */
    for (val<unsigned char> i_0 = (val<unsigned char>)3/*3*/; i_0 < ((((/* implicit */val<int>) ((/* implicit */val<unsigned char>) ((var_5) >= (((/* implicit */val<int>) var_7)))))) + (10))/*10*/; i_0 += (val<unsigned char>)1/*1*/) 
    {
        *var_10 = ((/* implicit */val<int>) max((var_10), (var_0)));
        *var_11 = ((/* implicit */val<bool>) ((((var_5) + (2147483647))) << (((((/* implicit */val<int>) (val<unsigned short>)65526)) - (65526)))));
    }
    /* vectorizable */
    for (val<signed char> i_1 = (val<signed char>)2/*2*/; i_1 < (val<signed char>)17/*17*/; i_1 += (val<signed char>)4/*4*/) 
    {
        /* LoopSeq 1 */
        #pragma clang loop vectorize_predicate(enable)
        for (val<int> i_2 = 0/*0*/; i_2 < 18/*18*/; i_2 += 2/*2*/) 
        {
            if (((/* implicit */val<bool>) arr_3 [i_1 + 1] [i_1 - 1]))
            {
                *arr_8 [i_1] [i_1 - 2] [i_2] = ((/* implicit */val<int>) (val<short>)2745);
                *arr_9 [i_2] [(val<bool>)1] [i_1 - 1] = ((/* implicit */val<int>) ((val<unsigned int>) arr_7 [i_1 - 1]));
            }

            *var_12 = ((/* implicit */val<int>) min((var_12), (((/* implicit */val<int>) ((arr_3 [i_1 - 2] [i_1 - 2]) >= (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) (val<signed char>)74))))))));
            *var_13 = ((/* implicit */val<signed char>) ((((/* implicit */val<bool>) var_8)) ? (((/* implicit */val<int>) (val<signed char>)67)) : (((/* implicit */val<int>) arr_2 [i_1 + 1] [i_1 + 1]))));
            if (((/* implicit */val<bool>) arr_4 [i_1]))
            {
                *arr_10 [i_2] [i_2] = ((/* implicit */val<unsigned long long int>) arr_7 [11LL]);
                *var_14 = ((/* implicit */val<unsigned int>) (-(arr_5 [i_1 - 2] [i_1 - 1] [i_1 - 1])));
            }

            *arr_11 [i_1] = ((/* implicit */val<signed char>) ((val<unsigned short>) arr_2 [i_1 - 2] [i_1 - 1]));
        }
        *arr_12 [i_1] = ((/* implicit */val<unsigned long long int>) arr_7 [i_1]);
        *var_15 = ((((/* implicit */val<int>) arr_7 [(val<unsigned short>)7])) | (((/* implicit */val<int>) (val<signed char>)-80)));
        *var_16 = ((/* implicit */val<bool>) arr_6 [i_1 - 1]);
        *arr_13 [i_1] = ((/* implicit */val<bool>) arr_7 [i_1 + 1]);
    }
    *var_17 = ((/* implicit */val<signed char>) var_0);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -2120545962;
int var_5 = -1615147942;
unsigned short var_7 = (unsigned short)47311;
unsigned int var_8 = 2009264791U;
int zero = 0;
int var_10 = 460927020;
bool var_11 = (bool)0;
int var_12 = -1816942479;
signed char var_13 = (signed char)-23;
unsigned int var_14 = 1474081457U;
int var_15 = -1327637309;
bool var_16 = (bool)0;
signed char var_17 = (signed char)64;
short arr_2 [18] [18] ;
unsigned long long int arr_3 [18] [18] ;
int arr_4 [18] ;
long long int arr_5 [18] [18] [18] ;
long long int arr_6 [18] ;
unsigned short arr_7 [18] ;
int arr_8 [18] [18] [18] ;
int arr_9 [18] [18] [18] ;
unsigned long long int arr_10 [18] [18] ;
signed char arr_11 [18] ;
unsigned long long int arr_12 [18] ;
bool arr_13 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_2 [i_0] [i_1] = (short)-12872;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_3 [i_0] [i_1] = 15837779049502926089ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_4 [i_0] = -617746684;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = 7881110191026514210LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_6 [i_0] = -3185355080391529884LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_7 [i_0] = (unsigned short)43522;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = -1337636680;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = 120129981;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_10 [i_0] [i_1] = 6936028319203611541ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_11 [i_0] = (signed char)89;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_12 [i_0] = 2567308256884997750ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_13 [i_0] = (bool)1;
}

void checksum() {
    value_mismatch |= var_10 != 460927020;
    value_mismatch |= var_11 != (bool)1;
    value_mismatch |= var_12 != -1816942479;
    value_mismatch |= var_13 != (signed char)67;
    value_mismatch |= var_14 != 2217170654U;
    value_mismatch |= var_15 != -78;
    value_mismatch |= var_16 != (bool)1;
    value_mismatch |= var_17 != (signed char)86;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                value_mismatch |= arr_8 [i_0] [i_1] [i_2] != 2745 && arr_8 [i_0] [i_1] [i_2] != -1337636680;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                value_mismatch |= arr_9 [i_0] [i_1] [i_2] != 43522 && arr_9 [i_0] [i_1] [i_2] != 120129981;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            value_mismatch |= arr_10 [i_0] [i_1] != 43522ULL && arr_10 [i_0] [i_1] != 6936028319203611541ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        value_mismatch |= arr_11 [i_0] != (signed char)-72 && arr_11 [i_0] != (signed char)89;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        value_mismatch |= arr_12 [i_0] != 43522ULL && arr_12 [i_0] != 2567308256884997750ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        value_mismatch |= arr_13 [i_0] != (bool)1 && arr_13 [i_0] != (bool)1;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", false);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_5, var_7, var_8, zero, &var_10, &var_11, &var_12, &var_13, &var_14, &var_15, &var_16, &var_17);
  checksum();
  assert(!value_mismatch);
}
