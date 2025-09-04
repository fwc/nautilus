/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 164
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=164
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
void test(val<unsigned char> var_1, val<long long int> var_2, val<signed char> var_3, val<unsigned long long int> var_4, val<unsigned long long int> var_6, val<unsigned long long int> var_7, val<signed char> var_9, val<unsigned int> var_11, val<short> var_16, val<signed char> var_18, val<int> zero, val<signed char*> var_19, val<int*> var_20, val<bool*> var_21, val<signed char*> var_22) {
    *var_19 ^= ((/* implicit */val<signed char>) min((((/* implicit */val<long long int>) var_18)), ((((((+(var_2))) + (9223372036854775807LL))) << (((((((/* implicit */val<int>) var_9)) + (((/* implicit */val<int>) var_1)))) - (286)))))));
    *var_20 = ((/* implicit */val<int>) var_16);
    *var_21 = ((/* implicit */val<bool>) ((((/* implicit */val<bool>) var_7)) ? (((/* implicit */val<int>) ((val<bool>) ((val<int>) var_18)))) : (((/* implicit */val<int>) ((var_2) == (((/* implicit */val<long long int>) ((/* implicit */val<int>) var_1))))))));
    *var_22 = ((/* implicit */val<signed char>) ((val<bool>) ((((/* implicit */val<bool>) min((((/* implicit */val<long long int>) var_3)), (var_2)))) ? (min((var_4), (var_7))) : (((((/* implicit */val<bool>) var_11)) ? (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_1))) : (var_6))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)184;
long long int var_2 = -8696047506809331085LL;
signed char var_3 = (signed char)-9;
unsigned long long int var_4 = 10169733304464753119ULL;
unsigned long long int var_6 = 10250715332146454644ULL;
unsigned long long int var_7 = 2617753132391936882ULL;
signed char var_9 = (signed char)102;
unsigned int var_11 = 3004787183U;
short var_16 = (short)11621;
signed char var_18 = (signed char)86;
int zero = 0;
signed char var_19 = (signed char)-68;
int var_20 = -204415712;
bool var_21 = (bool)0;
signed char var_22 = (signed char)40;
void init() {
}

void checksum() {
    value_mismatch |= var_19 != (signed char)-22;
    value_mismatch |= var_20 != 11621;
    value_mismatch |= var_21 != (bool)1;
    value_mismatch |= var_22 != (signed char)1;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_2, var_3, var_4, var_6, var_7, var_9, var_11, var_16, var_18, zero, &var_19, &var_20, &var_21, &var_22);
  checksum();
  assert(!value_mismatch);
}
