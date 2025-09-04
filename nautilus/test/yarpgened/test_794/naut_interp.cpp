/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 794
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=794
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
void test(val<int> var_2, val<unsigned short> var_15, val<int> zero, val<unsigned long long int*> var_20, val<long long int*> var_21) {
    *var_20 = ((/* implicit */val<unsigned long long int>) var_2);
    *var_21 = ((/* implicit */val<long long int>) var_15);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 924908519;
unsigned short var_15 = (unsigned short)14523;
int zero = 0;
unsigned long long int var_20 = 12298978729046978866ULL;
long long int var_21 = 3755301758618532512LL;
void init() {
}

void checksum() {
    value_mismatch |= var_20 != 924908519ULL;
    value_mismatch |= var_21 != 14523LL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_2, var_15, zero, &var_20, &var_21);
  checksum();
  assert(!value_mismatch);
}
