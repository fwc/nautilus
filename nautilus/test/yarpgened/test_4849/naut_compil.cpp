/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 4849
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=4849
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
void test(val<bool> var_0, val<unsigned char> var_2, val<unsigned char> var_4, val<short> var_5, val<unsigned char> var_12, val<int> var_13, val<bool> var_17, val<int> zero, val<unsigned short*> var_19, val<unsigned long long int*> var_20) {
    *var_19 = ((/* implicit */val<unsigned short>) ((((/* implicit */val<bool>) max(((~(((/* implicit */val<int>) var_5)))), (((/* implicit */val<int>) var_0))))) ? (((/* implicit */val<int>) ((val<bool>) ((((/* implicit */val<int>) var_4)) - (((/* implicit */val<int>) var_2)))))) : (((((((/* implicit */val<bool>) (val<signed char>)-28)) || (((/* implicit */val<bool>) -6838363574596316706LL)))) ? (((/* implicit */val<int>) var_12)) : (((/* implicit */val<int>) var_17))))));
    *var_20 = ((/* implicit */val<unsigned long long int>) (!(((/* implicit */val<bool>) max((var_13), (var_13))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

bool var_0 = (bool)1;
unsigned char var_2 = (unsigned char)135;
unsigned char var_4 = (unsigned char)35;
short var_5 = (short)-14357;
unsigned char var_12 = (unsigned char)154;
int var_13 = 1701632398;
bool var_17 = (bool)0;
int zero = 0;
unsigned short var_19 = (unsigned short)24835;
unsigned long long int var_20 = 10421572147435972349ULL;
void init() {
}

void checksum() {
    value_mismatch |= var_19 != (unsigned short)1;
    value_mismatch |= var_20 != 0ULL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_2, var_4, var_5, var_12, var_13, var_17, zero, &var_19, &var_20);
  checksum();
  assert(!value_mismatch);
}
