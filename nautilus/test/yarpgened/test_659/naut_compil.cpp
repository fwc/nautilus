/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 659
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=659
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
void test(val<unsigned short> var_1, val<unsigned int> var_6, val<unsigned char> var_8, val<int> zero, val<long long int*> var_18, val<unsigned char*> var_19) {
    *var_18 = ((/* implicit */val<long long int>) ((((/* implicit */val<bool>) (~(((val<int>) (val<bool>)1))))) ? (min((((/* implicit */val<unsigned int>) ((((/* implicit */val<bool>) (val<short>)21398)) ? (((/* implicit */val<int>) (val<short>)21398)) : (((/* implicit */val<int>) var_1))))), (var_6))) : (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_8)))));
    *var_19 = ((/* implicit */val<unsigned char>) ((((/* implicit */val<bool>) ((val<unsigned int>) 18446744073709551615ULL))) ? (((/* implicit */val<int>) (val<bool>)1)) : (((((/* implicit */val<bool>) 0ULL)) ? (((/* implicit */val<int>) (val<bool>)1)) : (((/* implicit */val<int>) (val<short>)-21398))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)24167;
unsigned int var_6 = 814434070U;
unsigned char var_8 = (unsigned char)183;
int zero = 0;
long long int var_18 = -7440308718650402540LL;
unsigned char var_19 = (unsigned char)190;
void init() {
}

void checksum() {
    value_mismatch |= var_18 != 21398LL;
    value_mismatch |= var_19 != (unsigned char)1;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_6, var_8, zero, &var_18, &var_19);
  checksum();
  assert(!value_mismatch);
}
