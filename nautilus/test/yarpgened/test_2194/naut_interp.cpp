/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 2194
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=2194
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
void test(val<int> var_0, val<long long int> var_11, val<int> zero, val<int*> var_13, val<unsigned char*> var_14) {
    *var_13 = ((/* implicit */val<int>) max((*var_13), (((/* implicit */val<int>) var_11))));
    *var_14 = ((/* implicit */val<unsigned char>) ((((/* implicit */val<bool>) (-(((/* implicit */val<int>) (val<signed char>)26))))) || (((/* implicit */val<bool>) (((val<bool>)1) ? (var_0) : (((/* implicit */val<int>) (val<bool>)1)))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 138514682;
long long int var_11 = -1180545631912301123LL;
int zero = 0;
int var_13 = 1016756498;
unsigned char var_14 = (unsigned char)43;
void init() {
}

void checksum() {
    value_mismatch |= var_13 != 1016756498;
    value_mismatch |= var_14 != (unsigned char)1;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_11, zero, &var_13, &var_14);
  checksum();
  assert(!value_mismatch);
}
