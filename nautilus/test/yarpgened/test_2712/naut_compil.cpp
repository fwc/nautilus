/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 2712
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=2712
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
void test(val<unsigned long long int> var_0, val<bool> var_10, val<int> zero, val<unsigned short*> var_18, val<signed char*> var_19) {
    *var_18 &= ((/* implicit */val<unsigned short>) (-(((/* implicit */val<int>) var_10))));
    *var_19 = ((/* implicit */val<signed char>) ((val<unsigned int>) (!(((/* implicit */val<bool>) var_0)))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 14646070098325420435ULL;
bool var_10 = (bool)0;
int zero = 0;
unsigned short var_18 = (unsigned short)12658;
signed char var_19 = (signed char)9;
void init() {
}

void checksum() {
    value_mismatch |= var_18 != (unsigned short)0;
    value_mismatch |= var_19 != (signed char)0;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_10, zero, &var_18, &var_19);
  checksum();
}
