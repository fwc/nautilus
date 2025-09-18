/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 1306
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=1306
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
void test(val<unsigned short> var_0, val<unsigned long long int> var_1, val<unsigned short> var_2, val<unsigned long long int> var_3, val<unsigned char> var_6, val<bool> var_7, val<int> var_10, val<int> var_13, val<int> zero, val<bool*> var_14, val<bool*> var_15, val<unsigned short*> var_16) {
    *var_14 = ((/* implicit */val<bool>) (+(var_1)));
    *var_15 = ((((/* implicit */val<bool>) ((((/* implicit */val<bool>) ((((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_6))) % (var_3)))) ? (((/* implicit */val<int>) var_7)) : (((var_10) / (((/* implicit */val<int>) (val<unsigned short>)62273))))))) || (((/* implicit */val<bool>) (~(var_10)))));
    *var_16 = ((/* implicit */val<unsigned short>) ((max((((/* implicit */val<int>) ((val<bool>) 10))), (((((/* implicit */val<bool>) var_0)) ? (((/* implicit */val<int>) var_2)) : (var_13))))) & (((/* implicit */val<int>) (!(((/* implicit */val<bool>) 18446744073709551609ULL)))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)63761;
unsigned long long int var_1 = 15599898796127205208ULL;
unsigned short var_2 = (unsigned short)39596;
unsigned long long int var_3 = 2443623206523389326ULL;
unsigned char var_6 = (unsigned char)242;
bool var_7 = (bool)1;
int var_10 = 1315549909;
int var_13 = 1077844144;
int zero = 0;
bool var_14 = (bool)1;
bool var_15 = (bool)0;
unsigned short var_16 = (unsigned short)8889;
void init() {
}

void checksum() {
    value_mismatch |= var_14 != (bool)1;
    value_mismatch |= var_15 != (bool)1;
    value_mismatch |= var_16 != (unsigned short)0;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_2, var_3, var_6, var_7, var_10, var_13, zero, &var_14, &var_15, &var_16);
  checksum();
}
