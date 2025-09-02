/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 1606
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=1606
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
void test(val<int> var_1, val<signed char> var_2, val<unsigned int> var_3, val<bool> var_4, val<long long int> var_5, val<signed char> var_6, val<bool> var_8, val<short> var_9, val<bool> var_10, val<int> zero, val<bool*> var_11, val<bool*> var_12) {
    *var_11 = ((/* implicit */val<bool>) min((((/* implicit */val<unsigned int>) ((((/* implicit */val<long long int>) ((((/* implicit */val<bool>) 9223372036854775807LL)) ? (((/* implicit */val<int>) var_6)) : (((/* implicit */val<int>) var_8))))) > (min((((/* implicit */val<long long int>) var_1)), (9223372036854775807LL)))))), (min(((-(var_3))), (((/* implicit */val<unsigned int>) var_9))))));
    *var_12 = ((/* implicit */val<bool>) ((((/* implicit */val<bool>) min((((/* implicit */val<long long int>) var_3)), (max(((-9223372036854775807LL - 1LL)), (((/* implicit */val<long long int>) var_10))))))) ? (((((/* implicit */val<bool>) max((((/* implicit */val<int>) var_4)), (var_1)))) ? (min((var_5), (((/* implicit */val<long long int>) var_4)))) : (min((9223372036854775807LL), ((-9223372036854775807LL - 1LL)))))) : (((/* implicit */val<long long int>) ((((/* implicit */val<bool>) ((((/* implicit */val<bool>) var_2)) ? (var_3) : (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) (val<unsigned char>)17)))))) ? ((+(((/* implicit */val<int>) var_9)))) : (((/* implicit */val<int>) var_9)))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1850408723;
signed char var_2 = (signed char)-25;
unsigned int var_3 = 1347874617U;
bool var_4 = (bool)1;
long long int var_5 = -687144200539758630LL;
signed char var_6 = (signed char)-5;
bool var_8 = (bool)0;
short var_9 = (short)10646;
bool var_10 = (bool)0;
int zero = 0;
bool var_11 = (bool)1;
bool var_12 = (bool)1;
void init() {
}

void checksum() {
    value_mismatch |= var_11 != (bool)1;
    value_mismatch |= var_12 != (bool)1;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_2, var_3, var_4, var_5, var_6, var_8, var_9, var_10, zero, &var_11, &var_12);
  checksum();
  assert(!value_mismatch);
}
