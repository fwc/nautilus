/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 3403
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=3403
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
void test(val<unsigned long long int> var_4, val<signed char> var_16, val<int> zero, val<long long int*> var_17, val<unsigned int*> var_18) {
    *var_17 = ((/* implicit */val<long long int>) var_4);
    *var_18 = ((/* implicit */val<unsigned int>) ((val<unsigned char>) (~((-(((/* implicit */val<int>) var_16)))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 4465322618603474153ULL;
signed char var_16 = (signed char)-113;
int zero = 0;
long long int var_17 = -1437834510975411219LL;
unsigned int var_18 = 3128247074U;
void init() {
}

void checksum() {
    value_mismatch |= var_17 != 4465322618603474153LL;
    value_mismatch |= var_18 != 142U;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_4, var_16, zero, &var_17, &var_18);
  checksum();
  assert(!value_mismatch);
}
