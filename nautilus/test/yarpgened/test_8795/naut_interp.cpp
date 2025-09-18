/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 8795
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=8795
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
void test(val<unsigned char> var_2, val<unsigned short> var_3, val<signed char> var_5, val<signed char> var_12, val<int> zero, val<unsigned short*> var_14, val<unsigned short*> var_15, val<unsigned char*> var_16, val<short*> var_17, val<unsigned short*> var_18) {
    *var_14 = ((/* implicit */val<unsigned short>) max((*var_14), (((/* implicit */val<unsigned short>) (~(((((/* implicit */val<unsigned int>) ((/* implicit */val<int>) (val<short>)18297))) & (4294967292U))))))));
    if (((/* implicit */val<bool>) ((((/* implicit */val<bool>) (val<unsigned short>)23570)) ? (((/* implicit */val<int>) var_3)) : (((/* implicit */val<int>) min((((/* implicit */val<unsigned short>) var_2)), (var_3)))))))
    {
        *var_15 = ((/* implicit */val<unsigned short>) (val<short>)-18298);
        *var_16 = ((/* implicit */val<unsigned char>) ((((/* implicit */val<bool>) -464330721)) ? (((((/* implicit */val<int>) (val<short>)14823)) - (((/* implicit */val<int>) (val<bool>)1)))) : (((/* implicit */val<int>) var_12))));
        if (((/* implicit */val<bool>) var_3))
        {
            *var_17 = ((/* implicit */val<short>) var_2);
            *var_18 = ((/* implicit */val<unsigned short>) var_5);
        }

    }

}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)38;
unsigned short var_3 = (unsigned short)58264;
signed char var_5 = (signed char)122;
signed char var_12 = (signed char)-125;
int zero = 0;
unsigned short var_14 = (unsigned short)1050;
unsigned short var_15 = (unsigned short)56532;
unsigned char var_16 = (unsigned char)39;
short var_17 = (short)-5878;
unsigned short var_18 = (unsigned short)5450;
void init() {
}

void checksum() {
    value_mismatch |= var_14 != (unsigned short)47239;
    value_mismatch |= var_15 != (unsigned short)47238;
    value_mismatch |= var_16 != (unsigned char)230;
    value_mismatch |= var_17 != (short)38;
    value_mismatch |= var_18 != (unsigned short)122;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_2, var_3, var_5, var_12, zero, &var_14, &var_15, &var_16, &var_17, &var_18);
  checksum();
}
