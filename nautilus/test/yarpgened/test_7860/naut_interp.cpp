/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 7860
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=7860
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
void test(val<int> var_2, val<unsigned long long int> var_3, val<unsigned long long int> var_4, val<unsigned long long int> var_7, val<int> zero, val<unsigned long long int*> var_11, val<long long int*> var_12) {
    *var_11 = max((max((min((var_7), (((/* implicit */val<unsigned long long int>) 223149753U)))), (max((var_3), (var_4))))), (((/* implicit */val<unsigned long long int>) var_2)));
    *var_12 = ((/* implicit */val<long long int>) 15);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -1718417658;
unsigned long long int var_3 = 8144926603911626222ULL;
unsigned long long int var_4 = 6052398629031994928ULL;
unsigned long long int var_7 = 7889262702243132810ULL;
int zero = 0;
unsigned long long int var_11 = 6732164357189629314ULL;
long long int var_12 = -9209690569984120302LL;
void init() {
}

void checksum() {
    value_mismatch |= var_11 != 18446744071991133958ULL;
    value_mismatch |= var_12 != 15LL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_2, var_3, var_4, var_7, zero, &var_11, &var_12);
  checksum();
}
