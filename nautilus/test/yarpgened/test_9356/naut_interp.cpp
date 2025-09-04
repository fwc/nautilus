/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 9356
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=9356
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
void test(val<unsigned short> var_3, val<bool> var_4, val<unsigned int> var_5, val<unsigned char> var_12, val<int> zero, val<long long int*> var_16, val<unsigned long long int*> var_17) {
    *var_16 &= ((/* implicit */val<long long int>) (!(((/* implicit */val<bool>) ((((/* implicit */val<bool>) ((((/* implicit */val<bool>) 33554431LL)) ? (32767U) : (4294967295U)))) ? (((/* implicit */val<int>) (!(((/* implicit */val<bool>) (val<unsigned char>)11))))) : (((/* implicit */val<int>) var_4)))))));
    *var_17 = ((/* implicit */val<unsigned long long int>) ((((/* implicit */val<unsigned int>) (+((~(((/* implicit */val<int>) var_3))))))) < ((-(((((/* implicit */val<bool>) var_12)) ? (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_12))) : (var_5)))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)2535;
bool var_4 = (bool)0;
unsigned int var_5 = 3358364289U;
unsigned char var_12 = (unsigned char)250;
int zero = 0;
long long int var_16 = -4174857586364679868LL;
unsigned long long int var_17 = 16725705545446599733ULL;
void init() {
}

void checksum() {
    value_mismatch |= var_16 != 0LL;
    value_mismatch |= var_17 != 1ULL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_3, var_4, var_5, var_12, zero, &var_16, &var_17);
  checksum();
  assert(!value_mismatch);
}
