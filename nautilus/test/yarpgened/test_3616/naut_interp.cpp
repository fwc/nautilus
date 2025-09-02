/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 3616
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=3616
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
void test(val<short> var_6, val<unsigned int> var_7, val<unsigned short> var_10, val<int> zero, val<unsigned int*> var_15, val<int*> var_16, val<bool*> var_17, val<unsigned long long int*> var_18) {
    *var_15 = var_7;
    *var_16 |= ((/* implicit */val<int>) var_6);
    *var_17 &= ((/* implicit */val<bool>) (~(((/* implicit */val<int>) (val<unsigned char>)0))));
    *var_18 = ((/* implicit */val<unsigned long long int>) (!(((/* implicit */val<bool>) (~(((/* implicit */val<int>) var_10)))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_6 = (short)14653;
unsigned int var_7 = 281534943U;
unsigned short var_10 = (unsigned short)32235;
int zero = 0;
unsigned int var_15 = 2225173444U;
int var_16 = -1661295426;
bool var_17 = (bool)0;
unsigned long long int var_18 = 9204373734827183448ULL;
void init() {
}

void checksum() {
    value_mismatch |= var_15 != 281534943U;
    value_mismatch |= var_16 != -1661289025;
    value_mismatch |= var_17 != (bool)0;
    value_mismatch |= var_18 != 0ULL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_6, var_7, var_10, zero, &var_15, &var_16, &var_17, &var_18);
  checksum();
  assert(!value_mismatch);
}
