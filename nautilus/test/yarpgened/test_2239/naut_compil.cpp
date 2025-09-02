/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 2239
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=2239
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
void test(val<unsigned long long int> var_4, val<unsigned char> var_6, val<int> zero, val<int*> var_17, val<unsigned char*> var_18, val<int*> var_19) {
    *var_17 = ((/* implicit */val<int>) (!(((/* implicit */val<bool>) var_6))));
    *var_18 = ((/* implicit */val<unsigned char>) max((*var_18), (((/* implicit */val<unsigned char>) ((-1738623752) * (((/* implicit */val<int>) ((val<signed char>) (-(((/* implicit */val<int>) (val<unsigned char>)0)))))))))));
    *var_19 = ((/* implicit */val<int>) var_4);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 13991666152943188174ULL;
unsigned char var_6 = (unsigned char)188;
int zero = 0;
int var_17 = 270971578;
unsigned char var_18 = (unsigned char)26;
int var_19 = -12191311;
void init() {
}

void checksum() {
    value_mismatch |= var_17 != 0;
    value_mismatch |= var_18 != (unsigned char)26;
    value_mismatch |= var_19 != 772339918;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_4, var_6, zero, &var_17, &var_18, &var_19);
  checksum();
  assert(!value_mismatch);
}
