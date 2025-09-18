/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 3923
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=3923
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
void test(val<signed char> var_1, val<signed char> var_3, val<unsigned short> var_9, val<signed char> var_11, val<int> zero, val<unsigned short*> var_14, val<long long int*> var_15, val<short*> var_16) {
    *var_14 = ((/* implicit */val<unsigned short>) var_1);
    *var_15 = ((/* implicit */val<long long int>) max((((/* implicit */val<signed char>) ((((/* implicit */val<bool>) var_3)) && (((/* implicit */val<bool>) var_1))))), (var_11)));
    *var_16 = ((/* implicit */val<short>) var_9);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-117;
signed char var_3 = (signed char)-93;
unsigned short var_9 = (unsigned short)46185;
signed char var_11 = (signed char)95;
int zero = 0;
unsigned short var_14 = (unsigned short)55132;
long long int var_15 = -4621622869662563383LL;
short var_16 = (short)-11636;
void init() {
}

void checksum() {
    value_mismatch |= var_14 != (unsigned short)65419;
    value_mismatch |= var_15 != 95LL;
    value_mismatch |= var_16 != (short)-19351;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_3, var_9, var_11, zero, &var_14, &var_15, &var_16);
  checksum();
}
