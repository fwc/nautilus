/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 883
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=883
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
void test(val<bool> var_0, val<unsigned char> var_1, val<signed char> var_3, val<long long int> var_4, val<unsigned short> var_5, val<signed char> var_6, val<signed char> var_8, val<unsigned char> var_9, val<int> zero, val<signed char*> var_10, val<unsigned long long int*> var_11) {
    *var_10 *= ((/* implicit */val<signed char>) (!(((/* implicit */val<bool>) ((((val<unsigned long long int>) var_6)) * (((/* implicit */val<unsigned long long int>) ((((/* implicit */val<int>) var_1)) / (((/* implicit */val<int>) var_5))))))))));
    *var_11 = ((/* implicit */val<unsigned long long int>) ((((((/* implicit */val<bool>) ((val<unsigned long long int>) (val<bool>)1))) ? (((/* implicit */val<int>) var_0)) : (((((/* implicit */val<bool>) var_9)) ? (((/* implicit */val<int>) var_6)) : (((/* implicit */val<int>) var_8)))))) == (max((((((/* implicit */val<bool>) (val<short>)(-32767 - 1))) ? (((/* implicit */val<int>) var_5)) : (((/* implicit */val<int>) var_5)))), (((/* implicit */val<int>) ((var_4) <= (((/* implicit */val<long long int>) ((/* implicit */val<int>) var_3))))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

bool var_0 = (bool)0;
unsigned char var_1 = (unsigned char)50;
signed char var_3 = (signed char)-21;
long long int var_4 = 2252168263870310337LL;
unsigned short var_5 = (unsigned short)46226;
signed char var_6 = (signed char)116;
signed char var_8 = (signed char)-62;
unsigned char var_9 = (unsigned char)147;
int zero = 0;
signed char var_10 = (signed char)83;
unsigned long long int var_11 = 3442618875038081669ULL;
void init() {
}

void checksum() {
    value_mismatch |= var_10 != (signed char)83;
    value_mismatch |= var_11 != 0ULL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_3, var_4, var_5, var_6, var_8, var_9, zero, &var_10, &var_11);
  checksum();
  assert(!value_mismatch);
}
