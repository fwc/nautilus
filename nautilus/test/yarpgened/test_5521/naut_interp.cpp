/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 5521
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=5521
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
void test(val<signed char> var_2, val<bool> var_4, val<int> var_5, val<unsigned long long int> var_7, val<int> zero, val<unsigned long long int*> var_14, val<unsigned long long int*> var_15, val<unsigned short*> var_16, val<short*> var_17) {
    *var_14 = ((/* implicit */val<unsigned long long int>) (+(((/* implicit */val<int>) var_2))));
    *var_15 = ((/* implicit */val<unsigned long long int>) var_5);
    *var_16 = ((/* implicit */val<unsigned short>) max(((-((+(((/* implicit */val<int>) var_4)))))), (((/* implicit */val<int>) (val<bool>)1))));
    *var_17 = ((/* implicit */val<short>) ((((/* implicit */val<bool>) var_7)) && (((/* implicit */val<bool>) min((13150378340744648113ULL), (((/* implicit */val<unsigned long long int>) (-2147483647 - 1))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)16;
bool var_4 = (bool)0;
int var_5 = 1926694791;
unsigned long long int var_7 = 11705156669072068991ULL;
int zero = 0;
unsigned long long int var_14 = 1119017783249036836ULL;
unsigned long long int var_15 = 4696506728833703953ULL;
unsigned short var_16 = (unsigned short)18743;
short var_17 = (short)-939;
void init() {
}

void checksum() {
    value_mismatch |= var_14 != 16ULL;
    value_mismatch |= var_15 != 1926694791ULL;
    value_mismatch |= var_16 != (unsigned short)1;
    value_mismatch |= var_17 != (short)1;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_2, var_4, var_5, var_7, zero, &var_14, &var_15, &var_16, &var_17);
  checksum();
  assert(!value_mismatch);
}
