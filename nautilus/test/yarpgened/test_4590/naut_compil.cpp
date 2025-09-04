/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 4590
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=4590
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
void test(val<signed char> var_0, val<unsigned int> var_1, val<long long int> var_4, val<unsigned long long int> var_5, val<signed char> var_8, val<unsigned int> var_10, val<int> zero, val<unsigned int*> var_14, val<signed char*> var_15) {
    *var_14 = ((/* implicit */val<unsigned int>) (!(((/* implicit */val<bool>) ((((((/* implicit */val<bool>) var_5)) ? (-1LL) : (((/* implicit */val<long long int>) ((/* implicit */val<int>) var_8))))) | (((/* implicit */val<long long int>) ((/* implicit */val<int>) var_0))))))));
    *var_15 = ((/* implicit */val<signed char>) ((((/* implicit */val<bool>) min((((val<unsigned char>) var_1)), (((/* implicit */val<unsigned char>) ((13594665106526616238ULL) != (((/* implicit */val<unsigned long long int>) var_1)))))))) ? (((/* implicit */val<unsigned long long int>) ((((/* implicit */val<bool>) var_10)) ? (((3480830837U) | (814136458U))) : (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) (!(((/* implicit */val<bool>) var_4))))))))) : (((((((/* implicit */val<bool>) 814136449U)) ? (4852078967182935384ULL) : (13594665106526616238ULL))) | (((/* implicit */val<unsigned long long int>) (+(var_1))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-20;
unsigned int var_1 = 2941125829U;
long long int var_4 = 9070351213962825067LL;
unsigned long long int var_5 = 2701937776596815061ULL;
signed char var_8 = (signed char)99;
unsigned int var_10 = 2552144856U;
int zero = 0;
unsigned int var_14 = 1885705462U;
signed char var_15 = (signed char)-22;
void init() {
}

void checksum() {
    value_mismatch |= var_14 != 0U;
    value_mismatch |= var_15 != (signed char)-1;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_4, var_5, var_8, var_10, zero, &var_14, &var_15);
  checksum();
  assert(!value_mismatch);
}
