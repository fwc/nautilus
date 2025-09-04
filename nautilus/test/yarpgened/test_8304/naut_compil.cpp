/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 8304
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=8304
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
void test(val<long long int> var_2, val<unsigned int> var_8, val<long long int> var_10, val<unsigned char> var_11, val<int> var_14, val<int> zero, val<short*> var_17, val<long long int*> var_18, val<unsigned int*> var_19, val<signed char*> var_20, val<signed char*> var_21) {
    *var_17 -= ((/* implicit */val<short>) var_11);
    *var_18 = var_10;
    *var_19 += ((/* implicit */val<unsigned int>) var_2);
    *var_20 += ((/* implicit */val<signed char>) var_14);
    *var_21 -= ((/* implicit */val<signed char>) var_8);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -6312527694405544908LL;
unsigned int var_8 = 2304010567U;
long long int var_10 = 6271342120418327528LL;
unsigned char var_11 = (unsigned char)91;
int var_14 = 592925163;
int zero = 0;
short var_17 = (short)8831;
long long int var_18 = 8391376950966594358LL;
unsigned int var_19 = 4095366079U;
signed char var_20 = (signed char)-83;
signed char var_21 = (signed char)(-127 - 1);
void init() {
}

void checksum() {
    value_mismatch |= var_17 != (short)8740;
    value_mismatch |= var_18 != 6271342120418327528LL;
    value_mismatch |= var_19 != 3359549427U;
    value_mismatch |= var_20 != (signed char)-104;
    value_mismatch |= var_21 != (signed char)57;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_2, var_8, var_10, var_11, var_14, zero, &var_17, &var_18, &var_19, &var_20, &var_21);
  checksum();
  assert(!value_mismatch);
}
