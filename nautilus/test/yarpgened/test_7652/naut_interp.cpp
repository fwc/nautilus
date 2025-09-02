/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 7652
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=7652
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
void test(val<signed char> var_1, val<int> var_2, val<short> var_4, val<int> var_7, val<unsigned long long int> var_9, val<unsigned long long int> var_11, val<unsigned long long int> var_12, val<int> zero, val<unsigned int*> var_14, val<unsigned long long int*> var_15, val<unsigned long long int*> var_16, val<long long int*> var_17) {
    *var_14 = ((/* implicit */val<unsigned int>) min((((((/* implicit */val<bool>) 63ULL)) ? (((/* implicit */val<int>) (!(((/* implicit */val<bool>) (val<unsigned char>)44))))) : (((((/* implicit */val<bool>) (val<unsigned short>)12156)) ? (((/* implicit */val<int>) var_4)) : (((/* implicit */val<int>) var_4)))))), (((val<int>) 1292189588U))));
    *var_15 = ((val<unsigned long long int>) ((val<signed char>) (~(var_2))));
    *var_16 = ((/* implicit */val<unsigned long long int>) ((((/* implicit */val<bool>) var_1)) ? (((/* implicit */val<int>) var_4)) : (((/* implicit */val<int>) ((((/* implicit */val<bool>) min((((/* implicit */val<long long int>) var_7)), (-713256843741106866LL)))) || (((/* implicit */val<bool>) ((((/* implicit */val<bool>) (val<short>)8191)) ? (var_12) : (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) (val<short>)8191)))))))))));
    *var_17 = ((/* implicit */val<long long int>) ((((/* implicit */val<unsigned long long int>) ((((/* implicit */val<bool>) var_11)) ? (((val<int>) (val<short>)-8192)) : ((+(((/* implicit */val<int>) (val<short>)-27902))))))) != (var_9)));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-115;
int var_2 = 1388102228;
short var_4 = (short)-21358;
int var_7 = -1279652815;
unsigned long long int var_9 = 10136983406151737730ULL;
unsigned long long int var_11 = 9575926714316969955ULL;
unsigned long long int var_12 = 14912556914741462612ULL;
int zero = 0;
unsigned int var_14 = 2716574723U;
unsigned long long int var_15 = 10423461176289966054ULL;
unsigned long long int var_16 = 12432625564799464810ULL;
long long int var_17 = 3084901311145924699LL;
void init() {
}

void checksum() {
    value_mismatch |= var_14 != 0U;
    value_mismatch |= var_15 != 18446744073709551531ULL;
    value_mismatch |= var_16 != 18446744073709530258ULL;
    value_mismatch |= var_17 != 1LL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_2, var_4, var_7, var_9, var_11, var_12, zero, &var_14, &var_15, &var_16, &var_17);
  checksum();
  assert(!value_mismatch);
}
