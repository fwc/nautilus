/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 8725
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=8725
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
void test(val<bool> var_12, val<int> var_14, val<int> zero, val<signed char*> var_17, val<bool*> var_18, val<unsigned char*> var_19, val<short*> var_20) {
    *var_17 &= ((/* implicit */val<signed char>) var_14);
    *var_18 = ((/* implicit */val<bool>) ((((/* implicit */val<bool>) (val<short>)15)) ? (((/* implicit */val<int>) (val<signed char>)119)) : (((/* implicit */val<int>) (val<signed char>)39))));
    *var_19 = ((/* implicit */val<unsigned char>) var_14);
    *var_20 &= ((/* implicit */val<short>) var_12);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

bool var_12 = (bool)0;
int var_14 = 1615843686;
int zero = 0;
signed char var_17 = (signed char)105;
bool var_18 = (bool)1;
unsigned char var_19 = (unsigned char)185;
short var_20 = (short)802;
void init() {
}

void checksum() {
    value_mismatch |= var_17 != (signed char)96;
    value_mismatch |= var_18 != (bool)1;
    value_mismatch |= var_19 != (unsigned char)102;
    value_mismatch |= var_20 != (short)0;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_12, var_14, zero, &var_17, &var_18, &var_19, &var_20);
  checksum();
  assert(!value_mismatch);
}
