/*
yarpgen version 2.0 (build 27a5fb5 on 1980:01:01)
Seed: 20
Invocation: ./yarpgen --seed=20 --nautilus=true -o /home/marg/nes/nautilus/yarpgen-stuff/test_20
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
void test(val<bool> var_0, val<short> var_1, val<bool> var_3, val<unsigned short> var_4, val<long long int> var_5, val<unsigned char> var_6, val<unsigned long long int> var_7, val<short> var_8, val<bool> var_9, val<long long int> var_11, val<bool> var_12, val<int> var_13, val<signed char> var_14, val<short> var_15, val<int> zero, val<unsigned int*> var_17, val<unsigned short*> var_18, val<unsigned long long int*> var_19, val<unsigned long long int*> var_20, val<signed char*> var_21, val<long long int*> var_22, val<long long int*> var_23, val<unsigned char*> var_24) {
    *var_17 = max((((val<unsigned int>) ((((/* implicit */val<bool>) var_4)) ? (var_7) : (((/* implicit */val<unsigned long long int>) var_11))))), (((/* implicit */val<unsigned int>) var_12)));
    *var_18 = ((/* implicit */val<unsigned short>) max((((/* implicit */val<int>) var_1)), (var_13)));
    *var_19 = ((/* implicit */val<unsigned long long int>) var_0);
    /* LoopNest 2 */
    for (val<unsigned long long int> i_0 = ((((/* implicit */val<unsigned long long int>) var_1)) - (23560ULL))/*0*/; i_0 < 17ULL/*17*/; i_0 += ((((/* implicit */val<unsigned long long int>) ((val<bool>) ((((/* implicit */val<bool>) ((((/* implicit */val<unsigned int>) ((/* implicit */val<int>) (val<short>)-20750))) % (4294967291U)))) ? (min((0U), (4294967291U))) : (((val<unsigned int>) 5U)))))) + (2ULL))/*2*/) 
    {
        for (val<signed char> i_1 = (val<signed char>)2/*2*/; i_1 < ((((/* implicit */val<int>) ((/* implicit */val<signed char>) var_9))) + (14))/*15*/; i_1 += (val<signed char>)1/*1*/) 
        {
            {
                *arr_6 [i_1] [i_1] = ((/* implicit */val<unsigned long long int>) ((val<unsigned char>) min((((((/* implicit */val<bool>) var_6)) ? (4294967295U) : (4294967291U))), (((16U) % (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_15))))))));
                *var_20 = ((val<unsigned long long int>) ((((/* implicit */val<bool>) (-(((/* implicit */val<int>) var_14))))) ? (((/* implicit */val<unsigned long long int>) (~(((/* implicit */val<int>) arr_0 [i_1 + 1]))))) : (((val<unsigned long long int>) var_13))));
                *var_21 = ((/* implicit */val<signed char>) ((((/* implicit */val<unsigned long long int>) max((((((/* implicit */val<bool>) var_6)) ? (4294967291U) : (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_3))))), (((/* implicit */val<unsigned int>) arr_4 [i_1] [7U] [i_1]))))) / (max((((/* implicit */val<unsigned long long int>) ((((/* implicit */val<int>) arr_4 [i_0] [i_0] [i_1])) / (((/* implicit */val<int>) var_9))))), (((((/* implicit */val<bool>) var_5)) ? (var_7) : (((/* implicit */val<unsigned long long int>) var_13))))))));
                if (((/* implicit */val<bool>) 5U))
                {
                    *var_22 = ((/* implicit */val<long long int>) min((var_22), (((/* implicit */val<long long int>) ((((/* implicit */val<bool>) (-(((val<int>) var_3))))) ? (((/* implicit */val<int>) ((val<signed char>) ((var_13) - (var_13))))) : (((/* implicit */val<int>) var_3)))))));
                    *arr_7 [i_1] [i_1] = ((/* implicit */val<unsigned char>) ((((/* implicit */val<bool>) 4294967290U)) ? (4462074336553127800ULL) : (((3720894620561589779ULL) * (((/* implicit */val<unsigned long long int>) ((((/* implicit */val<bool>) 0U)) ? (4294967291U) : (4294967295U))))))));
                    *var_23 = ((((/* implicit */val<long long int>) ((((((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_3))) * (arr_2 [i_1]))) / (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) arr_0 [i_0])))))) + (((((/* implicit */val<long long int>) ((/* implicit */val<int>) arr_4 [i_1] [i_1 + 2] [i_1]))) + (var_11))));
                    *var_24 = ((/* implicit */val<unsigned char>) ((((/* implicit */val<bool>) var_8)) ? (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) arr_0 [i_1]))) : (max((((/* implicit */val<unsigned int>) var_8)), (arr_2 [i_1])))));
                }

            }
        } 
    } 
}
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

bool var_0 = (bool)0;
short var_1 = (short)23560;
bool var_3 = (bool)1;
unsigned short var_4 = (unsigned short)24049;
long long int var_5 = -7882024790079769673LL;
unsigned char var_6 = (unsigned char)0;
unsigned long long int var_7 = 5815622377817618150ULL;
short var_8 = (short)-32199;
bool var_9 = (bool)1;
long long int var_11 = -1926100603109519873LL;
bool var_12 = (bool)0;
int var_13 = 1446290705;
signed char var_14 = (signed char)92;
short var_15 = (short)-8624;
int zero = 0;
unsigned int var_17 = 2729786325U;
unsigned short var_18 = (unsigned short)61509;
unsigned long long int var_19 = 10079207416983933764ULL;
unsigned long long int var_20 = 1677025883493732487ULL;
signed char var_21 = (signed char)-121;
long long int var_22 = 8260092567907457858LL;
long long int var_23 = -4013316074993761509LL;
unsigned char var_24 = (unsigned char)199;
unsigned short arr_0 [17] ;
unsigned int arr_2 [17] ;
unsigned short arr_4 [17] [17] [17] ;
unsigned long long int arr_6 [17] [17] ;
unsigned char arr_7 [17] [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_0 [i_0] = (unsigned short)33141;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_2 [i_0] = 1192755105U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (unsigned short)21328 : (unsigned short)32416;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_6 [i_0] [i_1] = (i_0 % 2 == 0) ? 12717349664980102893ULL : 11475580209329907036ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_7 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned char)54 : (unsigned char)237;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            hash(&seed, arr_7 [i_0] [i_1] );
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", false);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_3, var_4, var_5, var_6, var_7, var_8, var_9, var_11, var_12, var_13, var_14, var_15, zero, &var_17, &var_18, &var_19, &var_20, &var_21, &var_22, &var_23, &var_24);
  checksum();
  std::cout << "Result: " << seed << std::endl;
}
