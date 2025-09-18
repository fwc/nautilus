/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 6908
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=6908
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
void test(val<long long int> var_2, val<long long int> var_3, val<int> zero, val<unsigned char*> var_12, val<int*> var_13) {
    *var_12 = ((/* implicit */val<unsigned char>) var_3);
    *var_13 = ((/* implicit */val<int>) var_2);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -8714575489106811858LL;
long long int var_3 = -3618933047910104536LL;
int zero = 0;
unsigned char var_12 = (unsigned char)111;
int var_13 = 874366425;
void init() {
}

void checksum() {
    value_mismatch |= var_12 != (unsigned char)40;
    value_mismatch |= var_13 != -1284086738;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_2, var_3, zero, &var_12, &var_13);
  checksum();
}
