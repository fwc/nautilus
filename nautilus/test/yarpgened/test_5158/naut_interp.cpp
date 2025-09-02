/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 5158
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=5158
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
void test(val<signed char> var_0, val<int> var_1, val<unsigned int> var_3, val<unsigned char> var_5, val<unsigned char> var_9, val<unsigned short> var_10, val<short> var_11, val<unsigned int> var_12, val<int> zero, val<bool*> var_14, val<long long int*> var_15, val<signed char*> var_16, val<signed char*> var_17, val<signed char*> var_18, val<long long int*> var_19) {
    *var_14 = ((/* implicit */val<bool>) ((val<short>) min((((/* implicit */val<unsigned int>) (val<unsigned char>)255)), (((((/* implicit */val<bool>) var_12)) ? (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_9))) : (var_3))))));
    *var_15 = ((/* implicit */val<long long int>) var_5);
    if (((/* implicit */val<bool>) min((((((/* implicit */val<bool>) max((var_11), (((/* implicit */val<short>) (val<signed char>)(-127 - 1)))))) ? (((/* implicit */val<unsigned int>) var_1)) : (var_12))), (((/* implicit */val<unsigned int>) ((val<signed char>) var_12))))))
    {
        *var_16 &= ((/* implicit */val<signed char>) var_10);
        *var_17 = ((/* implicit */val<signed char>) min((*var_17), (((/* implicit */val<signed char>) (~(((/* implicit */val<int>) var_10)))))));
        *var_18 = var_0;
    }

    *var_19 = ((/* implicit */val<long long int>) 11045997058089946003ULL);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)23;
int var_1 = -222741022;
unsigned int var_3 = 1636856216U;
unsigned char var_5 = (unsigned char)132;
unsigned char var_9 = (unsigned char)160;
unsigned short var_10 = (unsigned short)11276;
short var_11 = (short)18001;
unsigned int var_12 = 3834441627U;
int zero = 0;
bool var_14 = (bool)0;
long long int var_15 = 3561277680790487650LL;
signed char var_16 = (signed char)-2;
signed char var_17 = (signed char)28;
signed char var_18 = (signed char)123;
long long int var_19 = 8877227942492534821LL;
void init() {
}

void checksum() {
    value_mismatch |= var_14 != (bool)1;
    value_mismatch |= var_15 != 132LL;
    value_mismatch |= var_16 != (signed char)12;
    value_mismatch |= var_17 != (signed char)-13;
    value_mismatch |= var_18 != (signed char)23;
    value_mismatch |= var_19 != -7400747015619605613LL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_3, var_5, var_9, var_10, var_11, var_12, zero, &var_14, &var_15, &var_16, &var_17, &var_18, &var_19);
  checksum();
  assert(!value_mismatch);
}
