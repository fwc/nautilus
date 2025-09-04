/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 929
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=929
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
void test(val<bool> var_0, val<int> var_2, val<unsigned short> var_8, val<unsigned long long int> var_10, val<int> zero, val<long long int*> var_12, val<signed char*> var_13, val<unsigned char*> var_14, val<unsigned int*> var_15) {
    *var_12 = ((/* implicit */val<long long int>) var_2);
    *var_13 *= ((/* implicit */val<signed char>) (~(((/* implicit */val<int>) var_8))));
    *var_14 = ((/* implicit */val<unsigned char>) ((var_10) / (var_10)));
    *var_15 = ((/* implicit */val<unsigned int>) var_0);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

bool var_0 = (bool)0;
int var_2 = 1266133864;
unsigned short var_8 = (unsigned short)29023;
unsigned long long int var_10 = 4411629801445788017ULL;
int zero = 0;
long long int var_12 = -6866418475034208076LL;
signed char var_13 = (signed char)-71;
unsigned char var_14 = (unsigned char)65;
unsigned int var_15 = 1748923890U;
void init() {
}

void checksum() {
    value_mismatch |= var_12 != 1266133864LL;
    value_mismatch |= var_13 != (signed char)-96;
    value_mismatch |= var_14 != (unsigned char)1;
    value_mismatch |= var_15 != 0U;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_2, var_8, var_10, zero, &var_12, &var_13, &var_14, &var_15);
  checksum();
  assert(!value_mismatch);
}
