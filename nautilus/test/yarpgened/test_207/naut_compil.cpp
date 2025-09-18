/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 207
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=207
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
void test(val<long long int> var_3, val<unsigned int> var_11, val<int> zero, val<short*> var_18, val<unsigned long long int*> var_19) {
    *var_18 = ((/* implicit */val<short>) ((val<unsigned long long int>) (!(((/* implicit */val<bool>) ((val<short>) var_3))))));
    *var_19 = ((/* implicit */val<unsigned long long int>) var_11);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = -3759260495774382720LL;
unsigned int var_11 = 3985901279U;
int zero = 0;
short var_18 = (short)-2226;
unsigned long long int var_19 = 10215366680851467564ULL;
void init() {
}

void checksum() {
    value_mismatch |= var_18 != (short)0;
    value_mismatch |= var_19 != 3985901279ULL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_3, var_11, zero, &var_18, &var_19);
  checksum();
}
