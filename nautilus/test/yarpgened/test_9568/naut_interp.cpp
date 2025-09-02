/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 9568
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=9568
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
void test(val<short> var_0, val<signed char> var_8, val<int> var_14, val<bool> var_15, val<int> zero, val<unsigned int*> var_17, val<long long int*> var_18) {
    *var_17 = ((/* implicit */val<unsigned int>) (+(max((((((/* implicit */val<int>) var_0)) % (((/* implicit */val<int>) var_0)))), (((var_15) ? (var_14) : (((/* implicit */val<int>) var_8))))))));
    *var_18 &= ((/* implicit */val<long long int>) (val<unsigned short>)49780);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-25130;
signed char var_8 = (signed char)109;
int var_14 = -1724517146;
bool var_15 = (bool)1;
int zero = 0;
unsigned int var_17 = 2740840908U;
long long int var_18 = 5040955023864487871LL;
void init() {
}

void checksum() {
    value_mismatch |= var_17 != 0U;
    value_mismatch |= var_18 != 49716LL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_8, var_14, var_15, zero, &var_17, &var_18);
  checksum();
  assert(!value_mismatch);
}
