/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 5535
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=5535
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
void test(val<unsigned int> var_1, val<short> var_7, val<short> var_10, val<unsigned short> var_12, val<int> zero, val<signed char*> var_15, val<short*> var_16, val<unsigned int*> var_17, val<unsigned int*> var_18, val<unsigned short*> var_19) {
    *var_15 += ((/* implicit */val<signed char>) var_10);
    *var_16 = ((/* implicit */val<short>) (~(((/* implicit */val<int>) var_12))));
    *var_17 = ((/* implicit */val<unsigned int>) (val<short>)10417);
    *var_18 = ((/* implicit */val<unsigned int>) max((*var_18), (((/* implicit */val<unsigned int>) var_7))));
    *var_19 += ((/* implicit */val<unsigned short>) var_1);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2237918716U;
short var_7 = (short)18662;
short var_10 = (short)-4929;
unsigned short var_12 = (unsigned short)14671;
int zero = 0;
signed char var_15 = (signed char)-28;
short var_16 = (short)29803;
unsigned int var_17 = 2308686232U;
unsigned int var_18 = 4065021595U;
unsigned short var_19 = (unsigned short)37479;
void init() {
}

void checksum() {
    value_mismatch |= var_15 != (signed char)-93;
    value_mismatch |= var_16 != (short)-14672;
    value_mismatch |= var_17 != 10417U;
    value_mismatch |= var_18 != 4065021595U;
    value_mismatch |= var_19 != (unsigned short)32867;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_7, var_10, var_12, zero, &var_15, &var_16, &var_17, &var_18, &var_19);
  checksum();
  assert(!value_mismatch);
}
