/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 7822
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=7822
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
void test(val<unsigned short> var_0, val<long long int> var_1, val<unsigned char> var_3, val<unsigned int> var_7, val<unsigned long long int> var_10, val<int> zero, val<unsigned long long int*> var_11, val<unsigned char*> var_12, val<int*> var_13) {
    *var_11 = ((/* implicit */val<unsigned long long int>) ((((/* implicit */val<long long int>) ((/* implicit */val<int>) ((val<bool>) var_0)))) % (((((/* implicit */val<bool>) ((val<unsigned char>) var_3))) ? (min((var_1), (((/* implicit */val<long long int>) var_3)))) : (((/* implicit */val<long long int>) ((/* implicit */val<int>) ((((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_0))) <= (var_10)))))))));
    *var_12 &= ((/* implicit */val<unsigned char>) var_7);
    *var_13 = ((/* implicit */val<int>) (val<signed char>)126);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)30243;
long long int var_1 = -8758713855886510389LL;
unsigned char var_3 = (unsigned char)127;
unsigned int var_7 = 4025747727U;
unsigned long long int var_10 = 14080871116260199850ULL;
int zero = 0;
unsigned long long int var_11 = 15666266649964831743ULL;
unsigned char var_12 = (unsigned char)11;
int var_13 = -913352994;
void init() {
}

void checksum() {
    value_mismatch |= var_11 != 1ULL;
    value_mismatch |= var_12 != (unsigned char)11;
    value_mismatch |= var_13 != 126;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_3, var_7, var_10, zero, &var_11, &var_12, &var_13);
  checksum();
  assert(!value_mismatch);
}
