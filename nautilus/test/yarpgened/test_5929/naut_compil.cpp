/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 5929
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=5929
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
void test(val<bool> var_1, val<short> var_15, val<int> zero, val<long long int*> var_17, val<int*> var_18) {
    *var_17 = ((/* implicit */val<long long int>) ((2190392359U) <= (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) min((((/* implicit */val<unsigned short>) var_1)), (((val<unsigned short>) 1307910311U))))))));
    *var_18 = ((/* implicit */val<int>) var_15);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

bool var_1 = (bool)1;
short var_15 = (short)1029;
int zero = 0;
long long int var_17 = -1400981516837899037LL;
int var_18 = 1465901436;
void init() {
}

void checksum() {
    value_mismatch |= var_17 != 0LL;
    value_mismatch |= var_18 != 1029;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_15, zero, &var_17, &var_18);
  checksum();
}
