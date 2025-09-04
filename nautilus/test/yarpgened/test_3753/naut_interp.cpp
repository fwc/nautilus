/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 3753
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=3753
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
void test(val<signed char> var_1, val<unsigned long long int> var_4, val<long long int> var_7, val<int> zero, val<signed char*> var_12, val<signed char*> var_13) {
    *var_12 = ((/* implicit */val<signed char>) ((val<long long int>) ((((/* implicit */val<bool>) ((val<short>) (val<bool>)0))) ? (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_1))) : (min((((/* implicit */val<unsigned long long int>) var_7)), (var_4))))));
    *var_13 = ((/* implicit */val<signed char>) var_7);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)28;
unsigned long long int var_4 = 1477426059290741802ULL;
long long int var_7 = -3797983816261099112LL;
int zero = 0;
signed char var_12 = (signed char)-44;
signed char var_13 = (signed char)7;
void init() {
}

void checksum() {
    value_mismatch |= var_12 != (signed char)42;
    value_mismatch |= var_13 != (signed char)-104;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_4, var_7, zero, &var_12, &var_13);
  checksum();
  assert(!value_mismatch);
}
