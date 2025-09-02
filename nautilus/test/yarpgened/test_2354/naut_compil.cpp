/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 2354
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=2354
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
void test(val<signed char> var_2, val<long long int> var_5, val<short> var_7, val<bool> var_13, val<int> var_15, val<signed char> var_18, val<int> zero, val<signed char*> var_19, val<int*> var_20, val<unsigned long long int*> var_21) {
    *var_19 = ((/* implicit */val<signed char>) var_15);
    *var_20 = ((((/* implicit */val<bool>) var_5)) ? (((/* implicit */val<int>) (val<unsigned short>)0)) : (((((/* implicit */val<bool>) var_18)) ? (((((/* implicit */val<bool>) 859290906)) ? (((/* implicit */val<int>) var_13)) : (((/* implicit */val<int>) var_18)))) : (((/* implicit */val<int>) ((val<signed char>) (val<unsigned short>)4))))));
    *var_21 = ((/* implicit */val<unsigned long long int>) min((((/* implicit */val<int>) (val<bool>)1)), (((((/* implicit */val<bool>) var_7)) ? (((/* implicit */val<int>) var_13)) : (((/* implicit */val<int>) var_2))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)70;
long long int var_5 = 7960959436183749012LL;
short var_7 = (short)16961;
bool var_13 = (bool)1;
int var_15 = 2070062844;
signed char var_18 = (signed char)-95;
int zero = 0;
signed char var_19 = (signed char)-60;
int var_20 = 2078878958;
unsigned long long int var_21 = 3433415652392554052ULL;
void init() {
}

void checksum() {
    value_mismatch |= var_19 != (signed char)-4;
    value_mismatch |= var_20 != 0;
    value_mismatch |= var_21 != 1ULL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_2, var_5, var_7, var_13, var_15, var_18, zero, &var_19, &var_20, &var_21);
  checksum();
  assert(!value_mismatch);
}
