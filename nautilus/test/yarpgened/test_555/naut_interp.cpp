/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 555
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=555
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
void test(val<short> var_0, val<unsigned long long int> var_1, val<bool> var_4, val<unsigned int> var_5, val<int> zero, val<bool*> var_13, val<unsigned char*> var_14, val<unsigned char*> var_15) {
    *var_13 = ((/* implicit */val<bool>) ((((/* implicit */val<int>) ((val<bool>) (!(((/* implicit */val<bool>) var_5)))))) / (((/* implicit */val<int>) ((val<short>) var_0)))));
    *var_14 = ((/* implicit */val<unsigned char>) (~(((/* implicit */val<int>) (val<unsigned short>)45586))));
    *var_15 = ((/* implicit */val<unsigned char>) (!(((val<bool>) ((var_1) <= (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_4))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-26353;
unsigned long long int var_1 = 12062561869397697180ULL;
bool var_4 = (bool)0;
unsigned int var_5 = 1957784729U;
int zero = 0;
bool var_13 = (bool)0;
unsigned char var_14 = (unsigned char)195;
unsigned char var_15 = (unsigned char)235;
void init() {
}

void checksum() {
    value_mismatch |= var_13 != (bool)0;
    value_mismatch |= var_14 != (unsigned char)237;
    value_mismatch |= var_15 != (unsigned char)1;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_4, var_5, zero, &var_13, &var_14, &var_15);
  checksum();
}
