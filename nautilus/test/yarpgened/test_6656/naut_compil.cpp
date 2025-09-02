/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 6656
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=6656
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
void test(val<long long int> var_0, val<unsigned int> var_1, val<bool> var_2, val<bool> var_4, val<bool> var_5, val<short> var_6, val<bool> var_7, val<unsigned long long int> var_8, val<signed char> var_9, val<int> zero, val<short*> var_10, val<int*> var_11, val<short*> var_12, val<unsigned long long int*> var_13, val<unsigned long long int*> var_14) {
    *var_10 = ((/* implicit */val<short>) var_2);
    if (var_4)
    {
        *var_11 = ((/* implicit */val<int>) ((((/* implicit */val<bool>) var_8)) ? (((/* implicit */val<unsigned long long int>) var_0)) : ((~(((((/* implicit */val<bool>) 4441785520632882736LL)) ? (((/* implicit */val<unsigned long long int>) var_1)) : (var_8)))))));
        *var_12 = ((/* implicit */val<short>) var_9);
        *var_13 = ((/* implicit */val<unsigned long long int>) ((((/* implicit */val<bool>) (+(((/* implicit */val<int>) var_7))))) ? (var_0) : (((/* implicit */val<long long int>) ((val<unsigned int>) var_7)))));
    }

    *var_14 = ((/* implicit */val<unsigned long long int>) ((((/* implicit */val<bool>) ((((/* implicit */val<bool>) ((var_2) ? (var_8) : (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_9)))))) ? ((~(((/* implicit */val<int>) var_6)))) : ((~(((/* implicit */val<int>) var_2))))))) ? (((/* implicit */val<int>) var_7)) : ((((-(((/* implicit */val<int>) var_7)))) / (((/* implicit */val<int>) ((((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_5))) != (var_1))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -7921752635899226676LL;
unsigned int var_1 = 2466962007U;
bool var_2 = (bool)0;
bool var_4 = (bool)0;
bool var_5 = (bool)1;
short var_6 = (short)-1700;
bool var_7 = (bool)0;
unsigned long long int var_8 = 9187566535937097531ULL;
signed char var_9 = (signed char)-7;
int zero = 0;
short var_10 = (short)22365;
int var_11 = 99733575;
short var_12 = (short)-18534;
unsigned long long int var_13 = 4359576858770139342ULL;
unsigned long long int var_14 = 11275270409153404554ULL;
void init() {
}

void checksum() {
    value_mismatch |= var_10 != (short)0;
    value_mismatch |= var_11 != 99733575;
    value_mismatch |= var_12 != (short)-18534;
    value_mismatch |= var_13 != 4359576858770139342ULL;
    value_mismatch |= var_14 != 0ULL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_2, var_4, var_5, var_6, var_7, var_8, var_9, zero, &var_10, &var_11, &var_12, &var_13, &var_14);
  checksum();
  assert(!value_mismatch);
}
