/*
yarpgen version 2.0 (build df0ddec on 1980:01:01)
Seed: 2
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --seed=2
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
void test(val<int> var_5, val<short> var_12, val<short> var_14, val<short> var_15, val<int> zero, val<short*> var_17, val<short*> var_18, val<short*> var_19, val<int*> var_20) {
    *var_17 = var_15;
    /* LoopSeq 2 */
    for (val<short> i_0 = ((((/* implicit */val<int>) ((/* implicit */val<short>) var_5))) + (15271))/*1*/; i_0 < (val<short>)17/*17*/; i_0 += ((((/* implicit */val<int>) var_14)) + (14156))/*4*/) /* same iter space */
    {
        *var_18 *= ((/* implicit */val<short>) ((((-1581193855) + (2147483647))) << (((327597140) - (327597140)))));
        arr_4 [i_0] [13] = (val<short>)8192;
    }
    #pragma clang loop interleave(enable)
    #pragma clang loop vectorize(enable)
    #pragma clang loop unroll(enable)
    for (val<short> i_1 = ((((/* implicit */val<int>) ((/* implicit */val<short>) var_5))) + (15271))/*1*/; i_1 < (val<short>)17/*17*/; i_1 += ((((/* implicit */val<int>) var_14)) + (14156))/*4*/) /* same iter space */
    {
        *var_19 -= ((/* implicit */val<short>) ((((/* implicit */val<bool>) ((((/* implicit */val<bool>) var_5)) ? (((/* implicit */val<int>) (val<short>)-30524)) : (((/* implicit */val<int>) (val<short>)-12678))))) ? (((/* implicit */val<int>) (!(((/* implicit */val<bool>) -1581193854))))) : ((+(((/* implicit */val<int>) (val<short>)-8513))))));
        arr_7 [i_1] = var_12;
        *var_20 = ((/* implicit */val<int>) min((*var_20), (max(((+(((/* implicit */val<int>) (val<short>)-30524)))), (((2147483639) / (((/* implicit */val<int>) (val<short>)-15561))))))));
    }
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_5 = -895826854;
short var_12 = (short)23633;
short var_14 = (short)-14152;
short var_15 = (short)19476;
int zero = 0;
short var_17 = (short)3882;
short var_18 = (short)-408;
short var_19 = (short)30571;
int var_20 = 1399364560;
short arr_4 [18] [18] ;
short arr_7 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_4 [i_0] [i_1] = (short)-27348;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_7 [i_0] = (i_0 % 2 == 0) ? (short)-16760 : (short)-23848;
}

void checksum() {
    value_mismatch |= var_17 != (short)19476;
    value_mismatch |= var_18 != (short)0;
    value_mismatch |= var_19 != (short)30571;
    value_mismatch |= var_20 != -30524;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            value_mismatch |= arr_4 [i_0] [i_1] != (short)8192 && arr_4 [i_0] [i_1] != (short)-27348;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        value_mismatch |= arr_7 [i_0] != (short)23633 && arr_7 [i_0] != (short)-16760 && arr_7 [i_0] != (short)23633 && arr_7 [i_0] != (short)-23848;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", false);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_5, var_12, var_14, var_15, zero, &var_17, &var_18, &var_19, &var_20);
  checksum();
  assert(!value_mismatch);
}
