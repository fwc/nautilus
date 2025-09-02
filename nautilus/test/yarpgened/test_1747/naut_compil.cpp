/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 1747
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=1747
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
void test(val<unsigned long long int> var_1, val<bool> var_4, val<short> var_6, val<short> var_9, val<int> var_13, val<long long int> var_14, val<long long int> var_16, val<int> zero, val<signed char*> var_17, val<long long int*> var_18, val<long long int*> var_19) {
    *var_17 ^= ((/* implicit */val<signed char>) min((((((/* implicit */val<bool>) (val<unsigned char>)255)) ? (((/* implicit */val<int>) var_9)) : (((((/* implicit */val<bool>) (val<unsigned char>)255)) ? (((/* implicit */val<int>) (val<unsigned char>)255)) : (((/* implicit */val<int>) (val<unsigned char>)255)))))), (((/* implicit */val<int>) var_4))));
    *var_18 = ((min((((/* implicit */val<long long int>) ((val<int>) var_1))), (var_14))) ^ (var_14));
    *var_19 = ((((/* implicit */val<bool>) var_13)) ? (((((((var_4) ? (((/* implicit */val<long long int>) ((/* implicit */val<int>) var_6))) : (var_16))) + (9223372036854775807LL))) << (((var_1) - (5643448548129103196ULL))))) : (((/* implicit */val<long long int>) ((/* implicit */val<int>) var_9))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 5643448548129103196ULL;
bool var_4 = (bool)0;
short var_6 = (short)30604;
short var_9 = (short)-20859;
int var_13 = -1037929270;
long long int var_14 = -2825043513582693102LL;
long long int var_16 = -1399216179471665512LL;
int zero = 0;
signed char var_17 = (signed char)90;
long long int var_18 = 6891079495521797485LL;
long long int var_19 = -4737022257767933968LL;
void init() {
}

void checksum() {
    value_mismatch |= var_17 != (signed char)-33;
    value_mismatch |= var_18 != 0LL;
    value_mismatch |= var_19 != 7824155857383110295LL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_4, var_6, var_9, var_13, var_14, var_16, zero, &var_17, &var_18, &var_19);
  checksum();
  assert(!value_mismatch);
}
