/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 4184
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=4184
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
void test(val<short> var_2, val<short> var_3, val<int> var_4, val<int> var_5, val<bool> var_6, val<unsigned short> var_7, val<int> var_11, val<unsigned short> var_12, val<int> zero, val<int*> var_15, val<short*> var_16) {
    *var_15 = ((((/* implicit */val<bool>) ((((/* implicit */val<bool>) ((((/* implicit */val<bool>) (val<unsigned short>)5448)) ? (((/* implicit */val<int>) (val<bool>)1)) : (((/* implicit */val<int>) var_3))))) ? (var_11) : (((((/* implicit */val<bool>) var_3)) ? (((/* implicit */val<int>) var_6)) : (748801477)))))) ? (((val<int>) var_5)) : (1301125072));
    *var_16 &= ((/* implicit */val<short>) ((((/* implicit */val<bool>) ((((/* implicit */val<int>) var_7)) + (((/* implicit */val<int>) ((((/* implicit */val<int>) var_12)) >= (((/* implicit */val<int>) (val<short>)-28809)))))))) ? (min((((/* implicit */val<int>) var_2)), (((var_4) / (((/* implicit */val<int>) (val<unsigned short>)51520)))))) : (((/* implicit */val<int>) var_12))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)16953;
short var_3 = (short)-12199;
int var_4 = 1334304883;
int var_5 = -1784831636;
bool var_6 = (bool)0;
unsigned short var_7 = (unsigned short)55400;
int var_11 = -2092474641;
unsigned short var_12 = (unsigned short)43343;
int zero = 0;
int var_15 = -442113565;
short var_16 = (short)-2250;
void init() {
}

void checksum() {
    value_mismatch |= var_15 != -1784831636;
    value_mismatch |= var_16 != (short)16944;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_2, var_3, var_4, var_5, var_6, var_7, var_11, var_12, zero, &var_15, &var_16);
  checksum();
}
