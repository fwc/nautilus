/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 8756
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=8756
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
void test(val<signed char> var_0, val<bool> var_1, val<unsigned short> var_3, val<unsigned long long int> var_4, val<unsigned int> var_7, val<short> var_8, val<int> var_10, val<short> var_11, val<int> zero, val<unsigned short*> var_12, val<long long int*> var_13, val<unsigned int*> var_14) {
    *var_12 = max((((/* implicit */val<unsigned short>) var_8)), (var_3));
    *var_13 = ((/* implicit */val<long long int>) ((((/* implicit */val<bool>) ((((/* implicit */val<bool>) var_4)) ? (var_10) : (((/* implicit */val<int>) var_1))))) ? (((/* implicit */val<int>) var_3)) : (((/* implicit */val<int>) ((val<unsigned short>) ((((/* implicit */val<bool>) var_0)) ? (var_7) : (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_1)))))))));
    *var_14 = ((/* implicit */val<unsigned int>) var_11);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-111;
bool var_1 = (bool)0;
unsigned short var_3 = (unsigned short)6767;
unsigned long long int var_4 = 18098798381997925941ULL;
unsigned int var_7 = 610953026U;
short var_8 = (short)-22399;
int var_10 = 1903358696;
short var_11 = (short)-22032;
int zero = 0;
unsigned short var_12 = (unsigned short)34020;
long long int var_13 = 7176915081829479882LL;
unsigned int var_14 = 3083422457U;
void init() {
}

void checksum() {
    value_mismatch |= var_12 != (unsigned short)43137;
    value_mismatch |= var_13 != 6767LL;
    value_mismatch |= var_14 != 4294945264U;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_3, var_4, var_7, var_8, var_10, var_11, zero, &var_12, &var_13, &var_14);
  checksum();
  assert(!value_mismatch);
}
