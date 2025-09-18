/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 5709
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=5709
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
void test(val<long long int> var_1, val<unsigned char> var_2, val<int> var_3, val<short> var_4, val<int> var_5, val<short> var_6, val<unsigned char> var_8, val<int> var_9, val<signed char> var_10, val<short> var_12, val<unsigned char> var_15, val<bool> var_16, val<long long int> var_17, val<unsigned int> var_18, val<int> zero, val<int*> var_20, val<signed char*> var_21, val<unsigned int*> var_22, val<unsigned short*> var_23, val<signed char*> var_24) {
    *var_20 = var_9;
    *var_21 = ((/* implicit */val<signed char>) min((((/* implicit */val<long long int>) var_4)), (var_17)));
    *var_22 = ((/* implicit */val<unsigned int>) ((((/* implicit */val<bool>) var_15)) ? (((/* implicit */val<unsigned long long int>) max((((/* implicit */val<int>) ((val<unsigned short>) var_1))), ((+(((/* implicit */val<int>) var_10))))))) : (((((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) (val<bool>)1))) * (((70231305224192ULL) - (((/* implicit */val<unsigned long long int>) -1914931889423313710LL))))))));
    *var_23 += ((/* implicit */val<unsigned short>) ((var_16) ? (((((/* implicit */val<bool>) 1914931889423313699LL)) ? (((/* implicit */val<long long int>) ((/* implicit */val<int>) (val<short>)(-32767 - 1)))) : (-1914931889423313673LL))) : (((((((/* implicit */val<int>) var_12)) <= (var_5))) ? ((+(var_1))) : (((((/* implicit */val<bool>) var_1)) ? (((/* implicit */val<long long int>) ((/* implicit */val<int>) var_6))) : (var_17)))))));
    *var_24 = ((/* implicit */val<signed char>) ((((/* implicit */val<bool>) var_8)) ? (((/* implicit */val<long long int>) ((((/* implicit */val<bool>) ((((/* implicit */val<bool>) var_15)) ? (((/* implicit */val<long long int>) ((/* implicit */val<int>) var_4))) : (var_17)))) ? (((/* implicit */val<unsigned int>) ((((var_3) + (2147483647))) >> (((/* implicit */val<int>) var_16))))) : (((((/* implicit */val<bool>) var_6)) ? (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_2))) : (var_18)))))) : (-280039803316789975LL)));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -8059611128636391277LL;
unsigned char var_2 = (unsigned char)212;
int var_3 = -1915066903;
short var_4 = (short)-21875;
int var_5 = 1874927969;
short var_6 = (short)4874;
unsigned char var_8 = (unsigned char)95;
int var_9 = 1249536522;
signed char var_10 = (signed char)26;
short var_12 = (short)14604;
unsigned char var_15 = (unsigned char)127;
bool var_16 = (bool)0;
long long int var_17 = -7563950404644504961LL;
unsigned int var_18 = 2062822979U;
int zero = 0;
int var_20 = -2108613712;
signed char var_21 = (signed char)-43;
unsigned int var_22 = 792334457U;
unsigned short var_23 = (unsigned short)46412;
signed char var_24 = (signed char)-123;
void init() {
}

void checksum() {
    value_mismatch |= var_20 != 1249536522;
    value_mismatch |= var_21 != (signed char)127;
    value_mismatch |= var_22 != 49299U;
    value_mismatch |= var_23 != (unsigned short)30175;
    value_mismatch |= var_24 != (signed char)-24;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_2, var_3, var_4, var_5, var_6, var_8, var_9, var_10, var_12, var_15, var_16, var_17, var_18, zero, &var_20, &var_21, &var_22, &var_23, &var_24);
  checksum();
}
