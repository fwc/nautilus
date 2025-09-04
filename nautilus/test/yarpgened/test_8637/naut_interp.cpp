/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 8637
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=8637
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
void test(val<int> var_2, val<unsigned int> var_5, val<unsigned long long int> var_10, val<short> var_11, val<int> zero, val<unsigned short*> var_20, val<long long int*> var_21, val<unsigned char*> var_22, val<short*> var_23) {
    *var_20 = ((/* implicit */val<unsigned short>) min((*var_20), (((/* implicit */val<unsigned short>) ((val<short>) var_10)))));
    *var_21 &= ((/* implicit */val<long long int>) ((val<unsigned short>) (~(((/* implicit */val<int>) ((val<bool>) var_2))))));
    *var_22 = ((/* implicit */val<unsigned char>) max((*var_22), (((/* implicit */val<unsigned char>) var_11))));
    *var_23 = ((/* implicit */val<short>) var_5);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -865091163;
unsigned int var_5 = 1948099938U;
unsigned long long int var_10 = 15175314236524255049ULL;
short var_11 = (short)12945;
int zero = 0;
unsigned short var_20 = (unsigned short)33956;
long long int var_21 = -8139599600513495476LL;
unsigned char var_22 = (unsigned char)6;
short var_23 = (short)-12361;
void init() {
}

void checksum() {
    value_mismatch |= var_20 != (unsigned short)33956;
    value_mismatch |= var_21 != 20044LL;
    value_mismatch |= var_22 != (unsigned char)145;
    value_mismatch |= var_23 != (short)-23198;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_2, var_5, var_10, var_11, zero, &var_20, &var_21, &var_22, &var_23);
  checksum();
  assert(!value_mismatch);
}
