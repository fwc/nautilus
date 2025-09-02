/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 4040
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=4040
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
void test(val<bool> var_0, val<int> var_1, val<int> var_2, val<unsigned int> var_6, val<unsigned char> var_14, val<int> zero, val<bool*> var_17, val<unsigned int*> var_18, val<unsigned int*> var_19, val<signed char*> var_20) {
    *var_17 += ((/* implicit */val<bool>) (-(((((/* implicit */val<bool>) ((((/* implicit */val<int>) (val<bool>)1)) + (((/* implicit */val<int>) var_0))))) ? ((+(((/* implicit */val<int>) (val<short>)-20906)))) : ((-(var_1)))))));
    *var_18 = ((/* implicit */val<unsigned int>) var_2);
    *var_19 = ((/* implicit */val<unsigned int>) (~(((/* implicit */val<int>) var_14))));
    *var_20 = ((/* implicit */val<signed char>) var_6);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

bool var_0 = (bool)0;
int var_1 = 644813490;
int var_2 = -1551247079;
unsigned int var_6 = 679472U;
unsigned char var_14 = (unsigned char)208;
int zero = 0;
bool var_17 = (bool)1;
unsigned int var_18 = 2896976212U;
unsigned int var_19 = 1025748283U;
signed char var_20 = (signed char)-117;
void init() {
}

void checksum() {
    value_mismatch |= var_17 != (bool)1;
    value_mismatch |= var_18 != 2743720217U;
    value_mismatch |= var_19 != 4294967087U;
    value_mismatch |= var_20 != (signed char)48;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_2, var_6, var_14, zero, &var_17, &var_18, &var_19, &var_20);
  checksum();
  assert(!value_mismatch);
}
