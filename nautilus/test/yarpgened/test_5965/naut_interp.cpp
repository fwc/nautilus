/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 5965
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=5965
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
void test(val<bool> var_1, val<signed char> var_6, val<bool> var_10, val<short> var_16, val<int> zero, val<signed char*> var_17, val<signed char*> var_18, val<unsigned char*> var_19, val<long long int*> var_20) {
    *var_17 = ((/* implicit */val<signed char>) ((((/* implicit */val<int>) var_10)) >> ((((-(((/* implicit */val<int>) (val<unsigned char>)221)))) + (249)))));
    *var_18 = ((/* implicit */val<signed char>) ((((/* implicit */val<long long int>) ((/* implicit */val<int>) var_1))) / (((val<long long int>) max((((/* implicit */val<long long int>) var_16)), (3204657047363307982LL))))));
    *var_19 = ((/* implicit */val<unsigned char>) (val<short>)32767);
    *var_20 = ((/* implicit */val<long long int>) var_6);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

bool var_1 = (bool)0;
signed char var_6 = (signed char)44;
bool var_10 = (bool)1;
short var_16 = (short)11068;
int zero = 0;
signed char var_17 = (signed char)126;
signed char var_18 = (signed char)23;
unsigned char var_19 = (unsigned char)96;
long long int var_20 = 7409274104853058464LL;
void init() {
}

void checksum() {
    value_mismatch |= var_17 != (signed char)0;
    value_mismatch |= var_18 != (signed char)0;
    value_mismatch |= var_19 != (unsigned char)255;
    value_mismatch |= var_20 != 44LL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_6, var_10, var_16, zero, &var_17, &var_18, &var_19, &var_20);
  checksum();
  assert(!value_mismatch);
}
