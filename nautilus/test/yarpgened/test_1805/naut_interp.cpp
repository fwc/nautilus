/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 1805
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=1805
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
void test(val<unsigned int> var_2, val<short> var_5, val<unsigned char> var_7, val<long long int> var_11, val<int> var_15, val<signed char> var_16, val<int> zero, val<unsigned int*> var_18, val<bool*> var_19, val<unsigned int*> var_20) {
    *var_18 = ((/* implicit */val<unsigned int>) min((*var_18), (((/* implicit */val<unsigned int>) max((var_11), (((((/* implicit */val<bool>) ((((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_16))) % (var_2)))) ? (((/* implicit */val<long long int>) (~(((/* implicit */val<int>) (val<bool>)0))))) : (((((/* implicit */val<bool>) (val<signed char>)45)) ? (var_11) : (((/* implicit */val<long long int>) ((/* implicit */val<int>) var_5))))))))))));
    *var_19 |= ((/* implicit */val<bool>) min((((/* implicit */val<long long int>) min((((/* implicit */val<unsigned char>) ((val<bool>) var_7))), (var_7)))), (((((/* implicit */val<bool>) -6224435246656180245LL)) ? (((/* implicit */val<long long int>) var_2)) : ((~(6224435246656180245LL)))))));
    *var_20 -= ((/* implicit */val<unsigned int>) var_15);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 1235404387U;
short var_5 = (short)-7808;
unsigned char var_7 = (unsigned char)2;
long long int var_11 = -6899712419474706473LL;
int var_15 = 210759044;
signed char var_16 = (signed char)-30;
int zero = 0;
unsigned int var_18 = 1312131961U;
bool var_19 = (bool)0;
unsigned int var_20 = 243909351U;
void init() {
}

void checksum() {
    value_mismatch |= var_18 != 1312131961U;
    value_mismatch |= var_19 != (bool)1;
    value_mismatch |= var_20 != 33150307U;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_2, var_5, var_7, var_11, var_15, var_16, zero, &var_18, &var_19, &var_20);
  checksum();
  assert(!value_mismatch);
}
