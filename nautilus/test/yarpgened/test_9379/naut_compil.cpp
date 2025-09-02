/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 9379
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=9379
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
void test(val<unsigned int> var_0, val<short> var_1, val<unsigned int> var_2, val<signed char> var_5, val<unsigned short> var_9, val<unsigned int> var_10, val<int> zero, val<short*> var_12, val<signed char*> var_13, val<short*> var_14, val<signed char*> var_15, val<signed char*> var_16, val<short*> var_17, val<short*> var_18, val<bool*> var_19) {
    *var_12 |= ((/* implicit */val<short>) ((val<signed char>) var_10));
    *var_13 = ((/* implicit */val<signed char>) ((((/* implicit */val<unsigned long long int>) ((((/* implicit */val<bool>) var_9)) ? (1179324495) : (((/* implicit */val<int>) var_5))))) / (((val<unsigned long long int>) var_10))));
    if (((/* implicit */val<bool>) ((((var_2) >> ((((~(1179324495))) + (1179324512))))) >> (((1179324495) - (1179324479))))))
    {
        *var_14 = ((/* implicit */val<short>) (~((-(-1178079197)))));
        *var_15 += ((/* implicit */val<signed char>) max((((/* implicit */val<unsigned int>) (!(((/* implicit */val<bool>) max(((val<unsigned short>)58476), ((val<unsigned short>)58476))))))), (var_0)));
        *var_16 += ((/* implicit */val<signed char>) max((min((max((((/* implicit */val<unsigned int>) 1178079169)), (var_10))), (((/* implicit */val<unsigned int>) -1179324486)))), (max((((/* implicit */val<unsigned int>) ((((/* implicit */val<int>) var_1)) + (((/* implicit */val<int>) (val<unsigned short>)7060))))), ((+(var_2)))))));
        *var_17 = ((/* implicit */val<short>) (((-(((var_10) - (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) (val<unsigned short>)58476))))))) + (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) (val<unsigned short>)7060)))));
    }
    else
    {
        *var_18 |= ((/* implicit */val<short>) max((1179324495), ((((~(1178079196))) ^ (((/* implicit */val<int>) (val<unsigned short>)7060))))));
        *var_19 |= ((/* implicit */val<bool>) 4128768);
    }

}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1020766105U;
short var_1 = (short)-6712;
unsigned int var_2 = 344147625U;
signed char var_5 = (signed char)69;
unsigned short var_9 = (unsigned short)60749;
unsigned int var_10 = 306766275U;
int zero = 0;
short var_12 = (short)-11092;
signed char var_13 = (signed char)69;
short var_14 = (short)-18996;
signed char var_15 = (signed char)-93;
signed char var_16 = (signed char)-85;
short var_17 = (short)-21594;
short var_18 = (short)-9924;
bool var_19 = (bool)1;
void init() {
}

void checksum() {
    value_mismatch |= var_12 != (short)-17;
    value_mismatch |= var_13 != (signed char)3;
    value_mismatch |= var_14 != (short)-18996;
    value_mismatch |= var_15 != (signed char)-93;
    value_mismatch |= var_16 != (signed char)-85;
    value_mismatch |= var_17 != (short)-21594;
    value_mismatch |= var_18 != (short)-9857;
    value_mismatch |= var_19 != (bool)1;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_2, var_5, var_9, var_10, zero, &var_12, &var_13, &var_14, &var_15, &var_16, &var_17, &var_18, &var_19);
  checksum();
  assert(!value_mismatch);
}
