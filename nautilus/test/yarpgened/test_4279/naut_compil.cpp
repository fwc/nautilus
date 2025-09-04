/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 4279
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=4279
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
void test(val<int> var_0, val<long long int> var_1, val<signed char> var_2, val<long long int> var_3, val<unsigned long long int> var_4, val<signed char> var_6, val<unsigned short> var_7, val<unsigned char> var_8, val<int> var_10, val<int> zero, val<bool*> var_11, val<long long int*> var_12, val<unsigned long long int*> var_13, val<short*> var_14) {
    *var_11 = ((/* implicit */val<bool>) var_3);
    *var_12 = ((/* implicit */val<long long int>) max((*var_12), (((((/* implicit */val<bool>) var_4)) ? (((((/* implicit */val<bool>) var_4)) ? (((/* implicit */val<long long int>) ((((/* implicit */val<bool>) var_0)) ? (var_10) : (((/* implicit */val<int>) var_6))))) : (((((/* implicit */val<bool>) var_2)) ? (var_1) : (((/* implicit */val<long long int>) ((/* implicit */val<int>) var_7))))))) : (min((((/* implicit */val<long long int>) (val<signed char>)34)), (9223372036854775807LL)))))));
    *var_13 = ((/* implicit */val<unsigned long long int>) ((((/* implicit */val<bool>) min((max((((/* implicit */val<long long int>) var_6)), (var_1))), (((/* implicit */val<long long int>) min((((/* implicit */val<unsigned char>) var_6)), (var_8))))))) ? (var_1) : (((/* implicit */val<long long int>) ((((/* implicit */val<bool>) min((((/* implicit */val<unsigned long long int>) var_10)), (var_4)))) ? (((((/* implicit */val<bool>) (val<unsigned char>)53)) ? (((/* implicit */val<int>) (val<signed char>)119)) : (((/* implicit */val<int>) (val<signed char>)119)))) : (min((var_0), (((/* implicit */val<int>) var_2)))))))));
    *var_14 = ((/* implicit */val<short>) min((min((((((/* implicit */val<bool>) var_0)) ? (var_3) : (((/* implicit */val<long long int>) var_10)))), (max((((/* implicit */val<long long int>) var_6)), (var_3))))), (min((min((((/* implicit */val<long long int>) var_8)), (var_1))), (((/* implicit */val<long long int>) (val<signed char>)119))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -569369648;
long long int var_1 = 4866337336824494074LL;
signed char var_2 = (signed char)-10;
long long int var_3 = 9059770087445677542LL;
unsigned long long int var_4 = 16662628465239068901ULL;
signed char var_6 = (signed char)-117;
unsigned short var_7 = (unsigned short)55382;
unsigned char var_8 = (unsigned char)149;
int var_10 = 1131820560;
int zero = 0;
bool var_11 = (bool)1;
long long int var_12 = -6544877916964170138LL;
unsigned long long int var_13 = 9150948450260104235ULL;
short var_14 = (short)16724;
void init() {
}

void checksum() {
    value_mismatch |= var_11 != (bool)1;
    value_mismatch |= var_12 != 1131820560LL;
    value_mismatch |= var_13 != 4866337336824494074ULL;
    value_mismatch |= var_14 != (short)119;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_2, var_3, var_4, var_6, var_7, var_8, var_10, zero, &var_11, &var_12, &var_13, &var_14);
  checksum();
  assert(!value_mismatch);
}
