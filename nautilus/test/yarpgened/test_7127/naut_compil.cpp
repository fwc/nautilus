/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 7127
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=7127
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
void test(val<signed char> var_3, val<long long int> var_5, val<unsigned short> var_7, val<int> var_8, val<unsigned char> var_9, val<int> var_11, val<signed char> var_16, val<short> var_17, val<unsigned short> var_19, val<int> zero, val<long long int*> var_20, val<int*> var_21, val<unsigned short*> var_22, val<signed char*> var_23) {
    *var_20 = ((/* implicit */val<long long int>) ((var_8) != (((/* implicit */val<int>) ((((/* implicit */val<unsigned int>) ((/* implicit */val<int>) max((((/* implicit */val<short>) var_16)), (var_17))))) != (max((((/* implicit */val<unsigned int>) var_19)), (48932510U))))))));
    *var_21 = ((/* implicit */val<int>) ((((((((/* implicit */val<int>) var_7)) >= (((/* implicit */val<int>) var_3)))) ? (((/* implicit */val<int>) (!(((/* implicit */val<bool>) var_9))))) : ((+(((/* implicit */val<int>) var_19)))))) != ((~(((/* implicit */val<int>) ((((/* implicit */val<unsigned int>) ((/* implicit */val<int>) (val<signed char>)114))) <= (4294967285U))))))));
    *var_22 *= ((/* implicit */val<unsigned short>) max((((/* implicit */val<int>) min((((-1361185175) == (((/* implicit */val<int>) var_17)))), (((((/* implicit */val<bool>) 1361185175)) && (((/* implicit */val<bool>) 1361185177))))))), (min((-1361185199), (var_11)))));
    *var_23 = ((/* implicit */val<signed char>) max((((((((/* implicit */val<bool>) var_16)) ? (((/* implicit */val<int>) (val<unsigned short>)53177)) : (((/* implicit */val<int>) var_3)))) - ((+(((/* implicit */val<int>) var_7)))))), (((((/* implicit */val<bool>) max((var_5), (((/* implicit */val<long long int>) var_17))))) ? (((((/* implicit */val<bool>) var_3)) ? (var_11) : (((/* implicit */val<int>) var_19)))) : (((((/* implicit */val<int>) var_9)) / (-134217728)))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)24;
long long int var_5 = 103480782333768359LL;
unsigned short var_7 = (unsigned short)28641;
int var_8 = 410287121;
unsigned char var_9 = (unsigned char)254;
int var_11 = -1957267266;
signed char var_16 = (signed char)-35;
short var_17 = (short)20565;
unsigned short var_19 = (unsigned short)53324;
int zero = 0;
long long int var_20 = -4909417416542901184LL;
int var_21 = -538772387;
unsigned short var_22 = (unsigned short)49108;
signed char var_23 = (signed char)-105;
void init() {
}

void checksum() {
    value_mismatch |= var_20 != 1LL;
    value_mismatch |= var_21 != 1;
    value_mismatch |= var_22 != (unsigned short)0;
    value_mismatch |= var_23 != (signed char)-40;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_3, var_5, var_7, var_8, var_9, var_11, var_16, var_17, var_19, zero, &var_20, &var_21, &var_22, &var_23);
  checksum();
  assert(!value_mismatch);
}
