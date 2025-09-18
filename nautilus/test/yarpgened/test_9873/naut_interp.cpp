/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 9873
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=9873
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
void test(val<unsigned short> var_0, val<unsigned int> var_1, val<short> var_2, val<int> var_3, val<unsigned short> var_6, val<bool> var_7, val<bool> var_8, val<unsigned short> var_10, val<bool> var_11, val<bool> var_13, val<bool> var_14, val<int> zero, val<int*> var_15, val<long long int*> var_16, val<short*> var_17, val<long long int*> var_18) {
    *var_15 = (((!(((/* implicit */val<bool>) var_3)))) ? (((/* implicit */val<int>) var_6)) : (((((/* implicit */val<int>) var_8)) - (((((/* implicit */val<bool>) (val<signed char>)107)) ? (((/* implicit */val<int>) var_6)) : (((/* implicit */val<int>) var_11)))))));
    if (((/* implicit */val<bool>) ((val<signed char>) var_10)))
    {
        *var_16 = ((/* implicit */val<long long int>) ((((((/* implicit */val<unsigned int>) (((val<bool>)0) ? (((/* implicit */val<int>) (val<bool>)1)) : (((/* implicit */val<int>) (val<bool>)1))))) > ((~(var_1))))) ? (((/* implicit */val<int>) (!(min((var_13), (var_14)))))) : (((((/* implicit */val<int>) ((val<signed char>) var_0))) ^ ((-(((/* implicit */val<int>) var_8))))))));
        *var_17 = ((/* implicit */val<short>) min((*var_17), (((/* implicit */val<short>) ((((/* implicit */val<bool>) var_1)) ? (var_1) : (((/* implicit */val<unsigned int>) (~(((/* implicit */val<int>) var_7))))))))));
        *var_18 = ((/* implicit */val<long long int>) max((max((1120026909), (((/* implicit */val<int>) var_2)))), (max(((+(((/* implicit */val<int>) (val<signed char>)(-127 - 1))))), (((/* implicit */val<int>) (val<bool>)1))))));
    }

}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)610;
unsigned int var_1 = 447450976U;
short var_2 = (short)27490;
int var_3 = 970854588;
unsigned short var_6 = (unsigned short)56909;
bool var_7 = (bool)0;
bool var_8 = (bool)1;
unsigned short var_10 = (unsigned short)9270;
bool var_11 = (bool)1;
bool var_13 = (bool)1;
bool var_14 = (bool)0;
int zero = 0;
int var_15 = 1764674977;
long long int var_16 = -6010202780688044035LL;
short var_17 = (short)-6422;
long long int var_18 = -6643769332316058534LL;
void init() {
}

void checksum() {
    value_mismatch |= var_15 != -56908;
    value_mismatch |= var_16 != -99LL;
    value_mismatch |= var_17 != (short)-28832;
    value_mismatch |= var_18 != 1120026909LL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_2, var_3, var_6, var_7, var_8, var_10, var_11, var_13, var_14, zero, &var_15, &var_16, &var_17, &var_18);
  checksum();
}
