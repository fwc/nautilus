/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 7778
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=7778
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
void test(val<short> var_1, val<short> var_2, val<short> var_6, val<short> var_12, val<short> var_13, val<short> var_14, val<int> zero, val<short*> var_16, val<short*> var_17) {
    *var_16 = ((/* implicit */val<short>) min((min((((/* implicit */val<int>) max((var_14), (var_1)))), (((((/* implicit */val<int>) var_2)) & (((/* implicit */val<int>) (val<short>)31050)))))), (max((((/* implicit */val<int>) var_6)), ((~(((/* implicit */val<int>) var_13))))))));
    *var_17 |= min((var_12), ((val<short>)32767));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)9177;
short var_2 = (short)30641;
short var_6 = (short)1849;
short var_12 = (short)-22767;
short var_13 = (short)27717;
short var_14 = (short)-8762;
int zero = 0;
short var_16 = (short)-2421;
short var_17 = (short)21006;
void init() {
}

void checksum() {
    value_mismatch |= var_16 != (short)1849;
    value_mismatch |= var_17 != (short)-2273;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_2, var_6, var_12, var_13, var_14, zero, &var_16, &var_17);
  checksum();
}
