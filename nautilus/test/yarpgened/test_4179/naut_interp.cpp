/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 4179
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=4179
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
void test(val<int> var_2, val<signed char> var_5, val<short> var_9, val<unsigned char> var_11, val<unsigned short> var_12, val<bool> var_13, val<signed char> var_15, val<int> zero, val<signed char*> var_18, val<signed char*> var_19, val<unsigned char*> var_20) {
    *var_18 = ((/* implicit */val<signed char>) var_11);
    *var_19 = ((/* implicit */val<signed char>) ((((/* implicit */val<bool>) (((!(((/* implicit */val<bool>) var_5)))) ? (var_2) : (((/* implicit */val<int>) max(((val<signed char>)-76), ((val<signed char>)75))))))) ? (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_13))) : (((((/* implicit */val<unsigned long long int>) (-(((/* implicit */val<int>) var_12))))) + (((((/* implicit */val<bool>) var_15)) ? (70368744177663ULL) : (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_5)))))))));
    *var_20 &= ((/* implicit */val<unsigned char>) var_9);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -1400346865;
signed char var_5 = (signed char)87;
short var_9 = (short)30939;
unsigned char var_11 = (unsigned char)156;
unsigned short var_12 = (unsigned short)38731;
bool var_13 = (bool)1;
signed char var_15 = (signed char)70;
int zero = 0;
signed char var_18 = (signed char)10;
signed char var_19 = (signed char)125;
unsigned char var_20 = (unsigned char)154;
void init() {
}

void checksum() {
    value_mismatch |= var_18 != (signed char)-100;
    value_mismatch |= var_19 != (signed char)1;
    value_mismatch |= var_20 != (unsigned char)154;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_2, var_5, var_9, var_11, var_12, var_13, var_15, zero, &var_18, &var_19, &var_20);
  checksum();
  assert(!value_mismatch);
}
