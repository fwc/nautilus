/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 9180
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=9180
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
void test(val<bool> var_6, val<int> zero, val<unsigned long long int*> var_14, val<unsigned long long int*> var_15) {
    *var_14 = ((/* implicit */val<unsigned long long int>) var_6);
    *var_15 = ((/* implicit */val<unsigned long long int>) (!(((/* implicit */val<bool>) (-(((/* implicit */val<int>) (val<signed char>)-15)))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

bool var_6 = (bool)0;
int zero = 0;
unsigned long long int var_14 = 16687635147215628918ULL;
unsigned long long int var_15 = 10657526693474716674ULL;
void init() {
}

void checksum() {
    value_mismatch |= var_14 != 0ULL;
    value_mismatch |= var_15 != 0ULL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_6, zero, &var_14, &var_15);
  checksum();
}
