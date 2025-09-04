/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 5444
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=5444
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
void test(val<int> var_1, val<long long int> var_2, val<long long int> var_7, val<signed char> var_10, val<int> zero, val<long long int*> var_16, val<unsigned char*> var_17) {
    *var_16 = ((/* implicit */val<long long int>) ((((val<unsigned int>) var_7)) - (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_10)))));
    *var_17 = ((/* implicit */val<unsigned char>) ((((/* implicit */val<bool>) max((((var_2) + (((/* implicit */val<long long int>) 4237800800U)))), (((/* implicit */val<long long int>) (!(((/* implicit */val<bool>) var_2)))))))) ? ((~(((val<int>) (val<bool>)1)))) : (var_1)));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1141469524;
long long int var_2 = -5637605789586532854LL;
long long int var_7 = -389329401737372012LL;
signed char var_10 = (signed char)14;
int zero = 0;
long long int var_16 = 8442714391541887428LL;
unsigned char var_17 = (unsigned char)95;
void init() {
}

void checksum() {
    value_mismatch |= var_16 != 3436453510LL;
    value_mismatch |= var_17 != (unsigned char)172;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_2, var_7, var_10, zero, &var_16, &var_17);
  checksum();
  assert(!value_mismatch);
}
