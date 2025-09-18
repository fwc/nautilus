/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 7063
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=7063
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
void test(val<unsigned long long int> var_6, val<unsigned int> var_7, val<unsigned short> var_10, val<unsigned short> var_12, val<unsigned int> var_13, val<int> zero, val<int*> var_14, val<int*> var_15) {
    *var_14 = ((/* implicit */val<int>) ((((/* implicit */val<bool>) max(((+(((/* implicit */val<int>) (val<unsigned short>)52391)))), (((/* implicit */val<int>) var_12))))) ? (((((((/* implicit */val<bool>) var_13)) || (((/* implicit */val<bool>) 0)))) ? ((+(12243268070112093282ULL))) : (((/* implicit */val<unsigned long long int>) ((((/* implicit */val<bool>) var_6)) ? (-6) : (((/* implicit */val<int>) var_10))))))) : (((/* implicit */val<unsigned long long int>) (-(var_7))))));
    *var_15 = ((/* implicit */val<int>) (+((+(var_6)))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_6 = 9027452655783829083ULL;
unsigned int var_7 = 3563760220U;
unsigned short var_10 = (unsigned short)56366;
unsigned short var_12 = (unsigned short)63246;
unsigned int var_13 = 2179040534U;
int zero = 0;
int var_14 = 2034009127;
int var_15 = -294574696;
void init() {
}

void checksum() {
    value_mismatch |= var_14 != 820634722;
    value_mismatch |= var_15 != 1722211931;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_6, var_7, var_10, var_12, var_13, zero, &var_14, &var_15);
  checksum();
}
