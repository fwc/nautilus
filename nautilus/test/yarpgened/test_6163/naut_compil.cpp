/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 6163
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=6163
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
void test(val<unsigned int> var_0, val<unsigned short> var_12, val<int> zero, val<unsigned long long int*> var_15, val<long long int*> var_16) {
    *var_15 = ((/* implicit */val<unsigned long long int>) ((val<unsigned short>) (((~(var_0))) >> ((((+(((/* implicit */val<int>) var_12)))) - (31458))))));
    *var_16 -= ((/* implicit */val<long long int>) (-(((((/* implicit */val<bool>) -1241486770)) ? (0ULL) : (((/* implicit */val<unsigned long long int>) -1241486783))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 4087137101U;
unsigned short var_12 = (unsigned short)31471;
int zero = 0;
unsigned long long int var_15 = 3132637455286130093ULL;
long long int var_16 = -1613192842533440002LL;
void init() {
}

void checksum() {
    value_mismatch |= var_15 != 25369ULL;
    value_mismatch |= var_16 != -1613192842533440002LL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_12, zero, &var_15, &var_16);
  checksum();
}
