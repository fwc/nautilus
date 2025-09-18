/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 7108
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=7108
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
void test(val<short> var_5, val<unsigned short> var_9, val<int> zero, val<unsigned long long int*> var_10, val<signed char*> var_11) {
    *var_10 |= ((/* implicit */val<unsigned long long int>) var_5);
    *var_11 = ((/* implicit */val<signed char>) var_9);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_5 = (short)4165;
unsigned short var_9 = (unsigned short)60099;
int zero = 0;
unsigned long long int var_10 = 18317394531504792792ULL;
signed char var_11 = (signed char)-1;
void init() {
}

void checksum() {
    value_mismatch |= var_10 != 18317394531504796893ULL;
    value_mismatch |= var_11 != (signed char)-61;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_5, var_9, zero, &var_10, &var_11);
  checksum();
}
