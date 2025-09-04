/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 3339
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=3339
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
void test(val<unsigned short> var_4, val<int> zero, val<long long int*> var_12, val<unsigned short*> var_13) {
    *var_12 = ((/* implicit */val<long long int>) (+(((/* implicit */val<int>) (val<bool>)1))));
    *var_13 = ((/* implicit */val<unsigned short>) min((*var_13), (var_4)));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_4 = (unsigned short)32241;
int zero = 0;
long long int var_12 = -5240203824971254318LL;
unsigned short var_13 = (unsigned short)52293;
void init() {
}

void checksum() {
    value_mismatch |= var_12 != 1LL;
    value_mismatch |= var_13 != (unsigned short)32241;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_4, zero, &var_12, &var_13);
  checksum();
  assert(!value_mismatch);
}
