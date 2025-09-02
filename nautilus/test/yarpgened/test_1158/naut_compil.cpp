/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 1158
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=1158
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
void test(val<short> var_0, val<unsigned char> var_1, val<signed char> var_3, val<unsigned char> var_4, val<signed char> var_5, val<int> var_6, val<short> var_7, val<bool> var_10, val<unsigned char> var_11, val<int> var_12, val<unsigned long long int> var_13, val<int> zero, val<unsigned int*> var_15, val<unsigned char*> var_16, val<unsigned char*> var_17, val<unsigned char*> var_18) {
    *var_15 = ((/* implicit */val<unsigned int>) ((((((/* implicit */val<int>) (!(((/* implicit */val<bool>) var_4))))) <= (((/* implicit */val<int>) var_1)))) || (var_10)));
    *var_16 |= ((/* implicit */val<unsigned char>) var_10);
    if (((((((/* implicit */val<bool>) var_1)) ? ((-(((/* implicit */val<int>) var_5)))) : (((/* implicit */val<int>) var_0)))) <= ((+(((/* implicit */val<int>) min((var_7), (((/* implicit */val<short>) var_11)))))))))
    {
        *var_17 = ((/* implicit */val<unsigned char>) var_12);
        *var_18 *= ((/* implicit */val<unsigned char>) (!(((/* implicit */val<bool>) ((((/* implicit */val<bool>) var_6)) ? (((((((/* implicit */val<int>) var_3)) + (2147483647))) >> (((((/* implicit */val<int>) var_7)) - (12549))))) : (((/* implicit */val<int>) ((((/* implicit */val<unsigned long long int>) var_6)) <= (var_13)))))))));
    }

}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)19442;
unsigned char var_1 = (unsigned char)168;
signed char var_3 = (signed char)-60;
unsigned char var_4 = (unsigned char)244;
signed char var_5 = (signed char)70;
int var_6 = 1378521453;
short var_7 = (short)12554;
bool var_10 = (bool)1;
unsigned char var_11 = (unsigned char)58;
int var_12 = -823691526;
unsigned long long int var_13 = 10093590308844996711ULL;
int zero = 0;
unsigned int var_15 = 2424586106U;
unsigned char var_16 = (unsigned char)69;
unsigned char var_17 = (unsigned char)215;
unsigned char var_18 = (unsigned char)19;
void init() {
}

void checksum() {
    value_mismatch |= var_15 != 1U;
    value_mismatch |= var_16 != (unsigned char)69;
    value_mismatch |= var_17 != (unsigned char)250;
    value_mismatch |= var_18 != (unsigned char)0;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_3, var_4, var_5, var_6, var_7, var_10, var_11, var_12, var_13, zero, &var_15, &var_16, &var_17, &var_18);
  checksum();
  assert(!value_mismatch);
}
