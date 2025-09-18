/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 8448
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=8448
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
void test(val<signed char> var_0, val<long long int> var_3, val<int> var_10, val<int> zero, val<unsigned long long int*> var_16, val<unsigned char*> var_17, val<unsigned char*> var_18) {
    *var_16 = ((/* implicit */val<unsigned long long int>) min((*var_16), (((/* implicit */val<unsigned long long int>) ((val<long long int>) var_3)))));
    *var_17 = ((/* implicit */val<unsigned char>) var_0);
    *var_18 = ((/* implicit */val<unsigned char>) max((*var_18), (((/* implicit */val<unsigned char>) var_10))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)42;
long long int var_3 = -845303023980803369LL;
int var_10 = -122075548;
int zero = 0;
unsigned long long int var_16 = 10805222707363675479ULL;
unsigned char var_17 = (unsigned char)107;
unsigned char var_18 = (unsigned char)133;
void init() {
}

void checksum() {
    value_mismatch |= var_16 != 10805222707363675479ULL;
    value_mismatch |= var_17 != (unsigned char)42;
    value_mismatch |= var_18 != (unsigned char)133;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_3, var_10, zero, &var_16, &var_17, &var_18);
  checksum();
}
