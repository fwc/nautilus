/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 5324
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=5324
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
void test(val<unsigned short> var_1, val<unsigned int> var_6, val<short> var_8, val<int> var_9, val<signed char> var_10, val<int> zero, val<unsigned long long int*> var_11, val<long long int*> var_12) {
    *var_11 = ((/* implicit */val<unsigned long long int>) ((((/* implicit */val<bool>) max((var_6), (((/* implicit */val<unsigned int>) var_8))))) ? (var_9) : (((/* implicit */val<int>) var_10))));
    *var_12 = ((/* implicit */val<long long int>) min(((~(((/* implicit */val<int>) var_1)))), (((/* implicit */val<int>) var_10))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)29239;
unsigned int var_6 = 1077452057U;
short var_8 = (short)-31867;
int var_9 = -1097997278;
signed char var_10 = (signed char)-105;
int zero = 0;
unsigned long long int var_11 = 7497448380913668280ULL;
long long int var_12 = 8649656364879874055LL;
void init() {
}

void checksum() {
    value_mismatch |= var_11 != 18446744072611554338ULL;
    value_mismatch |= var_12 != -29240LL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_6, var_8, var_9, var_10, zero, &var_11, &var_12);
  checksum();
}
