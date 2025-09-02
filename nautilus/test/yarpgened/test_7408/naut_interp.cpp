/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 7408
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=7408
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
void test(val<unsigned short> var_9, val<int> zero, val<unsigned char*> var_17, val<short*> var_18) {
    *var_17 = ((/* implicit */val<unsigned char>) var_9);
    *var_18 = ((/* implicit */val<short>) (+(((/* implicit */val<int>) (val<bool>)1))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_9 = (unsigned short)62901;
int zero = 0;
unsigned char var_17 = (unsigned char)32;
short var_18 = (short)-5983;
void init() {
}

void checksum() {
    value_mismatch |= var_17 != (unsigned char)181;
    value_mismatch |= var_18 != (short)1;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_9, zero, &var_17, &var_18);
  checksum();
  assert(!value_mismatch);
}
