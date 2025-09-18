/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 5913
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=5913
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
void test(val<short> var_0, val<int> var_2, val<unsigned int> var_6, val<short> var_7, val<bool> var_11, val<unsigned short> var_17, val<int> zero, val<bool*> var_18, val<unsigned char*> var_19, val<unsigned int*> var_20, val<int*> var_21) {
    if (((((/* implicit */val<int>) (val<short>)11)) == (((/* implicit */val<int>) ((val<short>) min((var_17), (((/* implicit */val<unsigned short>) (val<signed char>)-126))))))))
    {
        *var_18 = ((/* implicit */val<bool>) ((val<signed char>) var_11));
        *var_19 = ((/* implicit */val<unsigned char>) (val<signed char>)78);
        *var_20 = ((/* implicit */val<unsigned int>) ((((/* implicit */val<bool>) max((((((/* implicit */val<bool>) var_6)) ? (0) : (((/* implicit */val<int>) var_7)))), (((((/* implicit */val<int>) var_0)) + (var_2)))))) && (((/* implicit */val<bool>) var_2))));
    }

    *var_21 = ((((/* implicit */val<int>) (val<signed char>)66)) << (((((/* implicit */val<int>) var_17)) - (14767))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)13183;
int var_2 = -739908028;
unsigned int var_6 = 2607261030U;
short var_7 = (short)-24556;
bool var_11 = (bool)0;
unsigned short var_17 = (unsigned short)14783;
int zero = 0;
bool var_18 = (bool)0;
unsigned char var_19 = (unsigned char)245;
unsigned int var_20 = 3205211914U;
int var_21 = 87016229;
void init() {
}

void checksum() {
    value_mismatch |= var_18 != (bool)0;
    value_mismatch |= var_19 != (unsigned char)245;
    value_mismatch |= var_20 != 3205211914U;
    value_mismatch |= var_21 != 4325376;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_2, var_6, var_7, var_11, var_17, zero, &var_18, &var_19, &var_20, &var_21);
  checksum();
}
