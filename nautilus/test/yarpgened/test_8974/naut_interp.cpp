/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 8974
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=8974
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
void test(val<long long int> var_2, val<unsigned long long int> var_8, val<int> zero, val<unsigned int*> var_18, val<unsigned int*> var_19, val<unsigned int*> var_20) {
    *var_18 = ((/* implicit */val<unsigned int>) (-(var_8)));
    *var_19 += ((/* implicit */val<unsigned int>) var_2);
    *var_20 = ((/* implicit */val<unsigned int>) 6785384169222918919LL);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -3486747109725708725LL;
unsigned long long int var_8 = 16748881276216257328ULL;
int zero = 0;
unsigned int var_18 = 2062814712U;
unsigned int var_19 = 2591129516U;
unsigned int var_20 = 2099232506U;
void init() {
}

void checksum() {
    value_mismatch |= var_18 != 4193277136U;
    value_mismatch |= var_19 != 3382664695U;
    value_mismatch |= var_20 != 2400670471U;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_2, var_8, zero, &var_18, &var_19, &var_20);
  checksum();
  assert(!value_mismatch);
}
