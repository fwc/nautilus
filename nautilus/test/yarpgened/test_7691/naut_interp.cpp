/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 7691
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=7691
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
void test(val<unsigned short> var_3, val<unsigned long long int> var_5, val<unsigned short> var_10, val<unsigned int> var_12, val<unsigned short> var_13, val<int> zero, val<unsigned int*> var_20, val<int*> var_21) {
    *var_20 = ((/* implicit */val<unsigned int>) max((((((/* implicit */val<bool>) max((((/* implicit */val<int>) (val<unsigned short>)2048)), (781335778)))) ? (((/* implicit */val<long long int>) ((((/* implicit */val<int>) (val<unsigned short>)63487)) / (((/* implicit */val<int>) var_10))))) : (((val<long long int>) (val<short>)0)))), (((/* implicit */val<long long int>) (-((-(((/* implicit */val<int>) var_3)))))))));
    *var_21 = ((((/* implicit */val<bool>) min((((((/* implicit */val<bool>) 18446744073709551614ULL)) ? (((/* implicit */val<unsigned long long int>) var_12)) : (var_5))), (((/* implicit */val<unsigned long long int>) ((((/* implicit */val<bool>) 19ULL)) || (((/* implicit */val<bool>) (val<short>)15988)))))))) ? (((/* implicit */val<int>) var_13)) : (((((/* implicit */val<bool>) ((((/* implicit */val<bool>) (val<unsigned short>)1008)) ? (((/* implicit */val<unsigned int>) 1068396461)) : (2972614190U)))) ? (((/* implicit */val<int>) (!(((/* implicit */val<bool>) var_5))))) : (((/* implicit */val<int>) (val<signed char>)0)))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)27588;
unsigned long long int var_5 = 7610446199931890173ULL;
unsigned short var_10 = (unsigned short)21842;
unsigned int var_12 = 1323143319U;
unsigned short var_13 = (unsigned short)37116;
int zero = 0;
unsigned int var_20 = 2150315991U;
int var_21 = -803210796;
void init() {
}

void checksum() {
    value_mismatch |= var_20 != 27588U;
    value_mismatch |= var_21 != 37116;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_3, var_5, var_10, var_12, var_13, zero, &var_20, &var_21);
  checksum();
}
