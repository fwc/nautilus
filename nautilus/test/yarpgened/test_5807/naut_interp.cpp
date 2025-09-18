/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 5807
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=5807
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
void test(val<unsigned short> var_2, val<signed char> var_9, val<int> zero, val<long long int*> var_18, val<unsigned long long int*> var_19) {
    *var_18 = ((/* implicit */val<long long int>) max((*var_18), (((/* implicit */val<long long int>) var_9))));
    *var_19 = ((/* implicit */val<unsigned long long int>) max((*var_19), (((/* implicit */val<unsigned long long int>) (-(((/* implicit */val<int>) var_2)))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)43919;
signed char var_9 = (signed char)41;
int zero = 0;
long long int var_18 = -4823123587365353338LL;
unsigned long long int var_19 = 13802065647011748232ULL;
void init() {
}

void checksum() {
    value_mismatch |= var_18 != 41LL;
    value_mismatch |= var_19 != 18446744073709507697ULL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_2, var_9, zero, &var_18, &var_19);
  checksum();
}
