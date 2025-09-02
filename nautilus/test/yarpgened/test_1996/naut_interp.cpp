/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 1996
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=1996
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
void test(val<unsigned int> var_1, val<unsigned char> var_5, val<signed char> var_9, val<int> zero, val<long long int*> var_11, val<unsigned short*> var_12, val<long long int*> var_13) {
    *var_11 = ((/* implicit */val<long long int>) ((val<short>) max((max((1348785081U), (1348785081U))), (((/* implicit */val<unsigned int>) ((val<short>) var_5))))));
    *var_12 += ((/* implicit */val<unsigned short>) var_9);
    *var_13 = ((/* implicit */val<long long int>) min((*var_13), (((/* implicit */val<long long int>) var_1))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1814799953U;
unsigned char var_5 = (unsigned char)126;
signed char var_9 = (signed char)-31;
int zero = 0;
long long int var_11 = 6421897322650155365LL;
unsigned short var_12 = (unsigned short)16020;
long long int var_13 = 6363662850336394534LL;
void init() {
}

void checksum() {
    value_mismatch |= var_11 != -11335LL;
    value_mismatch |= var_12 != (unsigned short)15989;
    value_mismatch |= var_13 != 1814799953LL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_5, var_9, zero, &var_11, &var_12, &var_13);
  checksum();
  assert(!value_mismatch);
}
