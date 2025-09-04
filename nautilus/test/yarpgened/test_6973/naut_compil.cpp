/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 6973
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=6973
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
void test(val<unsigned char> var_1, val<long long int> var_2, val<unsigned int> var_3, val<int> zero, val<long long int*> var_10, val<signed char*> var_11) {
    *var_10 = ((/* implicit */val<long long int>) 766440547);
    *var_11 = ((/* implicit */val<signed char>) min((*var_11), (((/* implicit */val<signed char>) ((((/* implicit */val<bool>) max((3208461843U), (((/* implicit */val<unsigned int>) var_1))))) ? (max((((/* implicit */val<long long int>) 766440550)), (var_2))) : (((/* implicit */val<long long int>) var_3)))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)62;
long long int var_2 = 8752704420925862680LL;
unsigned int var_3 = 780822162U;
int zero = 0;
long long int var_10 = -491969835400632441LL;
signed char var_11 = (signed char)-112;
void init() {
}

void checksum() {
    value_mismatch |= var_10 != 766440547LL;
    value_mismatch |= var_11 != (signed char)-112;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_2, var_3, zero, &var_10, &var_11);
  checksum();
  assert(!value_mismatch);
}
