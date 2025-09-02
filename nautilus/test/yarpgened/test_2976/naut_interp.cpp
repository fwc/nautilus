/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 2976
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=2976
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
void test(val<int> var_1, val<bool> var_4, val<bool> var_8, val<unsigned short> var_9, val<unsigned char> var_12, val<short> var_14, val<unsigned int> var_18, val<int> zero, val<bool*> var_20, val<unsigned int*> var_21, val<signed char*> var_22) {
    *var_20 = ((/* implicit */val<bool>) min(((val<unsigned short>)0), (((/* implicit */val<unsigned short>) (val<bool>)1))));
    if (((/* implicit */val<bool>) ((((/* implicit */val<bool>) ((((/* implicit */val<bool>) ((var_18) | (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) (val<signed char>)67)))))) ? (((/* implicit */val<int>) (val<bool>)1)) : (((((/* implicit */val<int>) var_4)) & (((/* implicit */val<int>) var_9))))))) ? (((/* implicit */val<unsigned int>) ((((/* implicit */val<bool>) ((((/* implicit */val<bool>) var_12)) ? (((/* implicit */val<int>) var_4)) : (var_1)))) ? (((/* implicit */val<int>) ((val<signed char>) var_12))) : ((((val<bool>)1) ? (((/* implicit */val<int>) (val<bool>)1)) : (((/* implicit */val<int>) (val<bool>)1))))))) : (var_18))))
    {
        *var_21 = ((/* implicit */val<unsigned int>) (+(((/* implicit */val<int>) ((val<signed char>) var_14)))));
        *var_22 = ((/* implicit */val<signed char>) max((((0U) - (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) ((var_8) && (((/* implicit */val<bool>) var_12)))))))), (((((/* implicit */val<bool>) (val<unsigned char>)181)) ? (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) (val<short>)-4439))) : (927355218U)))));
    }

}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1612349919;
bool var_4 = (bool)0;
bool var_8 = (bool)1;
unsigned short var_9 = (unsigned short)35363;
unsigned char var_12 = (unsigned char)124;
short var_14 = (short)-30427;
unsigned int var_18 = 1173838499U;
int zero = 0;
bool var_20 = (bool)0;
unsigned int var_21 = 3137479697U;
signed char var_22 = (signed char)100;
void init() {
}

void checksum() {
    value_mismatch |= var_20 != (bool)0;
    value_mismatch |= var_21 != 37U;
    value_mismatch |= var_22 != (signed char)-1;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_4, var_8, var_9, var_12, var_14, var_18, zero, &var_20, &var_21, &var_22);
  checksum();
  assert(!value_mismatch);
}
