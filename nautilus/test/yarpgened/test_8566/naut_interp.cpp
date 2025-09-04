/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 8566
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=8566
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
void test(val<unsigned short> var_8, val<unsigned long long int> var_13, val<int> zero, val<int*> var_18, val<short*> var_19) {
    *var_18 = ((/* implicit */val<int>) (-(var_13)));
    *var_19 = ((/* implicit */val<short>) max((*var_19), (((/* implicit */val<short>) var_8))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_8 = (unsigned short)12253;
unsigned long long int var_13 = 1706606490045960459ULL;
int zero = 0;
int var_18 = -2036027792;
short var_19 = (short)12598;
void init() {
}

void checksum() {
    value_mismatch |= var_18 != 1970220789;
    value_mismatch |= var_19 != (short)12598;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_8, var_13, zero, &var_18, &var_19);
  checksum();
  assert(!value_mismatch);
}
