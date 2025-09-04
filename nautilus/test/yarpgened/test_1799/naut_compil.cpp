/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 1799
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=1799
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
void test(val<long long int> var_0, val<signed char> var_4, val<signed char> var_15, val<signed char> var_16, val<int> zero, val<signed char*> var_19, val<int*> var_20, val<signed char*> var_21, val<bool*> var_22) {
    *var_19 = ((/* implicit */val<signed char>) min((*var_19), (((/* implicit */val<signed char>) ((val<bool>) var_15)))));
    *var_20 = min((((/* implicit */val<int>) ((((val<long long int>) (val<unsigned short>)60393)) < (((/* implicit */val<long long int>) 1711141351))))), ((-(2))));
    *var_21 = ((/* implicit */val<signed char>) ((((/* implicit */val<bool>) ((val<long long int>) var_16))) ? (((/* implicit */val<int>) var_4)) : (min((((((/* implicit */val<bool>) var_0)) ? (((/* implicit */val<int>) (val<signed char>)117)) : (((/* implicit */val<int>) (val<unsigned short>)5156)))), (((/* implicit */val<int>) (val<signed char>)-85))))));
    *var_22 = ((/* implicit */val<bool>) max((*var_22), (((/* implicit */val<bool>) ((val<long long int>) ((val<bool>) ((val<bool>) (val<unsigned short>)60380)))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -1410746171118490839LL;
signed char var_4 = (signed char)-102;
signed char var_15 = (signed char)-38;
signed char var_16 = (signed char)-46;
int zero = 0;
signed char var_19 = (signed char)95;
int var_20 = -95759357;
signed char var_21 = (signed char)-88;
bool var_22 = (bool)0;
void init() {
}

void checksum() {
    value_mismatch |= var_19 != (signed char)1;
    value_mismatch |= var_20 != -2;
    value_mismatch |= var_21 != (signed char)-102;
    value_mismatch |= var_22 != (bool)1;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_4, var_15, var_16, zero, &var_19, &var_20, &var_21, &var_22);
  checksum();
  assert(!value_mismatch);
}
