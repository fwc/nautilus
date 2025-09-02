/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 7885
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=7885
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
void test(val<signed char> var_1, val<signed char> var_7, val<unsigned long long int> var_8, val<int> zero, val<unsigned long long int*> var_10, val<unsigned int*> var_11, val<signed char*> var_12) {
    *var_10 = ((((/* implicit */val<bool>) (val<signed char>)112)) ? (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_1))) : (var_8));
    *var_11 = ((/* implicit */val<unsigned int>) max((*var_11), (((/* implicit */val<unsigned int>) var_7))));
    *var_12 += (val<signed char>)-7;
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-89;
signed char var_7 = (signed char)-35;
unsigned long long int var_8 = 10858407188556863258ULL;
int zero = 0;
unsigned long long int var_10 = 16705948632578026004ULL;
unsigned int var_11 = 1834631985U;
signed char var_12 = (signed char)-52;
void init() {
}

void checksum() {
    value_mismatch |= var_10 != 18446744073709551527ULL;
    value_mismatch |= var_11 != 4294967261U;
    value_mismatch |= var_12 != (signed char)-59;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_7, var_8, zero, &var_10, &var_11, &var_12);
  checksum();
  assert(!value_mismatch);
}
