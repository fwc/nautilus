/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 6786
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=6786
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
void test(val<bool> var_1, val<unsigned short> var_2, val<int> var_4, val<unsigned char> var_6, val<signed char> var_8, val<unsigned char> var_10, val<signed char> var_11, val<int> zero, val<long long int*> var_17, val<unsigned long long int*> var_18) {
    *var_17 += ((/* implicit */val<long long int>) ((((/* implicit */val<bool>) min((((/* implicit */val<int>) var_6)), ((+(((/* implicit */val<int>) (val<unsigned short>)57566))))))) ? (((((/* implicit */val<bool>) ((((/* implicit */val<bool>) var_11)) ? (var_4) : (((/* implicit */val<int>) var_1))))) ? (((/* implicit */val<unsigned long long int>) (-(((/* implicit */val<int>) var_10))))) : (0ULL))) : (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_2)))));
    *var_18 = ((/* implicit */val<unsigned long long int>) var_8);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

bool var_1 = (bool)0;
unsigned short var_2 = (unsigned short)29473;
int var_4 = -1429513761;
unsigned char var_6 = (unsigned char)70;
signed char var_8 = (signed char)-51;
unsigned char var_10 = (unsigned char)3;
signed char var_11 = (signed char)84;
int zero = 0;
long long int var_17 = 5202844624204271571LL;
unsigned long long int var_18 = 15968249445140972149ULL;
void init() {
}

void checksum() {
    value_mismatch |= var_17 != 5202844624204271568LL;
    value_mismatch |= var_18 != 18446744073709551565ULL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_2, var_4, var_6, var_8, var_10, var_11, zero, &var_17, &var_18);
  checksum();
  assert(!value_mismatch);
}
