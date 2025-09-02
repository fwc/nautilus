/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 5812
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=5812
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
void test(val<signed char> var_0, val<bool> var_1, val<long long int> var_2, val<bool> var_4, val<bool> var_5, val<bool> var_8, val<long long int> var_9, val<int> zero, val<short*> var_12, val<signed char*> var_13, val<unsigned long long int*> var_14, val<bool*> var_15, val<bool*> var_16) {
    *var_12 = ((/* implicit */val<short>) ((var_2) % (((/* implicit */val<long long int>) ((((/* implicit */val<bool>) max((893924098U), (((/* implicit */val<unsigned int>) var_8))))) ? (3401043198U) : (((/* implicit */val<unsigned int>) (~(((/* implicit */val<int>) var_4))))))))));
    *var_13 = ((/* implicit */val<signed char>) ((((/* implicit */val<bool>) var_9)) && (((/* implicit */val<bool>) ((((/* implicit */val<bool>) (val<signed char>)(-127 - 1))) ? (((/* implicit */val<int>) (val<signed char>)69)) : (((/* implicit */val<int>) (val<short>)3459)))))));
    *var_14 = ((/* implicit */val<unsigned long long int>) min((var_5), (var_1)));
    *var_15 = ((/* implicit */val<bool>) var_0);
    *var_16 = ((/* implicit */val<bool>) (-9223372036854775807LL - 1LL));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)98;
bool var_1 = (bool)1;
long long int var_2 = -2721142611961768446LL;
bool var_4 = (bool)1;
bool var_5 = (bool)0;
bool var_8 = (bool)0;
long long int var_9 = 2650768116532340787LL;
int zero = 0;
short var_12 = (short)23158;
signed char var_13 = (signed char)75;
unsigned long long int var_14 = 11179606438202164287ULL;
bool var_15 = (bool)0;
bool var_16 = (bool)1;
void init() {
}

void checksum() {
    value_mismatch |= var_12 != (short)-11678;
    value_mismatch |= var_13 != (signed char)1;
    value_mismatch |= var_14 != 0ULL;
    value_mismatch |= var_15 != (bool)1;
    value_mismatch |= var_16 != (bool)1;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_2, var_4, var_5, var_8, var_9, zero, &var_12, &var_13, &var_14, &var_15, &var_16);
  checksum();
  assert(!value_mismatch);
}
