/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 3638
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=3638
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
void test(val<signed char> var_2, val<signed char> var_5, val<unsigned char> var_7, val<unsigned int> var_8, val<bool> var_9, val<bool> var_11, val<int> zero, val<unsigned long long int*> var_12, val<signed char*> var_13, val<signed char*> var_14, val<bool*> var_15, val<long long int*> var_16, val<bool*> var_17) {
    *var_12 = ((/* implicit */val<unsigned long long int>) ((((/* implicit */val<int>) (val<bool>)0)) % (-1)));
    if (((/* implicit */val<bool>) var_2))
    {
        *var_13 = ((/* implicit */val<signed char>) ((((/* implicit */val<int>) (val<bool>)0)) | (((val<int>) var_8))));
        *var_14 = ((/* implicit */val<signed char>) min((min((((/* implicit */val<unsigned int>) max(((val<bool>)1), ((val<bool>)1)))), (2426872594U))), (((/* implicit */val<unsigned int>) ((((/* implicit */val<bool>) var_7)) ? (((((/* implicit */val<int>) (val<bool>)1)) | (((/* implicit */val<int>) (val<signed char>)-104)))) : ((-(((/* implicit */val<int>) var_7)))))))));
        *var_15 |= ((/* implicit */val<bool>) 3335941740U);
    }

    *var_16 *= ((/* implicit */val<long long int>) max((((/* implicit */val<signed char>) var_9)), (var_5)));
    *var_17 = ((/* implicit */val<bool>) (~(((/* implicit */val<int>) var_11))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)24;
signed char var_5 = (signed char)-60;
unsigned char var_7 = (unsigned char)121;
unsigned int var_8 = 2770456402U;
bool var_9 = (bool)0;
bool var_11 = (bool)1;
int zero = 0;
unsigned long long int var_12 = 12370552070180367407ULL;
signed char var_13 = (signed char)-78;
signed char var_14 = (signed char)-96;
bool var_15 = (bool)1;
long long int var_16 = -7987167075483542953LL;
bool var_17 = (bool)0;
void init() {
}

void checksum() {
    value_mismatch |= var_12 != 0ULL;
    value_mismatch |= var_13 != (signed char)82;
    value_mismatch |= var_14 != (signed char)1;
    value_mismatch |= var_15 != (bool)1;
    value_mismatch |= var_16 != 0LL;
    value_mismatch |= var_17 != (bool)1;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_2, var_5, var_7, var_8, var_9, var_11, zero, &var_12, &var_13, &var_14, &var_15, &var_16, &var_17);
  checksum();
  assert(!value_mismatch);
}
