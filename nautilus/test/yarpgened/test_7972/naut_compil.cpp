/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 7972
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=7972
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
void test(val<unsigned char> var_2, val<short> var_5, val<int> zero, val<long long int*> var_18, val<bool*> var_19) {
    *var_18 = ((/* implicit */val<long long int>) var_2);
    *var_19 = ((/* implicit */val<bool>) (~(((/* implicit */val<int>) var_5))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)220;
short var_5 = (short)28608;
int zero = 0;
long long int var_18 = 2851149320485789657LL;
bool var_19 = (bool)0;
void init() {
}

void checksum() {
    value_mismatch |= var_18 != 220LL;
    value_mismatch |= var_19 != (bool)1;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_2, var_5, zero, &var_18, &var_19);
  checksum();
}
