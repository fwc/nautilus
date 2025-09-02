/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 8060
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=8060
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
void test(val<unsigned int> var_0, val<unsigned int> var_2, val<unsigned int> var_4, val<signed char> var_5, val<long long int> var_6, val<unsigned int> var_7, val<int> zero, val<signed char*> var_10, val<signed char*> var_11, val<unsigned int*> var_12) {
    *var_10 = ((/* implicit */val<signed char>) min((*var_10), (((/* implicit */val<signed char>) (!(((/* implicit */val<bool>) ((((val<unsigned int>) var_2)) % (var_7)))))))));
    *var_11 = ((/* implicit */val<signed char>) min((865517452U), (4194303U)));
    *var_12 -= ((/* implicit */val<unsigned int>) max((((((((/* implicit */val<bool>) var_0)) ? (10621845460251916601ULL) : (((/* implicit */val<unsigned long long int>) var_4)))) / (((/* implicit */val<unsigned long long int>) ((val<long long int>) var_2))))), (((((/* implicit */val<bool>) ((((/* implicit */val<bool>) var_0)) ? (var_7) : (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_5)))))) ? (((/* implicit */val<unsigned long long int>) var_6)) : (((((/* implicit */val<bool>) (val<signed char>)-110)) ? (6438112814373426285ULL) : (((/* implicit */val<unsigned long long int>) 865517439U))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 768304486U;
unsigned int var_2 = 2210449965U;
unsigned int var_4 = 229722413U;
signed char var_5 = (signed char)88;
long long int var_6 = -3565260757370285901LL;
unsigned int var_7 = 2809795617U;
int zero = 0;
signed char var_10 = (signed char)-6;
signed char var_11 = (signed char)82;
unsigned int var_12 = 773774590U;
void init() {
}

void checksum() {
    value_mismatch |= var_10 != (signed char)-6;
    value_mismatch |= var_11 != (signed char)-1;
    value_mismatch |= var_12 != 483462219U;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_2, var_4, var_5, var_6, var_7, zero, &var_10, &var_11, &var_12);
  checksum();
  assert(!value_mismatch);
}
