/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 3011
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=3011
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
void test(val<bool> var_0, val<int> var_3, val<bool> var_7, val<short> var_8, val<unsigned short> var_9, val<unsigned long long int> var_14, val<short> var_15, val<int> zero, val<unsigned char*> var_18, val<signed char*> var_19, val<unsigned short*> var_20, val<int*> var_21, val<short*> var_22) {
    *var_18 = ((/* implicit */val<unsigned char>) ((-8911865446646675818LL) & (((/* implicit */val<long long int>) ((/* implicit */val<int>) (val<short>)-27607)))));
    if (((/* implicit */val<bool>) max((((/* implicit */val<unsigned long long int>) var_15)), (((((/* implicit */val<bool>) ((((/* implicit */val<int>) (val<unsigned short>)57618)) >> (((((/* implicit */val<int>) (val<unsigned char>)248)) - (241)))))) ? (((((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) (val<short>)-27607))) & (18446744073709551614ULL))) : (((/* implicit */val<unsigned long long int>) ((var_3) | (((/* implicit */val<int>) (val<short>)-3))))))))))
    {
        *var_19 = ((/* implicit */val<signed char>) var_7);
        *var_20 = ((/* implicit */val<unsigned short>) ((((((/* implicit */val<bool>) var_9)) ? (((/* implicit */val<int>) var_8)) : (((/* implicit */val<int>) ((val<short>) (val<unsigned short>)49893))))) & (((/* implicit */val<int>) var_0))));
        *var_21 = ((/* implicit */val<int>) var_14);
        *var_22 = ((/* implicit */val<short>) min((*var_22), (var_8)));
    }

}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

bool var_0 = (bool)1;
int var_3 = 577655507;
bool var_7 = (bool)1;
short var_8 = (short)8370;
unsigned short var_9 = (unsigned short)14113;
unsigned long long int var_14 = 8382112764111513385ULL;
short var_15 = (short)-13369;
int zero = 0;
unsigned char var_18 = (unsigned char)99;
signed char var_19 = (signed char)-93;
unsigned short var_20 = (unsigned short)35233;
int var_21 = 1117584303;
short var_22 = (short)-11084;
void init() {
}

void checksum() {
    value_mismatch |= var_18 != (unsigned char)0;
    value_mismatch |= var_19 != (signed char)1;
    value_mismatch |= var_20 != (unsigned short)0;
    value_mismatch |= var_21 != 203581225;
    value_mismatch |= var_22 != (short)-11084;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_3, var_7, var_8, var_9, var_14, var_15, zero, &var_18, &var_19, &var_20, &var_21, &var_22);
  checksum();
}
