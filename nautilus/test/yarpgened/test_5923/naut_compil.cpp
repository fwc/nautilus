/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 5923
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=5923
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
void test(val<int> var_2, val<long long int> var_3, val<unsigned int> var_5, val<unsigned long long int> var_7, val<signed char> var_8, val<bool> var_12, val<int> zero, val<signed char*> var_15, val<unsigned long long int*> var_16) {
    *var_15 = ((/* implicit */val<signed char>) (~(((((/* implicit */val<bool>) (~(var_2)))) ? (max((var_3), (((/* implicit */val<long long int>) var_8)))) : (((/* implicit */val<long long int>) ((/* implicit */val<int>) var_12)))))));
    *var_16 = (-(min((((/* implicit */val<unsigned long long int>) (!(((/* implicit */val<bool>) var_5))))), (var_7))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -1464648461;
long long int var_3 = -7049782688119888928LL;
unsigned int var_5 = 3636525976U;
unsigned long long int var_7 = 234905601514938412ULL;
signed char var_8 = (signed char)51;
bool var_12 = (bool)1;
int zero = 0;
signed char var_15 = (signed char)-99;
unsigned long long int var_16 = 15885139293653788731ULL;
void init() {
}

void checksum() {
    value_mismatch |= var_15 != (signed char)-52;
    value_mismatch |= var_16 != 0ULL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_2, var_3, var_5, var_7, var_8, var_12, zero, &var_15, &var_16);
  checksum();
  assert(!value_mismatch);
}
