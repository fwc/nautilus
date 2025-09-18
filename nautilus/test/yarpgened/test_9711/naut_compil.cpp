/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 9711
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=9711
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
void test(val<short> var_0, val<unsigned long long int> var_1, val<int> var_2, val<unsigned long long int> var_3, val<int> var_4, val<unsigned short> var_5, val<int> var_6, val<signed char> var_9, val<unsigned long long int> var_10, val<short> var_11, val<unsigned short> var_12, val<int> var_13, val<int> var_14, val<int> zero, val<unsigned long long int*> var_15, val<short*> var_16, val<short*> var_17, val<short*> var_18, val<unsigned long long int*> var_19, val<unsigned long long int*> var_20) {
    *var_15 -= ((/* implicit */val<unsigned long long int>) var_0);
    *var_16 = ((/* implicit */val<short>) ((((/* implicit */val<bool>) ((((/* implicit */val<bool>) var_0)) ? (((((/* implicit */val<bool>) var_3)) ? (((/* implicit */val<unsigned long long int>) var_4)) : (3934187241742293516ULL))) : (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) max(((val<short>)19881), ((val<short>)19877)))))))) ? (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_12))) : (((((/* implicit */val<bool>) ((((/* implicit */val<bool>) var_14)) ? (((/* implicit */val<int>) (val<short>)-19859)) : (var_2)))) ? (min((var_10), (((/* implicit */val<unsigned long long int>) var_5)))) : (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) min((((/* implicit */val<unsigned short>) var_11)), (var_5)))))))));
    if (((/* implicit */val<bool>) ((((/* implicit */val<bool>) var_6)) ? (((((/* implicit */val<bool>) (+(((/* implicit */val<int>) var_12))))) ? (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_0))) : (((((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) (val<short>)-19891))) - (var_3))))) : (((/* implicit */val<unsigned long long int>) (-(((((/* implicit */val<bool>) var_6)) ? (((/* implicit */val<int>) var_0)) : (((/* implicit */val<int>) (val<short>)-19881))))))))))
    {
        *var_17 = ((/* implicit */val<short>) var_13);
        *var_18 ^= ((/* implicit */val<short>) ((((/* implicit */val<int>) max((min((((/* implicit */val<short>) var_9)), ((val<short>)19879))), (max((var_11), (var_0)))))) > (((/* implicit */val<int>) (!(((/* implicit */val<bool>) ((((/* implicit */val<long long int>) ((/* implicit */val<int>) var_12))) + (6371518288384021654LL)))))))));
        *var_19 = var_1;
        *var_20 = ((/* implicit */val<unsigned long long int>) min((*var_20), (((/* implicit */val<unsigned long long int>) min((((((/* implicit */val<bool>) ((((/* implicit */val<bool>) (val<short>)-19902)) ? (((/* implicit */val<int>) (val<unsigned short>)24514)) : (((/* implicit */val<int>) (val<short>)-19897))))) ? (((/* implicit */val<int>) (val<unsigned short>)24503)) : (((/* implicit */val<int>) (val<unsigned short>)24498)))), (((/* implicit */val<int>) (val<signed char>)(-127 - 1))))))));
    }

}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)2690;
unsigned long long int var_1 = 14655321780898486266ULL;
int var_2 = 191587982;
unsigned long long int var_3 = 2710602241198689915ULL;
int var_4 = -202070247;
unsigned short var_5 = (unsigned short)63613;
int var_6 = -1370651716;
signed char var_9 = (signed char)-13;
unsigned long long int var_10 = 5407164034427302972ULL;
short var_11 = (short)-23880;
unsigned short var_12 = (unsigned short)63081;
int var_13 = -1655665707;
int var_14 = -1110085252;
int zero = 0;
unsigned long long int var_15 = 18200366018024148166ULL;
short var_16 = (short)-30032;
short var_17 = (short)-5770;
short var_18 = (short)12204;
unsigned long long int var_19 = 15884613226517682713ULL;
unsigned long long int var_20 = 3977841088087942121ULL;
void init() {
}

void checksum() {
    value_mismatch |= var_15 != 18200366018024145476ULL;
    value_mismatch |= var_16 != (short)-2455;
    value_mismatch |= var_17 != (short)-29739;
    value_mismatch |= var_18 != (short)12205;
    value_mismatch |= var_19 != 14655321780898486266ULL;
    value_mismatch |= var_20 != 3977841088087942121ULL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_2, var_3, var_4, var_5, var_6, var_9, var_10, var_11, var_12, var_13, var_14, zero, &var_15, &var_16, &var_17, &var_18, &var_19, &var_20);
  checksum();
}
