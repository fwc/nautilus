/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 4815
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=4815
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
void test(val<unsigned int> var_0, val<unsigned long long int> var_2, val<int> var_5, val<long long int> var_6, val<signed char> var_8, val<int> zero, val<signed char*> var_10, val<unsigned long long int*> var_11, val<long long int*> var_12, val<int*> var_13, val<bool*> var_14) {
    *var_10 = ((/* implicit */val<signed char>) var_6);
    *var_11 = max((((/* implicit */val<unsigned long long int>) var_5)), (max((((/* implicit */val<unsigned long long int>) (val<bool>)1)), (((((/* implicit */val<bool>) var_8)) ? (var_2) : (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) (val<short>)19305))))))));
    *var_12 = ((/* implicit */val<long long int>) (val<signed char>)-82);
    *var_13 = ((/* implicit */val<int>) var_0);
    *var_14 |= (((val<bool>)0) && (((/* implicit */val<bool>) (val<short>)6689)));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1301547294U;
unsigned long long int var_2 = 7453599210147657852ULL;
int var_5 = -201613107;
long long int var_6 = -1362546277124073681LL;
signed char var_8 = (signed char)46;
int zero = 0;
signed char var_10 = (signed char)-16;
unsigned long long int var_11 = 11917540490491834367ULL;
long long int var_12 = -4787384911391981603LL;
int var_13 = 1821344826;
bool var_14 = (bool)1;
void init() {
}

void checksum() {
    value_mismatch |= var_10 != (signed char)47;
    value_mismatch |= var_11 != 18446744073507938509ULL;
    value_mismatch |= var_12 != -82LL;
    value_mismatch |= var_13 != 1301547294;
    value_mismatch |= var_14 != (bool)1;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_2, var_5, var_6, var_8, zero, &var_10, &var_11, &var_12, &var_13, &var_14);
  checksum();
  assert(!value_mismatch);
}
