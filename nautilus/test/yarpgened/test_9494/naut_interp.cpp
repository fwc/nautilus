/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 9494
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=9494
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
void test(val<long long int> var_0, val<bool> var_8, val<int> var_10, val<int> zero, val<unsigned long long int*> var_16, val<int*> var_17) {
    *var_16 = ((/* implicit */val<unsigned long long int>) ((val<bool>) var_0));
    *var_17 = ((/* implicit */val<int>) (~(((((((/* implicit */val<unsigned long long int>) var_10)) * (18446744073709551592ULL))) * (((/* implicit */val<unsigned long long int>) (-(((/* implicit */val<int>) var_8)))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 427729426351720550LL;
bool var_8 = (bool)0;
int var_10 = -743216586;
int zero = 0;
unsigned long long int var_16 = 9504323589696287833ULL;
int var_17 = -1398565268;
void init() {
}

void checksum() {
    value_mismatch |= var_16 != 1ULL;
    value_mismatch |= var_17 != -1;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_8, var_10, zero, &var_16, &var_17);
  checksum();
}
