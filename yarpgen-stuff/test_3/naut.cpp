/*
yarpgen version 2.0 (build df0ddec on 1980:01:01)
Seed: 3
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --seed=3
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
void test(val<int> var_7, val<unsigned int> var_11, val<int> var_12, val<bool> var_14, val<short> var_17, val<int> zero, val<bool*> var_18, val<int*> var_19, val<short*> var_20, val<int*> var_21, val<signed char*> var_22) {
    /* LoopSeq 2 */
    /* vectorizable */
    #pragma clang loop vectorize_predicate(enable)
    #pragma clang loop vectorize(enable)
    for (val<bool> i_0 = (val<bool>)0/*0*/; i_0 < (val<bool>)1/*1*/; i_0 += (val<bool>)1/*1*/) /* same iter space */
    {
        arr_2 [(val<bool>)0] = ((/* implicit */val<unsigned char>) ((val<int>) (val<unsigned char>)142));
        arr_3 [i_0] [i_0] = ((/* implicit */val<unsigned char>) var_17);
        *var_18 += ((/* implicit */val<bool>) (val<unsigned char>)84);
        arr_4 [i_0] = ((/* implicit */val<signed char>) ((((/* implicit */val<bool>) arr_1 [i_0] [i_0])) ? (((/* implicit */val<int>) (val<signed char>)-22)) : (((((/* implicit */val<bool>) var_11)) ? (((/* implicit */val<int>) var_14)) : (((/* implicit */val<int>) (val<unsigned char>)113))))));
    }
    #pragma omp simd
    #pragma clang loop unroll(enable)
    #pragma clang loop vectorize(enable)
    for (val<bool> i_1 = (val<bool>)0/*0*/; i_1 < (val<bool>)1/*1*/; i_1 += (val<bool>)1/*1*/) /* same iter space */
    {
        /* LoopSeq 1 */
        #pragma clang loop vectorize_predicate(enable)
        #pragma clang loop unroll(enable)
        for (val<int> i_2 = 0/*0*/; i_2 < 15/*15*/; i_2 += ((((/* implicit */val<int>) (!(((((/* implicit */val<unsigned long long int>) (+(var_7)))) > (max((((/* implicit */val<unsigned long long int>) (val<unsigned char>)0)), (16620447504488265468ULL)))))))) + (4))/*4*/) 
        {
            *var_19 = ((/* implicit */val<int>) min((*var_19), (((/* implicit */val<int>) (val<unsigned char>)72))));
            *var_20 *= ((/* implicit */val<short>) (((!(((/* implicit */val<bool>) (+(var_12)))))) ? ((-((-(((/* implicit */val<int>) (val<unsigned char>)72)))))) : (((/* implicit */val<int>) ((((/* implicit */val<int>) (val<signed char>)-22)) == (((/* implicit */val<int>) (val<bool>)1)))))));
        }
        arr_9 [i_1] = var_7;
        *var_21 = (~(((/* implicit */val<int>) (val<unsigned char>)142)));
    }
    *var_22 = ((/* implicit */val<signed char>) (-(((/* implicit */val<int>) max(((val<short>)32767), ((val<short>)14336))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_7 = -2009434158;
unsigned int var_11 = 3685032366U;
int var_12 = -486677406;
bool var_14 = (bool)0;
short var_17 = (short)-5636;
int zero = 0;
bool var_18 = (bool)0;
int var_19 = 1452460447;
short var_20 = (short)-7719;
int var_21 = -1841159309;
signed char var_22 = (signed char)-43;
int arr_1 [15] [15] ;
unsigned char arr_2 [15] ;
unsigned char arr_3 [15] [15] ;
signed char arr_4 [15] ;
int arr_9 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_1 [i_0] [i_1] = 995433049;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_2 [i_0] = (unsigned char)111;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_3 [i_0] [i_1] = (unsigned char)114;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_4 [i_0] = (signed char)-49;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_9 [i_0] = (i_0 % 2 == 0) ? -2065124859 : -1357383819;
}

void checksum() {
    value_mismatch |= var_18 != (bool)1;
    value_mismatch |= var_19 != 72;
    value_mismatch |= var_20 != (short)0;
    value_mismatch |= var_21 != -143;
    value_mismatch |= var_22 != (signed char)1;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        value_mismatch |= arr_2 [i_0] != (unsigned char)142 && arr_2 [i_0] != (unsigned char)111;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            value_mismatch |= arr_3 [i_0] [i_1] != (unsigned char)252 && arr_3 [i_0] [i_1] != (unsigned char)114;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        value_mismatch |= arr_4 [i_0] != (signed char)-22 && arr_4 [i_0] != (signed char)-49;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        value_mismatch |= arr_9 [i_0] != -2009434158 && arr_9 [i_0] != -2065124859 && arr_9 [i_0] != -2009434158 && arr_9 [i_0] != -1357383819;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", false);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_7, var_11, var_12, var_14, var_17, zero, &var_18, &var_19, &var_20, &var_21, &var_22);
  checksum();
  assert(!value_mismatch);
}
