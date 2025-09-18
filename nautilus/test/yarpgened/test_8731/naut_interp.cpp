/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 8731
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=8731
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
void test(val<signed char> var_5, val<unsigned long long int> var_12, val<int> zero, val<unsigned int*> var_14, val<unsigned int*> var_15, val<short*> var_16) {
    *var_14 = (~(0U));
    *var_15 -= ((/* implicit */val<unsigned int>) var_5);
    *var_16 = ((/* implicit */val<short>) max((*var_16), (((/* implicit */val<short>) (-(((var_12) * (((/* implicit */val<unsigned long long int>) max((0U), (((/* implicit */val<unsigned int>) (val<bool>)0))))))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_5 = (signed char)-49;
unsigned long long int var_12 = 15471781377118325782ULL;
int zero = 0;
unsigned int var_14 = 3053695933U;
unsigned int var_15 = 2075891896U;
short var_16 = (short)-16949;
void init() {
}

void checksum() {
    value_mismatch |= var_14 != 4294967295U;
    value_mismatch |= var_15 != 2075891945U;
    value_mismatch |= var_16 != (short)0;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_5, var_12, zero, &var_14, &var_15, &var_16);
  checksum();
}
