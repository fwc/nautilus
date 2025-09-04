/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 8462
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=8462
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
void test(val<unsigned short> var_7, val<int> zero, val<long long int*> var_14, val<short*> var_15, val<unsigned int*> var_16) {
    *var_14 = ((/* implicit */val<long long int>) min((*var_14), (((/* implicit */val<long long int>) ((((/* implicit */val<bool>) (-2147483647 - 1))) ? (6709404969184257354ULL) : (11844528879585051962ULL))))));
    *var_15 = ((val<short>) (+(((((/* implicit */val<bool>) (val<short>)-31388)) ? (((/* implicit */val<int>) var_7)) : (((/* implicit */val<int>) (val<bool>)0))))));
    *var_16 = ((/* implicit */val<unsigned int>) 11737339104525294246ULL);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_7 = (unsigned short)11179;
int zero = 0;
long long int var_14 = -950808571272082831LL;
short var_15 = (short)16881;
unsigned int var_16 = 546749768U;
void init() {
}

void checksum() {
    value_mismatch |= var_14 != -950808571272082831LL;
    value_mismatch |= var_15 != (short)11179;
    value_mismatch |= var_16 != 2106071718U;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_7, zero, &var_14, &var_15, &var_16);
  checksum();
  assert(!value_mismatch);
}
