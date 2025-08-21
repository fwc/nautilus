/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 531
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --seed=531
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
void test(val<bool> var_0, val<unsigned char> var_2, val<bool> var_7, val<int> var_8, val<unsigned long long int> var_9, val<bool> var_11, val<unsigned long long int> var_12, val<signed char> var_13, val<int> zero, val<signed char*> var_14, val<int*> var_15, val<bool*> var_16, val<signed char*> var_17, val<unsigned char*> var_18, val<unsigned char*> var_19, val<unsigned int*> var_20) {
    if (((/* implicit */val<bool>) var_13))
    {
        *var_14 = ((/* implicit */val<signed char>) var_8);
        *var_15 = ((/* implicit */val<int>) (~(var_12)));
        *var_16 = ((/* implicit */val<bool>) var_9);
        *var_17 = ((/* implicit */val<signed char>) min((*var_17), (((/* implicit */val<signed char>) (val<unsigned short>)8))));
    }

    *var_18 *= ((/* implicit */val<unsigned char>) ((((/* implicit */val<int>) var_11)) != (((/* implicit */val<int>) var_2))));
    *var_19 *= ((/* implicit */val<unsigned char>) (((~(((0U) * (4294967294U))))) | (((/* implicit */val<unsigned int>) (+(((/* implicit */val<int>) var_0)))))));
    *var_20 = ((/* implicit */val<unsigned int>) (+(((/* implicit */val<int>) var_7))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

bool var_0 = (bool)0;
unsigned char var_2 = (unsigned char)59;
bool var_7 = (bool)1;
int var_8 = 570338167;
unsigned long long int var_9 = 5149111760040437957ULL;
bool var_11 = (bool)0;
unsigned long long int var_12 = 261768596207615034ULL;
signed char var_13 = (signed char)9;
int zero = 0;
signed char var_14 = (signed char)-4;
int var_15 = -2040012658;
bool var_16 = (bool)1;
signed char var_17 = (signed char)17;
unsigned char var_18 = (unsigned char)246;
unsigned char var_19 = (unsigned char)149;
unsigned int var_20 = 835594302U;
void init() {
}

void checksum() {
    value_mismatch |= var_14 != (signed char)119;
    value_mismatch |= var_15 != 1102136261;
    value_mismatch |= var_16 != (bool)1;
    value_mismatch |= var_17 != (signed char)8;
    value_mismatch |= var_18 != (unsigned char)246;
    value_mismatch |= var_19 != (unsigned char)107;
    value_mismatch |= var_20 != 1U;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_2, var_7, var_8, var_9, var_11, var_12, var_13, zero, &var_14, &var_15, &var_16, &var_17, &var_18, &var_19, &var_20);
  checksum();
  assert(!value_mismatch);
}
