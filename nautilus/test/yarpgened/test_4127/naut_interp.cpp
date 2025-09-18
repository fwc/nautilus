/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 4127
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=4127
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
void test(val<signed char> var_5, val<unsigned long long int> var_11, val<unsigned long long int> var_14, val<int> zero, val<signed char*> var_15, val<signed char*> var_16, val<short*> var_17) {
    *var_15 = ((/* implicit */val<signed char>) ((((/* implicit */val<bool>) var_5)) ? (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) (val<unsigned char>)12))) : ((+(var_14)))));
    *var_16 = ((/* implicit */val<signed char>) max(((val<unsigned short>)18308), ((val<unsigned short>)18295)));
    *var_17 = ((/* implicit */val<short>) var_11);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_5 = (signed char)102;
unsigned long long int var_11 = 1561791369495325784ULL;
unsigned long long int var_14 = 3674963763615461399ULL;
int zero = 0;
signed char var_15 = (signed char)-98;
signed char var_16 = (signed char)-82;
short var_17 = (short)20169;
void init() {
}

void checksum() {
    value_mismatch |= var_15 != (signed char)12;
    value_mismatch |= var_16 != (signed char)-124;
    value_mismatch |= var_17 != (short)11352;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_5, var_11, var_14, zero, &var_15, &var_16, &var_17);
  checksum();
}
