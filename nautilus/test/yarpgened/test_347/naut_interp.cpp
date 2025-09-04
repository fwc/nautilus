/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 347
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=347
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
void test(val<signed char> var_1, val<long long int> var_6, val<unsigned long long int> var_8, val<int> var_9, val<int> zero, val<long long int*> var_11, val<unsigned int*> var_12, val<bool*> var_13) {
    *var_11 = ((/* implicit */val<long long int>) max((var_8), (((/* implicit */val<unsigned long long int>) min((((/* implicit */val<long long int>) ((val<unsigned char>) (val<signed char>)-110))), (var_6))))));
    *var_12 = ((/* implicit */val<unsigned int>) ((((/* implicit */val<bool>) (-(((/* implicit */val<int>) (val<signed char>)110))))) ? (var_9) : (((val<int>) 9912321590183686356ULL))));
    *var_13 = ((/* implicit */val<bool>) ((val<signed char>) var_1));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)44;
long long int var_6 = 2975400561968945663LL;
unsigned long long int var_8 = 5017500600169041904ULL;
int var_9 = 1787596980;
int zero = 0;
long long int var_11 = -7194038892244776710LL;
unsigned int var_12 = 2136457786U;
bool var_13 = (bool)1;
void init() {
}

void checksum() {
    value_mismatch |= var_11 != 5017500600169041904LL;
    value_mismatch |= var_12 != 1787596980U;
    value_mismatch |= var_13 != (bool)1;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_6, var_8, var_9, zero, &var_11, &var_12, &var_13);
  checksum();
  assert(!value_mismatch);
}
