/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 4476
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=4476
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
void test(val<int> var_2, val<short> var_5, val<unsigned long long int> var_11, val<int> zero, val<unsigned short*> var_12, val<unsigned long long int*> var_13, val<unsigned char*> var_14) {
    *var_12 = ((/* implicit */val<unsigned short>) var_5);
    *var_13 = ((/* implicit */val<unsigned long long int>) (~(var_2)));
    *var_14 = ((/* implicit */val<unsigned char>) var_11);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -1768639056;
short var_5 = (short)-18191;
unsigned long long int var_11 = 15027557571421608743ULL;
int zero = 0;
unsigned short var_12 = (unsigned short)3406;
unsigned long long int var_13 = 12654350925137303968ULL;
unsigned char var_14 = (unsigned char)170;
void init() {
}

void checksum() {
    value_mismatch |= var_12 != (unsigned short)47345;
    value_mismatch |= var_13 != 1768639055ULL;
    value_mismatch |= var_14 != (unsigned char)39;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_2, var_5, var_11, zero, &var_12, &var_13, &var_14);
  checksum();
  assert(!value_mismatch);
}
