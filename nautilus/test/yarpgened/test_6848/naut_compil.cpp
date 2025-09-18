/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 6848
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=6848
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
void test(val<signed char> var_2, val<long long int> var_11, val<short> var_12, val<int> zero, val<signed char*> var_17, val<unsigned short*> var_18) {
    *var_17 = ((/* implicit */val<signed char>) var_11);
    *var_18 = ((/* implicit */val<unsigned short>) max((((/* implicit */val<long long int>) ((max((((/* implicit */val<long long int>) var_2)), (-9083052815221640668LL))) > (((/* implicit */val<long long int>) (+(((/* implicit */val<int>) var_12)))))))), (-8272792886445248871LL)));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)21;
long long int var_11 = -8394041484639033803LL;
short var_12 = (short)-6203;
int zero = 0;
signed char var_17 = (signed char)116;
unsigned short var_18 = (unsigned short)17854;
void init() {
}

void checksum() {
    value_mismatch |= var_17 != (signed char)53;
    value_mismatch |= var_18 != (unsigned short)1;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_2, var_11, var_12, zero, &var_17, &var_18);
  checksum();
}
