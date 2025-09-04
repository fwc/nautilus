/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 1609
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=1609
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
void test(val<unsigned short> var_3, val<long long int> var_6, val<unsigned long long int> var_10, val<int> zero, val<bool*> var_14, val<unsigned int*> var_15, val<long long int*> var_16, val<long long int*> var_17) {
    *var_14 = ((/* implicit */val<bool>) max((*var_14), (((/* implicit */val<bool>) (-(3052830107U))))));
    *var_15 = (-(((((/* implicit */val<bool>) ((((/* implicit */val<bool>) 1032375497U)) ? (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_3))) : (var_10)))) ? (4294967295U) : (((/* implicit */val<unsigned int>) ((((/* implicit */val<bool>) 1801474976)) ? (((/* implicit */val<int>) (val<unsigned short>)43158)) : (((/* implicit */val<int>) (val<unsigned short>)0))))))));
    *var_16 = ((/* implicit */val<long long int>) ((((/* implicit */val<bool>) -1801474977)) ? (((/* implicit */val<unsigned long long int>) ((val<unsigned int>) ((((/* implicit */val<bool>) var_6)) ? (1U) : (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) (val<unsigned char>)202))))))) : ((+(var_10)))));
    *var_17 = ((/* implicit */val<long long int>) ((var_10) << (((((val<int>) (~(3100497381825432094ULL)))) + (247188008)))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)32400;
long long int var_6 = -8742351794062283874LL;
unsigned long long int var_10 = 2851656107333991311ULL;
int zero = 0;
bool var_14 = (bool)0;
unsigned int var_15 = 800990918U;
long long int var_16 = 7990517760291349770LL;
long long int var_17 = 7983174839890347620LL;
void init() {
}

void checksum() {
    value_mismatch |= var_14 != (bool)1;
    value_mismatch |= var_15 != 1U;
    value_mismatch |= var_16 != 1LL;
    value_mismatch |= var_17 != 2755145131948973568LL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_3, var_6, var_10, zero, &var_14, &var_15, &var_16, &var_17);
  checksum();
  assert(!value_mismatch);
}
