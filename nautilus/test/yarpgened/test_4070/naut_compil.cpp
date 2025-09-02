/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 4070
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=4070
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
void test(val<signed char> var_3, val<signed char> var_11, val<unsigned long long int> var_12, val<int> zero, val<unsigned long long int*> var_16, val<bool*> var_17, val<unsigned int*> var_18) {
    *var_16 = ((/* implicit */val<unsigned long long int>) var_11);
    *var_17 = ((/* implicit */val<bool>) max((var_12), (((/* implicit */val<unsigned long long int>) (val<signed char>)126))));
    *var_18 = ((/* implicit */val<unsigned int>) min((((((/* implicit */val<int>) min((var_11), (var_11)))) + (((/* implicit */val<int>) (val<signed char>)-127)))), (((/* implicit */val<int>) var_3))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)-28;
signed char var_11 = (signed char)-8;
unsigned long long int var_12 = 9985476608058486095ULL;
int zero = 0;
unsigned long long int var_16 = 216547825189293389ULL;
bool var_17 = (bool)1;
unsigned int var_18 = 2624742363U;
void init() {
}

void checksum() {
    value_mismatch |= var_16 != 18446744073709551608ULL;
    value_mismatch |= var_17 != (bool)1;
    value_mismatch |= var_18 != 4294967161U;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_3, var_11, var_12, zero, &var_16, &var_17, &var_18);
  checksum();
  assert(!value_mismatch);
}
