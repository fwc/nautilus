/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 7540
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=7540
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
void test(val<unsigned short> var_0, val<short> var_1, val<unsigned char> var_3, val<unsigned char> var_4, val<short> var_7, val<signed char> var_8, val<int> var_9, val<unsigned short> var_10, val<int> var_11, val<short> var_12, val<int> zero, val<unsigned short*> var_14, val<int*> var_15, val<signed char*> var_16, val<long long int*> var_17, val<bool*> var_18) {
    *var_14 ^= ((/* implicit */val<unsigned short>) var_8);
    *var_15 = ((((/* implicit */val<bool>) max((var_4), (((/* implicit */val<unsigned char>) var_8))))) ? (((/* implicit */val<int>) var_0)) : (((((/* implicit */val<bool>) ((8992517573635938536LL) - (((/* implicit */val<long long int>) ((/* implicit */val<int>) var_4)))))) ? (((/* implicit */val<int>) var_1)) : (((/* implicit */val<int>) max((var_7), (((/* implicit */val<short>) var_3))))))));
    *var_16 = ((/* implicit */val<signed char>) var_10);
    if (((/* implicit */val<bool>) var_9))
    {
        *var_17 = ((/* implicit */val<long long int>) var_11);
        *var_18 = ((/* implicit */val<bool>) ((((/* implicit */val<int>) var_12)) - ((+(var_9)))));
    }

}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)63129;
short var_1 = (short)-15639;
unsigned char var_3 = (unsigned char)116;
unsigned char var_4 = (unsigned char)163;
short var_7 = (short)7819;
signed char var_8 = (signed char)2;
int var_9 = 1511119675;
unsigned short var_10 = (unsigned short)63324;
int var_11 = 1127742492;
short var_12 = (short)-6363;
int zero = 0;
unsigned short var_14 = (unsigned short)58161;
int var_15 = 1107212582;
signed char var_16 = (signed char)18;
long long int var_17 = -3479367636639923394LL;
bool var_18 = (bool)0;
void init() {
}

void checksum() {
    value_mismatch |= var_14 != (unsigned short)58163;
    value_mismatch |= var_15 != 63129;
    value_mismatch |= var_16 != (signed char)92;
    value_mismatch |= var_17 != 1127742492LL;
    value_mismatch |= var_18 != (bool)1;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_3, var_4, var_7, var_8, var_9, var_10, var_11, var_12, zero, &var_14, &var_15, &var_16, &var_17, &var_18);
  checksum();
  assert(!value_mismatch);
}
