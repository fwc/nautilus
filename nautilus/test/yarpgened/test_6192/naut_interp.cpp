/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 6192
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=6192
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
void test(val<unsigned short> var_0, val<unsigned int> var_3, val<unsigned int> var_4, val<short> var_6, val<signed char> var_7, val<signed char> var_9, val<unsigned int> var_10, val<int> zero, val<int*> var_11, val<unsigned short*> var_12, val<long long int*> var_13, val<bool*> var_14, val<unsigned short*> var_15, val<unsigned int*> var_16) {
    *var_11 = ((/* implicit */val<int>) ((((/* implicit */val<bool>) var_7)) ? (((/* implicit */val<unsigned int>) 2147483647)) : (((((/* implicit */val<bool>) var_4)) ? (((((/* implicit */val<bool>) (val<signed char>)-18)) ? (var_3) : (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_6))))) : (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) (val<signed char>)34)))))));
    *var_12 = var_0;
    *var_13 = ((/* implicit */val<long long int>) min(((-(((/* implicit */val<int>) var_7)))), (((/* implicit */val<int>) min((((val<unsigned char>) var_6)), (((/* implicit */val<unsigned char>) max((var_9), (((/* implicit */val<signed char>) (val<bool>)1))))))))));
    if (((/* implicit */val<bool>) (-2147483647 - 1)))
    {
        *var_14 = ((/* implicit */val<bool>) ((((/* implicit */val<bool>) min((((((/* implicit */val<int>) (val<short>)-1041)) % (4095))), (((/* implicit */val<int>) (!(((/* implicit */val<bool>) var_4)))))))) ? (((/* implicit */val<unsigned long long int>) var_10)) : (((val<unsigned long long int>) (-(((/* implicit */val<int>) var_0)))))));
        *var_15 -= ((/* implicit */val<unsigned short>) ((val<short>) ((val<unsigned short>) (-2147483647 - 1))));
    }

    *var_16 = max((var_3), (((/* implicit */val<unsigned int>) ((val<int>) ((4240064527631933622LL) / (-787753081840702340LL))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)62033;
unsigned int var_3 = 4285300272U;
unsigned int var_4 = 2953834009U;
short var_6 = (short)18882;
signed char var_7 = (signed char)-126;
signed char var_9 = (signed char)-1;
unsigned int var_10 = 1555307792U;
int zero = 0;
int var_11 = 1843970208;
unsigned short var_12 = (unsigned short)27650;
long long int var_13 = 161033928789824892LL;
bool var_14 = (bool)1;
unsigned short var_15 = (unsigned short)61012;
unsigned int var_16 = 1777177968U;
void init() {
}

void checksum() {
    value_mismatch |= var_11 != 2147483647;
    value_mismatch |= var_12 != (unsigned short)62033;
    value_mismatch |= var_13 != 1LL;
    value_mismatch |= var_14 != (bool)1;
    value_mismatch |= var_15 != (unsigned short)61012;
    value_mismatch |= var_16 != 4294967291U;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_3, var_4, var_6, var_7, var_9, var_10, zero, &var_11, &var_12, &var_13, &var_14, &var_15, &var_16);
  checksum();
}
