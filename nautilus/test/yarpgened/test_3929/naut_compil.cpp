/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 3929
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=3929
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
void test(val<long long int> var_1, val<int> var_3, val<signed char> var_4, val<unsigned char> var_5, val<signed char> var_6, val<signed char> var_8, val<signed char> var_10, val<int> zero, val<unsigned long long int*> var_11, val<long long int*> var_12, val<bool*> var_13, val<unsigned short*> var_14) {
    *var_11 = ((/* implicit */val<unsigned long long int>) min((((val<short>) (~(((/* implicit */val<int>) var_6))))), (((/* implicit */val<short>) var_10))));
    *var_12 ^= ((/* implicit */val<long long int>) (+(((((((((/* implicit */val<int>) var_6)) & (((/* implicit */val<int>) var_6)))) + (2147483647))) << ((((((+(((/* implicit */val<int>) var_8)))) + (146))) - (28)))))));
    *var_13 *= ((/* implicit */val<bool>) ((((/* implicit */val<bool>) var_6)) ? (((((/* implicit */val<bool>) ((((/* implicit */val<bool>) var_10)) ? (((/* implicit */val<int>) (val<unsigned char>)182)) : (((/* implicit */val<int>) (val<unsigned char>)187))))) ? (((/* implicit */val<int>) ((((/* implicit */val<long long int>) ((/* implicit */val<int>) var_6))) >= (var_1)))) : (var_3))) : (((/* implicit */val<int>) var_5))));
    *var_14 = ((/* implicit */val<unsigned short>) ((((/* implicit */val<unsigned int>) ((val<int>) ((((/* implicit */val<bool>) var_5)) ? (((/* implicit */val<int>) var_4)) : (((/* implicit */val<int>) (val<unsigned char>)187)))))) < (((((/* implicit */val<bool>) var_4)) ? (max((((/* implicit */val<unsigned int>) var_3)), (2395649481U))) : (((/* implicit */val<unsigned int>) ((val<int>) var_5)))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -6735649310213193365LL;
int var_3 = -1627613958;
signed char var_4 = (signed char)41;
unsigned char var_5 = (unsigned char)227;
signed char var_6 = (signed char)-11;
signed char var_8 = (signed char)-118;
signed char var_10 = (signed char)70;
int zero = 0;
unsigned long long int var_11 = 12700590116966756398ULL;
long long int var_12 = -200546785545516560LL;
bool var_13 = (bool)0;
unsigned short var_14 = (unsigned short)46396;
void init() {
}

void checksum() {
    value_mismatch |= var_11 != 10ULL;
    value_mismatch |= var_12 != -200546786307639804LL;
    value_mismatch |= var_13 != (bool)0;
    value_mismatch |= var_14 != (unsigned short)1;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_3, var_4, var_5, var_6, var_8, var_10, zero, &var_11, &var_12, &var_13, &var_14);
  checksum();
  assert(!value_mismatch);
}
