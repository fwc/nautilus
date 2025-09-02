/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 320
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=320
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
void test(val<unsigned long long int> var_2, val<signed char> var_4, val<signed char> var_6, val<int> zero, val<short*> var_10, val<unsigned char*> var_11, val<unsigned int*> var_12) {
    *var_10 = ((/* implicit */val<short>) (+((+((+(((/* implicit */val<int>) var_4))))))));
    *var_11 = ((/* implicit */val<unsigned char>) max((*var_11), (((/* implicit */val<unsigned char>) (!((!(((/* implicit */val<bool>) (-(var_2)))))))))));
    *var_12 = ((/* implicit */val<unsigned int>) (~(((/* implicit */val<int>) (!(((/* implicit */val<bool>) (-(((/* implicit */val<int>) var_6))))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 2495204826901252770ULL;
signed char var_4 = (signed char)-34;
signed char var_6 = (signed char)-31;
int zero = 0;
short var_10 = (short)3494;
unsigned char var_11 = (unsigned char)16;
unsigned int var_12 = 3964271587U;
void init() {
}

void checksum() {
    value_mismatch |= var_10 != (short)-34;
    value_mismatch |= var_11 != (unsigned char)16;
    value_mismatch |= var_12 != 4294967295U;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_2, var_4, var_6, zero, &var_10, &var_11, &var_12);
  checksum();
  assert(!value_mismatch);
}
