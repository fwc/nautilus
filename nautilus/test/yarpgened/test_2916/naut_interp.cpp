/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 2916
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=2916
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
void test(val<int> var_0, val<bool> var_4, val<int> zero, val<bool*> var_19, val<unsigned long long int*> var_20) {
    *var_19 *= ((/* implicit */val<bool>) ((((/* implicit */val<bool>) (val<unsigned short>)63)) ? (((/* implicit */val<unsigned long long int>) ((((/* implicit */val<bool>) max((var_0), (((/* implicit */val<int>) (val<unsigned short>)65473))))) ? (((/* implicit */val<int>) (!(((/* implicit */val<bool>) (val<unsigned short>)51562))))) : (((/* implicit */val<int>) ((((/* implicit */val<int>) (val<unsigned short>)37519)) != (((/* implicit */val<int>) var_4)))))))) : (8001108732992273369ULL)));
    *var_20 = ((/* implicit */val<unsigned long long int>) ((((/* implicit */val<bool>) 10445635340717278247ULL)) ? (-6028083778647492193LL) : (((/* implicit */val<long long int>) ((/* implicit */val<int>) (val<unsigned short>)5846)))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 881432343;
bool var_4 = (bool)0;
int zero = 0;
bool var_19 = (bool)1;
unsigned long long int var_20 = 15987834644250525664ULL;
void init() {
}

void checksum() {
    value_mismatch |= var_19 != (bool)0;
    value_mismatch |= var_20 != 12418660295062059423ULL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_4, zero, &var_19, &var_20);
  checksum();
  assert(!value_mismatch);
}
