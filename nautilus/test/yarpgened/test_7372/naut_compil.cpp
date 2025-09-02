/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 7372
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=7372
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
void test(val<signed char> var_3, val<int> zero, val<long long int*> var_11, val<short*> var_12, val<unsigned short*> var_13) {
    *var_11 = ((/* implicit */val<long long int>) var_3);
    *var_12 += (val<short>)2047;
    *var_13 = ((/* implicit */val<unsigned short>) ((3674226974U) / (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) (val<bool>)1)))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)-115;
int zero = 0;
long long int var_11 = 7172671868961152204LL;
short var_12 = (short)-9540;
unsigned short var_13 = (unsigned short)26966;
void init() {
}

void checksum() {
    value_mismatch |= var_11 != -115LL;
    value_mismatch |= var_12 != (short)-7493;
    value_mismatch |= var_13 != (unsigned short)16670;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_3, zero, &var_11, &var_12, &var_13);
  checksum();
  assert(!value_mismatch);
}
