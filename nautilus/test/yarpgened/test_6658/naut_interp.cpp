/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 6658
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=6658
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
void test(val<short> var_6, val<short> var_11, val<int> zero, val<short*> var_19, val<signed char*> var_20, val<signed char*> var_21) {
    *var_19 = ((/* implicit */val<short>) ((((/* implicit */val<bool>) -9223372036854775797LL)) ? (-2449242913373296110LL) : (((/* implicit */val<long long int>) min(((~(((/* implicit */val<int>) var_11)))), (((/* implicit */val<int>) (val<short>)15159)))))));
    *var_20 = ((/* implicit */val<signed char>) (val<unsigned short>)47662);
    *var_21 = ((/* implicit */val<signed char>) var_6);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_6 = (short)-22056;
short var_11 = (short)-30378;
int zero = 0;
short var_19 = (short)-1153;
signed char var_20 = (signed char)82;
signed char var_21 = (signed char)-18;
void init() {
}

void checksum() {
    value_mismatch |= var_19 != (short)-5614;
    value_mismatch |= var_20 != (signed char)46;
    value_mismatch |= var_21 != (signed char)-40;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_6, var_11, zero, &var_19, &var_20, &var_21);
  checksum();
  assert(!value_mismatch);
}
