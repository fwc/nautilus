/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 83
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=83
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
void test(val<long long int> var_2, val<signed char> var_8, val<bool> var_9, val<int> zero, val<unsigned long long int*> var_10, val<long long int*> var_11) {
    *var_10 = ((/* implicit */val<unsigned long long int>) max((var_2), (17592186044416LL)));
    *var_11 = ((/* implicit */val<long long int>) max(((+(((/* implicit */val<int>) var_8)))), (((/* implicit */val<int>) ((val<unsigned char>) min((var_9), (var_9)))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 4261049486596489370LL;
signed char var_8 = (signed char)125;
bool var_9 = (bool)0;
int zero = 0;
unsigned long long int var_10 = 12410929391789342808ULL;
long long int var_11 = -7747996716552346173LL;
void init() {
}

void checksum() {
    value_mismatch |= var_10 != 4261049486596489370ULL;
    value_mismatch |= var_11 != 125LL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_2, var_8, var_9, zero, &var_10, &var_11);
  checksum();
  assert(!value_mismatch);
}
