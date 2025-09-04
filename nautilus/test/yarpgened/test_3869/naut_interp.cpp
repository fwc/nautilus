/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 3869
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=3869
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
void test(val<unsigned long long int> var_9, val<int> zero, val<unsigned int*> var_15, val<long long int*> var_16) {
    *var_15 = ((/* implicit */val<unsigned int>) ((((((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) ((val<signed char>) (val<unsigned char>)85)))) | ((~(var_9))))) ^ (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) (val<short>)-29675)))));
    *var_16 -= ((-2180491611122111598LL) / (-4625443514546906889LL));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_9 = 3119109021589636203ULL;
int zero = 0;
unsigned int var_15 = 710229427U;
long long int var_16 = 4623158226333332874LL;
void init() {
}

void checksum() {
    value_mismatch |= var_15 != 529627072U;
    value_mismatch |= var_16 != 4623158226333332874LL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_9, zero, &var_15, &var_16);
  checksum();
  assert(!value_mismatch);
}
