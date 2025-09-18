/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 3456
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=3456
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
void test(val<short> var_12, val<unsigned char> var_13, val<int> zero, val<long long int*> var_14, val<long long int*> var_15) {
    *var_14 = ((/* implicit */val<long long int>) var_12);
    *var_15 = ((/* implicit */val<long long int>) var_13);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_12 = (short)16713;
unsigned char var_13 = (unsigned char)174;
int zero = 0;
long long int var_14 = -6833320838889983219LL;
long long int var_15 = 380453316067814062LL;
void init() {
}

void checksum() {
    value_mismatch |= var_14 != 16713LL;
    value_mismatch |= var_15 != 174LL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_12, var_13, zero, &var_14, &var_15);
  checksum();
}
