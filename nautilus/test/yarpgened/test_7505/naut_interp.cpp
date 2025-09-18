/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 7505
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=7505
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
void test(val<short> var_4, val<unsigned short> var_7, val<signed char> var_11, val<signed char> var_18, val<int> zero, val<long long int*> var_19, val<unsigned char*> var_20, val<signed char*> var_21, val<unsigned long long int*> var_22) {
    *var_19 = ((/* implicit */val<long long int>) ((((/* implicit */val<bool>) (val<short>)-134)) ? (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) (val<signed char>)85))) : (((((/* implicit */val<bool>) (+(3873673746U)))) ? (((/* implicit */val<unsigned long long int>) ((((/* implicit */val<bool>) var_4)) ? (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_7))) : (4294967276U)))) : (((((/* implicit */val<bool>) -8211191370707341049LL)) ? (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) (val<short>)32749))) : (5296429027462148345ULL)))))));
    *var_20 = ((/* implicit */val<unsigned char>) 3873673746U);
    *var_21 = ((/* implicit */val<signed char>) ((((/* implicit */val<bool>) (~(2111498023070973255ULL)))) ? (((16335246050638578360ULL) - (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) (val<short>)32758))))) : (((/* implicit */val<unsigned long long int>) min((((/* implicit */val<long long int>) min((var_11), ((val<signed char>)127)))), (((((/* implicit */val<bool>) (val<short>)28502)) ? (((/* implicit */val<long long int>) ((/* implicit */val<int>) var_18))) : (-8179881600784713350LL))))))));
    *var_22 = (~(2111498023070973238ULL));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)2213;
unsigned short var_7 = (unsigned short)45909;
signed char var_11 = (signed char)-61;
signed char var_18 = (signed char)123;
int zero = 0;
long long int var_19 = 5215980225489919084LL;
unsigned char var_20 = (unsigned char)250;
signed char var_21 = (signed char)17;
unsigned long long int var_22 = 4588011529630701826ULL;
void init() {
}

void checksum() {
    value_mismatch |= var_19 != 85LL;
    value_mismatch |= var_20 != (unsigned char)18;
    value_mismatch |= var_21 != (signed char)-62;
    value_mismatch |= var_22 != 16335246050638578377ULL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_4, var_7, var_11, var_18, zero, &var_19, &var_20, &var_21, &var_22);
  checksum();
}
