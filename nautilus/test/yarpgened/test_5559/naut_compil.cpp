/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 5559
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=5559
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
void test(val<unsigned long long int> var_0, val<long long int> var_3, val<long long int> var_4, val<bool> var_5, val<unsigned char> var_6, val<unsigned short> var_8, val<unsigned char> var_9, val<unsigned long long int> var_10, val<long long int> var_11, val<int> var_12, val<int> var_13, val<short> var_14, val<long long int> var_15, val<int> zero, val<int*> var_16, val<unsigned long long int*> var_17, val<short*> var_18, val<bool*> var_19) {
    *var_16 = ((((/* implicit */val<bool>) ((((/* implicit */val<bool>) ((((/* implicit */val<bool>) var_0)) ? (var_15) : (((/* implicit */val<long long int>) ((/* implicit */val<int>) var_14)))))) ? (((val<unsigned long long int>) 4294967295U)) : (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) (!(((/* implicit */val<bool>) var_14))))))))) ? ((-(((/* implicit */val<int>) var_6)))) : (((/* implicit */val<int>) (val<unsigned short>)53072)));
    *var_17 = ((/* implicit */val<unsigned long long int>) (val<unsigned short>)65535);
    *var_18 = ((/* implicit */val<short>) ((((/* implicit */val<bool>) (+(max((var_12), (((/* implicit */val<int>) var_5))))))) ? (((((/* implicit */val<bool>) ((((/* implicit */val<bool>) var_0)) ? (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_8))) : (16484441829600260544ULL)))) ? (((((var_11) + (9223372036854775807LL))) >> (((var_10) - (11323523684503961624ULL))))) : (var_11))) : ((+(((((/* implicit */val<bool>) var_14)) ? (((/* implicit */val<long long int>) ((/* implicit */val<int>) var_9))) : (var_11)))))));
    *var_19 = ((/* implicit */val<bool>) ((((/* implicit */val<bool>) ((((/* implicit */val<bool>) ((((/* implicit */val<bool>) var_9)) ? (var_13) : (((/* implicit */val<int>) var_8))))) ? (((/* implicit */val<long long int>) ((((/* implicit */val<int>) var_8)) >> (((((/* implicit */val<int>) var_9)) - (137)))))) : (((((/* implicit */val<bool>) var_11)) ? (var_15) : (var_3)))))) ? (var_4) : (((/* implicit */val<long long int>) (-(((((/* implicit */val<int>) var_14)) % (((/* implicit */val<int>) var_14)))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 8905437537205526492ULL;
long long int var_3 = 2315707722308458070LL;
long long int var_4 = 306129054450955445LL;
bool var_5 = (bool)1;
unsigned char var_6 = (unsigned char)145;
unsigned short var_8 = (unsigned short)50642;
unsigned char var_9 = (unsigned char)141;
unsigned long long int var_10 = 11323523684503961625ULL;
long long int var_11 = -5079263894215744363LL;
int var_12 = -356439778;
int var_13 = -1083585429;
short var_14 = (short)-6284;
long long int var_15 = 8151508689600857730LL;
int zero = 0;
int var_16 = 927292585;
unsigned long long int var_17 = 15102777687435130572ULL;
short var_18 = (short)-8861;
bool var_19 = (bool)0;
void init() {
}

void checksum() {
    value_mismatch |= var_16 != -145;
    value_mismatch |= var_17 != 65535ULL;
    value_mismatch |= var_18 != (short)-11702;
    value_mismatch |= var_19 != (bool)1;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_3, var_4, var_5, var_6, var_8, var_9, var_10, var_11, var_12, var_13, var_14, var_15, zero, &var_16, &var_17, &var_18, &var_19);
  checksum();
}
