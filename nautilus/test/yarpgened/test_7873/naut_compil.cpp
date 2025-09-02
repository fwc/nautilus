/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 7873
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=7873
*/

#include <nautilus/core.hpp>
#include <nautilus/Engine.hpp>
#include <cassert>
#ifndef USE_COMPILATION
#define USE_COMPILATION true
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
void test(val<signed char> var_1, val<int> var_2, val<bool> var_3, val<unsigned char> var_4, val<long long int> var_6, val<unsigned short> var_7, val<long long int> var_8, val<signed char> var_9, val<long long int> var_10, val<unsigned char> var_11, val<long long int> var_13, val<int> zero, val<short*> var_15, val<unsigned long long int*> var_16, val<int*> var_17, val<unsigned short*> var_18, val<unsigned short*> var_19) {
    *var_15 = ((/* implicit */val<short>) max((((/* implicit */val<long long int>) ((((/* implicit */val<int>) var_9)) == (((/* implicit */val<int>) ((((/* implicit */val<bool>) (val<signed char>)4)) && (var_3))))))), (((((/* implicit */val<long long int>) ((1630448297U) - (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) (val<unsigned short>)58984)))))) + (var_10)))));
    *var_16 = ((/* implicit */val<unsigned long long int>) ((((/* implicit */val<bool>) (val<unsigned short>)0)) ? (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) (val<signed char>)4))) : (2664519023U)));
    *var_17 = ((/* implicit */val<int>) (+(((1630448273U) << (((((/* implicit */val<int>) (val<unsigned char>)255)) - (254)))))));
    *var_18 = ((/* implicit */val<unsigned short>) ((((/* implicit */val<bool>) ((((/* implicit */val<bool>) ((((/* implicit */val<bool>) var_6)) ? ((-9223372036854775807LL - 1LL)) : (-4843839490202911314LL)))) ? (max((((/* implicit */val<long long int>) 2664519023U)), (var_13))) : (min((((/* implicit */val<long long int>) var_4)), (var_10)))))) ? (((((/* implicit */val<bool>) var_7)) ? (((((/* implicit */val<bool>) var_1)) ? (((/* implicit */val<long long int>) 1630448272U)) : (0LL))) : (((((/* implicit */val<bool>) 2495960453U)) ? (var_8) : (((/* implicit */val<long long int>) ((/* implicit */val<int>) var_11))))))) : (((((/* implicit */val<bool>) max((2664519025U), (476518191U)))) ? (((/* implicit */val<long long int>) 2664518998U)) : (var_10)))));
    *var_19 |= ((/* implicit */val<unsigned short>) min((((/* implicit */val<long long int>) ((((/* implicit */val<bool>) ((((/* implicit */val<int>) (val<unsigned short>)49734)) << (((((/* implicit */val<int>) (val<signed char>)115)) - (107)))))) ? (((val<unsigned int>) var_4)) : (((((/* implicit */val<bool>) var_8)) ? (1932275095U) : (((/* implicit */val<unsigned int>) var_2))))))), (min((((((/* implicit */val<bool>) var_11)) ? (var_8) : (var_13))), (((((/* implicit */val<bool>) 2664519018U)) ? (var_10) : (((/* implicit */val<long long int>) 1932275095U))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-90;
int var_2 = -151377461;
bool var_3 = (bool)0;
unsigned char var_4 = (unsigned char)142;
long long int var_6 = 7299225139420896097LL;
unsigned short var_7 = (unsigned short)34110;
long long int var_8 = 8789491763326554344LL;
signed char var_9 = (signed char)4;
long long int var_10 = -5396436757259158968LL;
unsigned char var_11 = (unsigned char)169;
long long int var_13 = -3606376487860158012LL;
int zero = 0;
short var_15 = (short)7706;
unsigned long long int var_16 = 10441390709745193327ULL;
int var_17 = 140134302;
unsigned short var_18 = (unsigned short)35034;
unsigned short var_19 = (unsigned short)49204;
void init() {
}

void checksum() {
    value_mismatch |= var_15 != (short)0;
    value_mismatch |= var_16 != 2664519023ULL;
    value_mismatch |= var_17 != -1034070750;
    value_mismatch |= var_18 != (unsigned short)43664;
    value_mismatch |= var_19 != (unsigned short)64124;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_2, var_3, var_4, var_6, var_7, var_8, var_9, var_10, var_11, var_13, zero, &var_15, &var_16, &var_17, &var_18, &var_19);
  checksum();
  assert(!value_mismatch);
}
