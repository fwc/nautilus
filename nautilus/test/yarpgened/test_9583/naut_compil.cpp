/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 9583
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=9583
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
void test(val<long long int> var_0, val<unsigned long long int> var_1, val<unsigned short> var_3, val<signed char> var_6, val<long long int> var_7, val<int> var_8, val<unsigned long long int> var_9, val<bool> var_12, val<int> zero, val<unsigned long long int*> var_14, val<unsigned short*> var_15, val<int*> var_16, val<unsigned short*> var_17) {
    *var_14 = ((/* implicit */val<unsigned long long int>) max((*var_14), (((/* implicit */val<unsigned long long int>) (((val<bool>)0) ? (((/* implicit */val<int>) (val<signed char>)-97)) : (((/* implicit */val<int>) (val<signed char>)-86)))))));
    *var_15 = ((/* implicit */val<unsigned short>) ((((/* implicit */val<bool>) max((((((/* implicit */val<bool>) var_6)) ? (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_3))) : (var_9))), (max((((/* implicit */val<unsigned long long int>) (val<unsigned short>)51374)), (7509022434557784824ULL)))))) ? (((/* implicit */val<long long int>) (~(((/* implicit */val<int>) ((val<bool>) var_8)))))) : ((-(var_7)))));
    *var_16 = ((/* implicit */val<int>) max((*var_16), (((/* implicit */val<int>) var_0))));
    *var_17 = ((/* implicit */val<unsigned short>) ((((/* implicit */val<int>) ((var_12) && (((/* implicit */val<bool>) ((((/* implicit */val<bool>) (val<signed char>)-101)) ? (var_1) : (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) (val<unsigned short>)33656))))))))) < (((/* implicit */val<int>) var_12))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -8767001686738696925LL;
unsigned long long int var_1 = 11582978397930873268ULL;
unsigned short var_3 = (unsigned short)3178;
signed char var_6 = (signed char)75;
long long int var_7 = 3437276097517107020LL;
int var_8 = -1089917316;
unsigned long long int var_9 = 2200051080558644813ULL;
bool var_12 = (bool)0;
int zero = 0;
unsigned long long int var_14 = 6850174926854478752ULL;
unsigned short var_15 = (unsigned short)57033;
int var_16 = 1383715108;
unsigned short var_17 = (unsigned short)50941;
void init() {
}

void checksum() {
    value_mismatch |= var_14 != 18446744073709551530ULL;
    value_mismatch |= var_15 != (unsigned short)65534;
    value_mismatch |= var_16 != 1555072291;
    value_mismatch |= var_17 != (unsigned short)0;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_3, var_6, var_7, var_8, var_9, var_12, zero, &var_14, &var_15, &var_16, &var_17);
  checksum();
  assert(!value_mismatch);
}
