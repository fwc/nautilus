/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 4554
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=4554
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
void test(val<short> var_4, val<unsigned char> var_7, val<int> zero, val<short*> var_17, val<short*> var_18, val<short*> var_19, val<short*> var_20) {
    *var_17 = ((val<short>) var_7);
    *var_18 = ((/* implicit */val<short>) (!(((/* implicit */val<bool>) ((val<short>) max(((val<unsigned char>)118), ((val<unsigned char>)127)))))));
    *var_19 = ((/* implicit */val<short>) (val<unsigned char>)237);
    *var_20 = ((/* implicit */val<short>) ((val<unsigned char>) ((((/* implicit */val<int>) min((var_4), ((val<short>)30702)))) != (((-1991274124) - (((/* implicit */val<int>) (val<short>)-32748)))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)21854;
unsigned char var_7 = (unsigned char)222;
int zero = 0;
short var_17 = (short)24749;
short var_18 = (short)-32166;
short var_19 = (short)-9745;
short var_20 = (short)-19138;
void init() {
}

void checksum() {
    value_mismatch |= var_17 != (short)222;
    value_mismatch |= var_18 != (short)0;
    value_mismatch |= var_19 != (short)237;
    value_mismatch |= var_20 != (short)1;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_4, var_7, zero, &var_17, &var_18, &var_19, &var_20);
  checksum();
}
