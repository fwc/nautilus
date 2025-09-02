/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 365
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=365
*/

#include <nautilus/core.hpp>
#include <nautilus/Engine.hpp>
#include <cassert>
#ifndef USE_COMPILATION
#define USE_COMPILATION false
#endif

using namespace nautilus;

#define max(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a > _b ? _a : _b; })
#define min(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a < _b ? _a : _b; })
void test(val<int> var_0, val<bool> var_1, val<bool> var_2, val<unsigned char> var_3, val<unsigned short> var_5, val<signed char> var_6, val<unsigned int> var_8, val<unsigned long long int> var_12, val<short> var_14, val<signed char> var_15, val<signed char> var_17, val<unsigned long long int> var_18, val<int> zero, val<bool*> var_19, val<long long int*> var_20, val<unsigned short*> var_21, val<signed char*> var_22) {
    *var_19 |= ((/* implicit */val<bool>) min((((((val<bool>) var_12)) ? (max((((/* implicit */val<int>) (val<bool>)0)), (var_0))) : (((((/* implicit */val<bool>) 290793121)) ? (((/* implicit */val<int>) var_5)) : (((/* implicit */val<int>) var_2)))))), (min((((((/* implicit */val<bool>) var_14)) ? (((/* implicit */val<int>) var_1)) : (((/* implicit */val<int>) var_3)))), (((/* implicit */val<int>) var_1))))));
    *var_20 = ((/* implicit */val<long long int>) ((((/* implicit */val<bool>) 2097151)) ? (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) ((val<unsigned char>) ((((/* implicit */val<bool>) 290793128)) && (((/* implicit */val<bool>) var_6))))))) : (min((((val<unsigned long long int>) (val<short>)-23254)), (((/* implicit */val<unsigned long long int>) max((((/* implicit */val<unsigned short>) var_17)), ((val<unsigned short>)53376))))))));
    *var_21 = ((/* implicit */val<unsigned short>) min((((/* implicit */val<unsigned long long int>) ((((/* implicit */val<bool>) max((((/* implicit */val<unsigned long long int>) var_8)), (var_18)))) ? (((/* implicit */val<long long int>) ((/* implicit */val<int>) max(((val<short>)-23254), (((/* implicit */val<short>) var_15)))))) : (((val<long long int>) 0U))))), (((((/* implicit */val<bool>) ((val<int>) (val<unsigned short>)53373))) ? (max((((/* implicit */val<unsigned long long int>) (val<unsigned short>)12179)), (var_18))) : (((/* implicit */val<unsigned long long int>) ((val<unsigned int>) 626226166U)))))));
    *var_22 = ((/* implicit */val<signed char>) ((((/* implicit */val<bool>) min((min((((/* implicit */val<unsigned long long int>) var_17)), (16783803648178046543ULL))), (((/* implicit */val<unsigned long long int>) ((((/* implicit */val<bool>) (val<unsigned char>)3)) ? ((-2147483647 - 1)) : (((/* implicit */val<int>) var_1)))))))) ? (var_0) : (max((((/* implicit */val<int>) min(((val<short>)-23254), (((/* implicit */val<short>) (val<unsigned char>)6))))), (((((/* implicit */val<bool>) var_15)) ? (((/* implicit */val<int>) (val<unsigned short>)12157)) : (((/* implicit */val<int>) (val<unsigned short>)53356))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 521024396;
bool var_1 = (bool)1;
bool var_2 = (bool)0;
unsigned char var_3 = (unsigned char)255;
unsigned short var_5 = (unsigned short)36424;
signed char var_6 = (signed char)13;
unsigned int var_8 = 2030714343U;
unsigned long long int var_12 = 16751256310166934678ULL;
short var_14 = (short)-9812;
signed char var_15 = (signed char)22;
signed char var_17 = (signed char)81;
unsigned long long int var_18 = 4248450884802590667ULL;
int zero = 0;
bool var_19 = (bool)1;
long long int var_20 = -4334064393691681952LL;
unsigned short var_21 = (unsigned short)23862;
signed char var_22 = (signed char)-10;
void init() {
}

void checksum() {
    value_mismatch |= var_19 != (bool)1;
    value_mismatch |= var_20 != 1LL;
    value_mismatch |= var_21 != (unsigned short)22;
    value_mismatch |= var_22 != (signed char)-116;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_2, var_3, var_5, var_6, var_8, var_12, var_14, var_15, var_17, var_18, zero, &var_19, &var_20, &var_21, &var_22);
  checksum();
  assert(!value_mismatch);
}
