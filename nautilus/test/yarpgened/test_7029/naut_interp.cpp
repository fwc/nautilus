/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 7029
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=7029
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
void test(val<bool> var_9, val<signed char> var_12, val<int> var_13, val<int> zero, val<long long int*> var_16, val<int*> var_17, val<unsigned short*> var_18, val<short*> var_19) {
    *var_16 = ((/* implicit */val<long long int>) ((((/* implicit */val<int>) var_12)) - ((+(((/* implicit */val<int>) (val<unsigned char>)234))))));
    *var_17 = ((/* implicit */val<int>) var_9);
    *var_18 = ((/* implicit */val<unsigned short>) var_13);
    *var_19 = ((/* implicit */val<short>) 8776204338463613727LL);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

bool var_9 = (bool)0;
signed char var_12 = (signed char)33;
int var_13 = 467360941;
int zero = 0;
long long int var_16 = 8752458128780789908LL;
int var_17 = 146359746;
unsigned short var_18 = (unsigned short)35451;
short var_19 = (short)8363;
void init() {
}

void checksum() {
    value_mismatch |= var_16 != -201LL;
    value_mismatch |= var_17 != 0;
    value_mismatch |= var_18 != (unsigned short)23725;
    value_mismatch |= var_19 != (short)-23777;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_9, var_12, var_13, zero, &var_16, &var_17, &var_18, &var_19);
  checksum();
  assert(!value_mismatch);
}
