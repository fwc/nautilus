/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 4529
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=4529
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
void test(val<long long int> var_0, val<unsigned char> var_4, val<unsigned int> var_8, val<unsigned int> var_9, val<signed char> var_10, val<short> var_11, val<short> var_13, val<int> zero, val<signed char*> var_14, val<unsigned long long int*> var_15, val<int*> var_16) {
    *var_14 += ((/* implicit */val<signed char>) ((((/* implicit */val<bool>) (((!(((/* implicit */val<bool>) 12930011427614220682ULL)))) ? (((((((/* implicit */val<int>) (val<short>)(-32767 - 1))) + (2147483647))) << (((var_8) - (3092526373U))))) : ((+(((/* implicit */val<int>) var_4))))))) ? (((/* implicit */val<long long int>) (+((~(((/* implicit */val<int>) var_10))))))) : (((((((var_0) + (9223372036854775807LL))) >> (((((/* implicit */val<int>) var_10)) - (25))))) | (((/* implicit */val<long long int>) (~(var_9))))))));
    *var_15 = ((/* implicit */val<unsigned long long int>) min((((/* implicit */val<int>) var_13)), ((+(227021591)))));
    *var_16 = ((/* implicit */val<int>) var_11);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -7076781374462225059LL;
unsigned char var_4 = (unsigned char)156;
unsigned int var_8 = 3092526373U;
unsigned int var_9 = 2196938644U;
signed char var_10 = (signed char)79;
short var_11 = (short)-22543;
short var_13 = (short)-30367;
int zero = 0;
signed char var_14 = (signed char)-47;
unsigned long long int var_15 = 17409221907703882751ULL;
int var_16 = 1561791424;
void init() {
}

void checksum() {
    value_mismatch |= var_14 != (signed char)-127;
    value_mismatch |= var_15 != 18446744073709521249ULL;
    value_mismatch |= var_16 != -22543;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_4, var_8, var_9, var_10, var_11, var_13, zero, &var_14, &var_15, &var_16);
  checksum();
  assert(!value_mismatch);
}
