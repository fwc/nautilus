/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 8672
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=8672
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
void test(val<signed char> var_0, val<short> var_1, val<unsigned int> var_8, val<signed char> var_9, val<signed char> var_10, val<int> zero, val<long long int*> var_12, val<int*> var_13) {
    *var_12 = ((((/* implicit */val<bool>) (((-(-501086824))) & ((-(((/* implicit */val<int>) var_0))))))) ? (((((/* implicit */val<bool>) var_8)) ? (4001884866738340683LL) : (((/* implicit */val<long long int>) ((((/* implicit */val<bool>) var_1)) ? (((/* implicit */val<int>) (val<short>)28279)) : (((/* implicit */val<int>) var_10))))))) : (((/* implicit */val<long long int>) ((/* implicit */val<int>) (!(((/* implicit */val<bool>) var_1)))))));
    *var_13 |= ((/* implicit */val<int>) ((val<short>) var_9));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-47;
short var_1 = (short)-1631;
unsigned int var_8 = 3022005315U;
signed char var_9 = (signed char)26;
signed char var_10 = (signed char)-71;
int zero = 0;
long long int var_12 = 4362171590685831150LL;
int var_13 = -1619287788;
void init() {
}

void checksum() {
    value_mismatch |= var_12 != 4001884866738340683LL;
    value_mismatch |= var_13 != -1619287778;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_8, var_9, var_10, zero, &var_12, &var_13);
  checksum();
  assert(!value_mismatch);
}
