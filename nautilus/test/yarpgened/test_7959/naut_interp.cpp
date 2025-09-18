/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 7959
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=7959
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
void test(val<unsigned long long int> var_0, val<bool> var_1, val<unsigned long long int> var_2, val<short> var_3, val<long long int> var_4, val<long long int> var_7, val<unsigned int> var_8, val<int> var_9, val<signed char> var_10, val<int> zero, val<signed char*> var_11, val<signed char*> var_12, val<signed char*> var_13, val<unsigned long long int*> var_14, val<unsigned char*> var_15) {
    *var_11 = ((/* implicit */val<signed char>) ((val<unsigned long long int>) var_2));
    *var_12 = ((/* implicit */val<signed char>) max((((/* implicit */val<long long int>) var_3)), (var_7)));
    *var_13 -= ((/* implicit */val<signed char>) (val<unsigned short>)57920);
    *var_14 = ((/* implicit */val<unsigned long long int>) var_8);
    *var_15 = ((/* implicit */val<unsigned char>) ((((/* implicit */val<bool>) ((((/* implicit */val<bool>) var_10)) ? (((/* implicit */val<int>) ((val<signed char>) var_9))) : (((/* implicit */val<int>) (val<short>)-145))))) ? (min((((/* implicit */val<unsigned long long int>) min((var_10), (((/* implicit */val<signed char>) var_1))))), (((val<unsigned long long int>) var_0)))) : (((/* implicit */val<unsigned long long int>) var_4))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 9400891713059294812ULL;
bool var_1 = (bool)1;
unsigned long long int var_2 = 9944919377704989807ULL;
short var_3 = (short)-3113;
long long int var_4 = -6876825534823324225LL;
long long int var_7 = -2992704073241990005LL;
unsigned int var_8 = 779467777U;
int var_9 = -321673171;
signed char var_10 = (signed char)-29;
int zero = 0;
signed char var_11 = (signed char)-28;
signed char var_12 = (signed char)-41;
signed char var_13 = (signed char)-33;
unsigned long long int var_14 = 2350438580343160535ULL;
unsigned char var_15 = (unsigned char)248;
void init() {
}

void checksum() {
    value_mismatch |= var_11 != (signed char)111;
    value_mismatch |= var_12 != (signed char)-41;
    value_mismatch |= var_13 != (signed char)-97;
    value_mismatch |= var_14 != 779467777ULL;
    value_mismatch |= var_15 != (unsigned char)92;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_2, var_3, var_4, var_7, var_8, var_9, var_10, zero, &var_11, &var_12, &var_13, &var_14, &var_15);
  checksum();
}
