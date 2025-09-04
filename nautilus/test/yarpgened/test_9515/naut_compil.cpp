/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 9515
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=9515
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
void test(val<short> var_6, val<unsigned short> var_7, val<short> var_12, val<int> zero, val<signed char*> var_19, val<unsigned long long int*> var_20, val<short*> var_21) {
    *var_19 = ((/* implicit */val<signed char>) var_12);
    if (((/* implicit */val<bool>) var_6))
    {
        *var_20 = ((/* implicit */val<unsigned long long int>) (val<unsigned char>)0);
        *var_21 *= ((/* implicit */val<short>) var_7);
    }

}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_6 = (short)-22554;
unsigned short var_7 = (unsigned short)50887;
short var_12 = (short)-695;
int zero = 0;
signed char var_19 = (signed char)-70;
unsigned long long int var_20 = 11481206386146649519ULL;
short var_21 = (short)-30689;
void init() {
}

void checksum() {
    value_mismatch |= var_19 != (signed char)73;
    value_mismatch |= var_20 != 0ULL;
    value_mismatch |= var_21 != (short)-13799;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_6, var_7, var_12, zero, &var_19, &var_20, &var_21);
  checksum();
  assert(!value_mismatch);
}
