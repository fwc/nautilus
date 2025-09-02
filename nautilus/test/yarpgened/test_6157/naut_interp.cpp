/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 6157
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=6157
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
void test(val<unsigned char> var_1, val<unsigned long long int> var_3, val<unsigned char> var_5, val<long long int> var_7, val<unsigned int> var_9, val<long long int> var_10, val<unsigned char> var_13, val<int> zero, val<short*> var_14, val<unsigned long long int*> var_15, val<signed char*> var_16, val<unsigned short*> var_17) {
    *var_14 = ((/* implicit */val<short>) max((((((/* implicit */val<bool>) var_7)) ? (((((/* implicit */val<bool>) var_13)) ? (((/* implicit */val<unsigned long long int>) 268435455LL)) : (var_3))) : (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_5))))), (((/* implicit */val<unsigned long long int>) var_10))));
    *var_15 = ((/* implicit */val<unsigned long long int>) max((((((/* implicit */val<long long int>) ((/* implicit */val<int>) min((((/* implicit */val<unsigned short>) (val<unsigned char>)0)), ((val<unsigned short>)65535))))) + (9223372036854775807LL))), (min((((/* implicit */val<long long int>) (-(((/* implicit */val<int>) var_1))))), ((+(-268435456LL)))))));
    *var_16 = ((/* implicit */val<signed char>) min((((/* implicit */val<unsigned long long int>) (!(((/* implicit */val<bool>) var_1))))), ((~(var_3)))));
    *var_17 = ((/* implicit */val<unsigned short>) var_9);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)187;
unsigned long long int var_3 = 6336456739106164547ULL;
unsigned char var_5 = (unsigned char)233;
long long int var_7 = -6575581288045239994LL;
unsigned int var_9 = 1432496610U;
long long int var_10 = 74709908220808426LL;
unsigned char var_13 = (unsigned char)251;
int zero = 0;
short var_14 = (short)30869;
unsigned long long int var_15 = 12777785429068437284ULL;
signed char var_16 = (signed char)105;
unsigned short var_17 = (unsigned short)8964;
void init() {
}

void checksum() {
    value_mismatch |= var_14 != (short)3306;
    value_mismatch |= var_15 != 9223372036854775807ULL;
    value_mismatch |= var_16 != (signed char)0;
    value_mismatch |= var_17 != (unsigned short)10722;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_3, var_5, var_7, var_9, var_10, var_13, zero, &var_14, &var_15, &var_16, &var_17);
  checksum();
  assert(!value_mismatch);
}
