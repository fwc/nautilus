/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 4786
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=4786
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
void test(val<short> var_14, val<int> zero, val<unsigned long long int*> var_20, val<long long int*> var_21) {
    *var_20 = ((/* implicit */val<unsigned long long int>) ((val<bool>) ((val<signed char>) ((val<short>) var_14))));
    *var_21 *= ((/* implicit */val<long long int>) ((val<signed char>) ((val<unsigned int>) ((val<bool>) (val<short>)-2048))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_14 = (short)-13089;
int zero = 0;
unsigned long long int var_20 = 446380295793006708ULL;
long long int var_21 = -3321197772129889806LL;
void init() {
}

void checksum() {
    value_mismatch |= var_20 != 1ULL;
    value_mismatch |= var_21 != -3321197772129889806LL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_14, zero, &var_20, &var_21);
  checksum();
}
