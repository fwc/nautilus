/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 5141
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=5141
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
void test(val<signed char> var_0, val<int> var_4, val<long long int> var_9, val<short> var_11, val<long long int> var_13, val<unsigned long long int> var_14, val<int> zero, val<unsigned int*> var_20, val<signed char*> var_21, val<unsigned long long int*> var_22, val<long long int*> var_23) {
    *var_20 = ((/* implicit */val<unsigned int>) (!(((/* implicit */val<bool>) max((((/* implicit */val<unsigned long long int>) ((val<long long int>) var_4))), (var_14))))));
    *var_21 *= ((/* implicit */val<signed char>) ((((/* implicit */val<bool>) 9045447187843943212ULL)) ? (max((((/* implicit */val<long long int>) var_11)), (((val<long long int>) -1552119991)))) : (((/* implicit */val<long long int>) ((val<int>) ((((var_13) + (9223372036854775807LL))) >> (((-1552120005) + (1552120049)))))))));
    *var_22 += ((/* implicit */val<unsigned long long int>) var_9);
    *var_23 = ((/* implicit */val<long long int>) ((((/* implicit */val<bool>) var_0)) && (((/* implicit */val<bool>) (~(min((9045447187843943230ULL), (((/* implicit */val<unsigned long long int>) var_11)))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-74;
int var_4 = 675848502;
long long int var_9 = 2046696869085974737LL;
short var_11 = (short)-32069;
long long int var_13 = -4078903662408660685LL;
unsigned long long int var_14 = 7416567490230695496ULL;
int zero = 0;
unsigned int var_20 = 4097037485U;
signed char var_21 = (signed char)2;
unsigned long long int var_22 = 14380556601292848890ULL;
long long int var_23 = 281114829402354662LL;
void init() {
}

void checksum() {
    value_mismatch |= var_20 != 0U;
    value_mismatch |= var_21 != (signed char)118;
    value_mismatch |= var_22 != 16427253470378823627ULL;
    value_mismatch |= var_23 != 1LL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_4, var_9, var_11, var_13, var_14, zero, &var_20, &var_21, &var_22, &var_23);
  checksum();
  assert(!value_mismatch);
}
