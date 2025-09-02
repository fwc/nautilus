/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 1846
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=1846
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
void test(val<bool> var_0, val<unsigned int> var_2, val<short> var_3, val<short> var_4, val<unsigned int> var_6, val<bool> var_8, val<unsigned int> var_11, val<long long int> var_12, val<unsigned short> var_14, val<long long int> var_15, val<bool> var_18, val<int> zero, val<bool*> var_19, val<unsigned int*> var_20, val<unsigned char*> var_21, val<int*> var_22, val<signed char*> var_23, val<short*> var_24, val<unsigned char*> var_25) {
    if (((/* implicit */val<bool>) var_4))
    {
        *var_19 = ((/* implicit */val<bool>) max((((/* implicit */val<short>) (!(((/* implicit */val<bool>) ((((/* implicit */val<int>) (val<bool>)1)) | (((/* implicit */val<int>) (val<short>)0)))))))), (var_3)));
        *var_20 = ((/* implicit */val<unsigned int>) max((*var_20), (((/* implicit */val<unsigned int>) ((((/* implicit */val<bool>) var_2)) ? (((/* implicit */val<int>) var_14)) : (((/* implicit */val<int>) ((val<short>) (!(var_8))))))))));
    }

    if (((/* implicit */val<bool>) 2147483647))
    {
        *var_21 = ((/* implicit */val<unsigned char>) ((((/* implicit */val<bool>) ((var_8) ? (var_11) : (((((/* implicit */val<bool>) 485439872)) ? (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_14))) : (4294967295U)))))) ? (max((max((var_12), (((/* implicit */val<long long int>) var_0)))), (((/* implicit */val<long long int>) var_8)))) : (((/* implicit */val<long long int>) ((/* implicit */val<int>) var_14)))));
        *var_22 = ((/* implicit */val<int>) var_18);
        *var_23 = ((/* implicit */val<signed char>) (+(var_6)));
        *var_24 = ((/* implicit */val<short>) min((((/* implicit */val<long long int>) ((((/* implicit */val<bool>) ((val<unsigned int>) var_14))) ? (((((((/* implicit */val<int>) var_3)) + (2147483647))) >> (0))) : (((/* implicit */val<int>) max((((/* implicit */val<unsigned short>) (val<bool>)0)), ((val<unsigned short>)65535))))))), ((~((-(-82293302978976703LL)))))));
        *var_25 = ((/* implicit */val<unsigned char>) var_15);
    }

}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

bool var_0 = (bool)0;
unsigned int var_2 = 46321721U;
short var_3 = (short)-12665;
short var_4 = (short)-24373;
unsigned int var_6 = 3785545837U;
bool var_8 = (bool)0;
unsigned int var_11 = 3493774297U;
long long int var_12 = -2579300648607757824LL;
unsigned short var_14 = (unsigned short)50372;
long long int var_15 = -1310476519945587689LL;
bool var_18 = (bool)0;
int zero = 0;
bool var_19 = (bool)1;
unsigned int var_20 = 32982970U;
unsigned char var_21 = (unsigned char)210;
int var_22 = -2047658543;
signed char var_23 = (signed char)-111;
short var_24 = (short)24282;
unsigned char var_25 = (unsigned char)148;
void init() {
}

void checksum() {
    value_mismatch |= var_19 != (bool)0;
    value_mismatch |= var_20 != 32982970U;
    value_mismatch |= var_21 != (unsigned char)0;
    value_mismatch |= var_22 != 0;
    value_mismatch |= var_23 != (signed char)109;
    value_mismatch |= var_24 != (short)25664;
    value_mismatch |= var_25 != (unsigned char)23;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_2, var_3, var_4, var_6, var_8, var_11, var_12, var_14, var_15, var_18, zero, &var_19, &var_20, &var_21, &var_22, &var_23, &var_24, &var_25);
  checksum();
  assert(!value_mismatch);
}
