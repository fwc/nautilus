/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 9362
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=9362
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
void test(val<signed char> var_0, val<bool> var_1, val<unsigned long long int> var_2, val<signed char> var_6, val<signed char> var_7, val<unsigned char> var_11, val<short> var_15, val<signed char> var_16, val<signed char> var_17, val<int> zero, val<signed char*> var_18, val<signed char*> var_19, val<long long int*> var_20, val<unsigned long long int*> var_21, val<short*> var_22, val<unsigned int*> var_23) {
    *var_18 &= var_7;
    *var_19 &= ((/* implicit */val<signed char>) max((((/* implicit */val<unsigned char>) var_17)), (var_11)));
    if ((!(((/* implicit */val<bool>) max(((val<signed char>)-112), (var_16))))))
    {
        *var_20 = ((/* implicit */val<long long int>) var_1);
        *var_21 = ((/* implicit */val<unsigned long long int>) max((var_0), (((/* implicit */val<signed char>) (val<bool>)1))));
        *var_22 = ((/* implicit */val<short>) ((((/* implicit */val<bool>) max((((/* implicit */val<long long int>) var_15)), (((((/* implicit */val<bool>) 2144566024U)) ? (9223372036854775790LL) : (-1LL)))))) ? (((/* implicit */val<unsigned long long int>) ((max((((/* implicit */val<long long int>) (val<unsigned char>)0)), (9223372036854775781LL))) | (((/* implicit */val<long long int>) ((/* implicit */val<int>) var_6)))))) : (var_2)));
    }

    *var_23 = ((/* implicit */val<unsigned int>) var_2);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-5;
bool var_1 = (bool)0;
unsigned long long int var_2 = 1376086701968649820ULL;
signed char var_6 = (signed char)102;
signed char var_7 = (signed char)-62;
unsigned char var_11 = (unsigned char)157;
short var_15 = (short)15219;
signed char var_16 = (signed char)-13;
signed char var_17 = (signed char)29;
int zero = 0;
signed char var_18 = (signed char)-38;
signed char var_19 = (signed char)-18;
long long int var_20 = -5994336065913873947LL;
unsigned long long int var_21 = 15924976888378707124ULL;
short var_22 = (short)18306;
unsigned int var_23 = 2330327470U;
void init() {
}

void checksum() {
    value_mismatch |= var_18 != (signed char)-62;
    value_mismatch |= var_19 != (signed char)-116;
    value_mismatch |= var_20 != -5994336065913873947LL;
    value_mismatch |= var_21 != 15924976888378707124ULL;
    value_mismatch |= var_22 != (short)18306;
    value_mismatch |= var_23 != 2331700828U;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_2, var_6, var_7, var_11, var_15, var_16, var_17, zero, &var_18, &var_19, &var_20, &var_21, &var_22, &var_23);
  checksum();
  assert(!value_mismatch);
}
