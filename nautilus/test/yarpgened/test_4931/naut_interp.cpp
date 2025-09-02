/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 4931
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=4931
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
void test(val<bool> var_8, val<int> zero, val<unsigned short*> var_19, val<bool*> var_20) {
    *var_19 *= ((/* implicit */val<unsigned short>) (val<bool>)1);
    *var_20 = ((/* implicit */val<bool>) ((val<signed char>) var_8));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

bool var_8 = (bool)0;
int zero = 0;
unsigned short var_19 = (unsigned short)40263;
bool var_20 = (bool)1;
void init() {
}

void checksum() {
    value_mismatch |= var_19 != (unsigned short)40263;
    value_mismatch |= var_20 != (bool)0;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_8, zero, &var_19, &var_20);
  checksum();
  assert(!value_mismatch);
}
