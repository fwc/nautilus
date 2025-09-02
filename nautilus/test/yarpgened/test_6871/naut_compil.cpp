/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 6871
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=6871
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
void test(val<signed char> var_1, val<short> var_6, val<signed char> var_7, val<unsigned char> var_14, val<int> zero, val<unsigned int*> var_18, val<unsigned int*> var_19) {
    *var_18 -= ((/* implicit */val<unsigned int>) min((var_14), (((/* implicit */val<unsigned char>) var_7))));
    *var_19 = ((/* implicit */val<unsigned int>) ((((/* implicit */val<bool>) var_6)) ? (((/* implicit */val<long long int>) ((/* implicit */val<int>) ((val<bool>) ((((/* implicit */val<bool>) 0LL)) ? (0LL) : (((/* implicit */val<long long int>) ((/* implicit */val<int>) (val<bool>)1)))))))) : (((((/* implicit */val<bool>) ((val<unsigned char>) var_1))) ? (((/* implicit */val<long long int>) ((/* implicit */val<int>) var_7))) : (max((0LL), (((/* implicit */val<long long int>) (val<bool>)1))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)104;
short var_6 = (short)17829;
signed char var_7 = (signed char)-40;
unsigned char var_14 = (unsigned char)15;
int zero = 0;
unsigned int var_18 = 3195642912U;
unsigned int var_19 = 4278023351U;
void init() {
}

void checksum() {
    value_mismatch |= var_18 != 3195642897U;
    value_mismatch |= var_19 != 1U;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_6, var_7, var_14, zero, &var_18, &var_19);
  checksum();
  assert(!value_mismatch);
}
