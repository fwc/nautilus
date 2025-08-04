/*
yarpgen version 2.0 (build df0ddec on 1980:01:01)
Seed: 29
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --seed=29
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
void test(val<long long int> var_0, val<signed char> var_1, val<unsigned short> var_3, val<long long int> var_4, val<signed char> var_7, val<signed char> var_8, val<int> var_9, val<signed char> var_10, val<signed char> var_12, val<unsigned char> var_14, val<int> zero, val<unsigned long long int*> var_15, val<unsigned char*> var_16, val<unsigned long long int*> var_17, val<unsigned int*> var_18, val<long long int*> var_19, val<short*> var_20) {
    /* LoopSeq 2 */
    /* vectorizable */
    #pragma clang loop vectorize_predicate(enable)
    #pragma clang loop vectorize(enable)
    for (val<short> i_0 = ((((/* implicit */val<int>) ((/* implicit */val<short>) var_0))) + (7348))/*3*/; i_0 < (val<short>)18/*18*/; i_0 += (val<short>)4/*4*/) /* same iter space */
    {
        arr_2 [i_0] [i_0] = var_12;
        *var_15 ^= ((/* implicit */val<unsigned long long int>) ((((/* implicit */val<bool>) var_7)) ? (((/* implicit */val<int>) arr_1 [i_0 - 3] [i_0 + 1])) : (((/* implicit */val<int>) arr_1 [i_0 + 1] [i_0 - 3]))));
    }
    /* vectorizable */
    #pragma clang loop vectorize(enable)
    for (val<short> i_1 = ((((/* implicit */val<int>) ((/* implicit */val<short>) var_0))) + (7348))/*3*/; i_1 < (val<short>)18/*18*/; i_1 += (val<short>)4/*4*/) /* same iter space */
    {
        *var_16 = arr_3 [i_1] [i_1];
        arr_5 [i_1] [i_1] = ((/* implicit */val<signed char>) ((((/* implicit */val<bool>) arr_0 [i_1])) ? (arr_4 [i_1 - 3]) : (((/* implicit */val<unsigned long long int>) arr_0 [i_1]))));
        arr_6 [i_1] = ((/* implicit */val<unsigned char>) arr_4 [i_1]);
        *var_17 = ((/* implicit */val<unsigned long long int>) min((*var_17), (((/* implicit */val<unsigned long long int>) arr_0 [i_1 - 2]))));
    }
    *var_18 += ((/* implicit */val<unsigned int>) min((var_0), (((/* implicit */val<long long int>) ((val<bool>) ((((/* implicit */val<bool>) var_1)) ? (var_9) : (((/* implicit */val<int>) var_1))))))));
    *var_19 = ((/* implicit */val<long long int>) ((((/* implicit */val<bool>) var_7)) ? (max((((((/* implicit */val<int>) var_14)) % (((/* implicit */val<int>) var_8)))), (((/* implicit */val<int>) var_8)))) : (((/* implicit */val<int>) ((((val<long long int>) var_14)) > (min((((/* implicit */val<long long int>) var_3)), (var_4))))))));
    *var_20 = ((/* implicit */val<short>) ((val<unsigned short>) var_10));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 2240580493567189839LL;
signed char var_1 = (signed char)99;
unsigned short var_3 = (unsigned short)59537;
long long int var_4 = 6511394956140325435LL;
signed char var_7 = (signed char)-90;
signed char var_8 = (signed char)109;
int var_9 = -1913358774;
signed char var_10 = (signed char)-93;
signed char var_12 = (signed char)-21;
unsigned char var_14 = (unsigned char)107;
int zero = 0;
unsigned long long int var_15 = 17056713494833075586ULL;
unsigned char var_16 = (unsigned char)174;
unsigned long long int var_17 = 4891767240574879683ULL;
unsigned int var_18 = 3797319426U;
long long int var_19 = -3322458307939974913LL;
short var_20 = (short)4989;
int arr_0 [19] ;
unsigned char arr_1 [19] [19] ;
unsigned char arr_3 [19] [19] ;
unsigned long long int arr_4 [19] ;
signed char arr_2 [19] [19] ;
signed char arr_5 [19] [19] ;
unsigned char arr_6 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_0 [i_0] = 85584187;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned char)213;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_3 [i_0] [i_1] = (unsigned char)65;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_4 [i_0] = 7227741149819043227ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_2 [i_0] [i_1] = (signed char)-20;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_5 [i_0] [i_1] = (signed char)58;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_6 [i_0] = (unsigned char)116;
}

void checksum() {
    value_mismatch |= var_15 != 17056713494833075586ULL;
    value_mismatch |= var_16 != (unsigned char)65;
    value_mismatch |= var_17 != 85584187ULL;
    value_mismatch |= var_18 != 3797319427U;
    value_mismatch |= var_19 != 109LL;
    value_mismatch |= var_20 != (short)-93;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            value_mismatch |= arr_2 [i_0] [i_1] != (signed char)-21 && arr_2 [i_0] [i_1] != (signed char)-20;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            value_mismatch |= arr_5 [i_0] [i_1] != (signed char)-101 && arr_5 [i_0] [i_1] != (signed char)58;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        value_mismatch |= arr_6 [i_0] != (unsigned char)155 && arr_6 [i_0] != (unsigned char)116;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", false);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_3, var_4, var_7, var_8, var_9, var_10, var_12, var_14, zero, &var_15, &var_16, &var_17, &var_18, &var_19, &var_20);
  checksum();
  assert(!value_mismatch);
}
