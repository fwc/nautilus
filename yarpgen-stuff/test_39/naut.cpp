/*
yarpgen version 2.0 (build df0ddec on 1980:01:01)
Seed: 39
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --seed=39
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
void test(val<unsigned int> var_0, val<unsigned char> var_2, val<unsigned int> var_3, val<unsigned short> var_4, val<long long int> var_6, val<int> var_7, val<short> var_8, val<short> var_11, val<unsigned char> var_14, val<bool> var_15, val<unsigned long long int> var_17, val<int> zero, val<short*> var_18, val<unsigned long long int*> var_19, val<short*> var_20, val<unsigned short*> var_21) {
    /* LoopNest 3 */
    #pragma clang loop vectorize_predicate(enable)
    for (val<unsigned long long int> i_0 = ((/* implicit */val<unsigned long long int>) (!(((/* implicit */val<bool>) var_14))))/*0*/; i_0 < ((var_17) - (6886210762698539445ULL))/*25*/; i_0 += ((((/* implicit */val<unsigned long long int>) var_4)) - (1584ULL))/*1*/) 
    {
        #pragma omp simd
        #pragma clang loop interleave(enable)
        #pragma clang loop vectorize_predicate(enable)
        for (val<unsigned int> i_1 = ((/* implicit */val<unsigned int>) max((((val<int>) ((val<bool>) 1354032308U))), (((/* implicit */val<int>) (val<short>)-26073))))/*1*/; i_1 < ((((/* implicit */val<unsigned int>) var_7)) - (863317982U))/*24*/; i_1 += 4U/*4*/) 
        {
            #pragma clang loop vectorize_predicate(enable)
            #pragma clang loop vectorize(enable)
            #pragma clang loop unroll(enable)
            for (val<signed char> i_2 = ((((/* implicit */val<int>) ((/* implicit */val<signed char>) var_7))) + (10))/*0*/; i_2 < ((((/* implicit */val<int>) ((/* implicit */val<signed char>) var_0))) + (45))/*25*/; i_2 += ((((/* implicit */val<int>) ((/* implicit */val<signed char>) var_8))) - (48))/*1*/) 
            {
                {
                    arr_10 [(val<unsigned short>)20] [i_2] &= ((/* implicit */val<int>) arr_4 [i_2] [(val<bool>)1] [i_0]);
                    *var_18 = ((/* implicit */val<short>) max((*var_18), (((/* implicit */val<short>) ((max((((/* implicit */val<unsigned long long int>) ((((/* implicit */val<bool>) arr_2 [i_1] [i_1])) ? (arr_1 [i_1] [i_2]) : (((/* implicit */val<int>) arr_4 [i_0] [i_0] [i_0]))))), (arr_3 [i_0] [(val<unsigned char>)24]))) >> (((/* implicit */val<int>) (!(((/* implicit */val<bool>) ((((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_2))) * (1354032321U))))))))))));
                    *var_19 = ((/* implicit */val<unsigned long long int>) arr_2 [(val<unsigned char>)22] [i_2]);
                }
            } 
        } 
    } 
    *var_20 = ((/* implicit */val<short>) max((*var_20), (((/* implicit */val<short>) ((((/* implicit */val<bool>) max((((/* implicit */val<short>) ((((/* implicit */val<int>) var_11)) > (((/* implicit */val<int>) (val<short>)-26092))))), (max(((val<short>)-26073), (((/* implicit */val<short>) (val<bool>)1))))))) ? (((/* implicit */val<long long int>) ((/* implicit */val<int>) ((val<bool>) ((var_15) ? (var_3) : (1393935894U)))))) : (max((var_6), (((/* implicit */val<long long int>) (!(((/* implicit */val<bool>) var_14))))))))))));
    *var_21 = ((/* implicit */val<unsigned short>) min((*var_21), (((/* implicit */val<unsigned short>) max((1393935905U), (393216U))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1527580652U;
unsigned char var_2 = (unsigned char)37;
unsigned int var_3 = 312598652U;
unsigned short var_4 = (unsigned short)1585;
long long int var_6 = 1921844403312228152LL;
int var_7 = 863318006;
short var_8 = (short)32049;
short var_11 = (short)-3621;
unsigned char var_14 = (unsigned char)65;
bool var_15 = (bool)1;
unsigned long long int var_17 = 6886210762698539470ULL;
int zero = 0;
short var_18 = (short)24774;
unsigned long long int var_19 = 1699300432867586772ULL;
short var_20 = (short)1149;
unsigned short var_21 = (unsigned short)41537;
int arr_1 [25] [25] ;
int arr_2 [25] [25] ;
unsigned long long int arr_3 [25] [25] ;
unsigned short arr_4 [25] [25] [25] ;
int arr_10 [25] [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_1 [i_0] [i_1] = -668050382;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_2 [i_0] [i_1] = -1254246503;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_3 [i_0] [i_1] = 17650676388068114367ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (unsigned short)60353;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_10 [i_0] [i_1] = (i_0 % 2 == 0) ? -1970687813 : 1514380220;
}

void checksum() {
    value_mismatch |= var_18 != (short)24774;
    value_mismatch |= var_19 != 18446744072455305113ULL;
    value_mismatch |= var_20 != (short)1149;
    value_mismatch |= var_21 != (unsigned short)41537;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            value_mismatch |= arr_10 [i_0] [i_1] != 41089 && arr_10 [i_0] [i_1] != -1970687813 && arr_10 [i_0] [i_1] != 1514380220 && arr_10 [i_0] [i_1] != 1514380220;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", false);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_2, var_3, var_4, var_6, var_7, var_8, var_11, var_14, var_15, var_17, zero, &var_18, &var_19, &var_20, &var_21);
  checksum();
  assert(!value_mismatch);
}
