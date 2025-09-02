/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 4022
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=4022
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
void test(val<long long int> var_1, val<unsigned short> var_2, val<signed char> var_4, val<int> var_11, val<unsigned char> var_13, val<unsigned long long int> var_15, val<int> zero, val<signed char*> var_20, val<signed char*> var_21, val<int*> var_22, val<unsigned char*> var_23) {
    *var_20 = ((/* implicit */val<signed char>) max((*var_20), (var_4)));
    *var_21 = ((/* implicit */val<signed char>) ((((/* implicit */val<long long int>) (~((~(var_11)))))) | (var_1)));
    *var_22 = ((/* implicit */val<int>) (!(((/* implicit */val<bool>) (~(((/* implicit */val<int>) var_2)))))));
    *var_23 = ((/* implicit */val<unsigned char>) ((min((max((var_15), (((/* implicit */val<unsigned long long int>) (val<signed char>)127)))), (((/* implicit */val<unsigned long long int>) ((val<int>) (-9223372036854775807LL - 1LL)))))) | (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_13)))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -468246131892336851LL;
unsigned short var_2 = (unsigned short)47480;
signed char var_4 = (signed char)97;
int var_11 = -313770816;
unsigned char var_13 = (unsigned char)163;
unsigned long long int var_15 = 13394421026842312651ULL;
int zero = 0;
signed char var_20 = (signed char)-92;
signed char var_21 = (signed char)65;
int var_22 = -733938760;
unsigned char var_23 = (unsigned char)74;
void init() {
}

void checksum() {
    value_mismatch |= var_20 != (signed char)97;
    value_mismatch |= var_21 != (signed char)-19;
    value_mismatch |= var_22 != 0;
    value_mismatch |= var_23 != (unsigned char)163;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_2, var_4, var_11, var_13, var_15, zero, &var_20, &var_21, &var_22, &var_23);
  checksum();
  assert(!value_mismatch);
}
