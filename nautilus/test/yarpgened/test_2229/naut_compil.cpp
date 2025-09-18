/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 2229
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=2229
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
void test(val<long long int> var_8, val<int> zero, val<unsigned long long int*> var_18, val<long long int*> var_19) {
    *var_18 ^= ((/* implicit */val<unsigned long long int>) var_8);
    *var_19 &= ((/* implicit */val<long long int>) (~(524287)));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_8 = 4360962144198713080LL;
int zero = 0;
unsigned long long int var_18 = 17733590113545099781ULL;
long long int var_19 = 243019243027372973LL;
void init() {
}

void checksum() {
    value_mismatch |= var_18 != 14600495953784849661ULL;
    value_mismatch |= var_19 != 243019243027169280LL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_8, zero, &var_18, &var_19);
  checksum();
}
