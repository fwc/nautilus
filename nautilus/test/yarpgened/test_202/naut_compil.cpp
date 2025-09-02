/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 202
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=202
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
void test(val<short> var_1, val<unsigned long long int> var_2, val<unsigned int> var_4, val<int> var_7, val<signed char> var_8, val<int> zero, val<unsigned char*> var_10, val<int*> var_11, val<unsigned int*> var_12, val<unsigned long long int*> var_13) {
    *var_10 = ((/* implicit */val<unsigned char>) min((min((((/* implicit */val<int>) (!(((/* implicit */val<bool>) var_2))))), (((((/* implicit */val<bool>) var_8)) ? (((/* implicit */val<int>) var_1)) : (((/* implicit */val<int>) (val<signed char>)-76)))))), (var_7)));
    *var_11 = ((/* implicit */val<int>) 0U);
    *var_12 = var_4;
    *var_13 = ((/* implicit */val<unsigned long long int>) var_7);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-15905;
unsigned long long int var_2 = 7041805398858045301ULL;
unsigned int var_4 = 2352652057U;
int var_7 = 2007599961;
signed char var_8 = (signed char)-22;
int zero = 0;
unsigned char var_10 = (unsigned char)57;
int var_11 = -1132308425;
unsigned int var_12 = 2542220009U;
unsigned long long int var_13 = 1599622742939952323ULL;
void init() {
}

void checksum() {
    value_mismatch |= var_10 != (unsigned char)223;
    value_mismatch |= var_11 != 0;
    value_mismatch |= var_12 != 2352652057U;
    value_mismatch |= var_13 != 2007599961ULL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_2, var_4, var_7, var_8, zero, &var_10, &var_11, &var_12, &var_13);
  checksum();
  assert(!value_mismatch);
}
