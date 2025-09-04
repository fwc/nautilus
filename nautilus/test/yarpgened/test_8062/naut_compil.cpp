/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 8062
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=8062
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
void test(val<bool> var_0, val<signed char> var_1, val<unsigned int> var_2, val<unsigned int> var_5, val<signed char> var_9, val<int> zero, val<unsigned int*> var_12, val<unsigned int*> var_13, val<signed char*> var_14, val<signed char*> var_15, val<signed char*> var_16) {
    *var_12 = ((val<unsigned int>) (+((((val<bool>)1) ? (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_0))) : (var_5)))));
    *var_13 ^= ((/* implicit */val<unsigned int>) ((((((/* implicit */val<int>) (val<bool>)1)) % (((/* implicit */val<int>) ((((/* implicit */val<bool>) (val<signed char>)122)) && (((/* implicit */val<bool>) (val<signed char>)-109))))))) == (((/* implicit */val<int>) var_1))));
    *var_14 |= ((/* implicit */val<signed char>) ((val<bool>) ((((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) (val<signed char>)5))) | (18446744073709551613ULL))));
    *var_15 = var_9;
    *var_16 = ((/* implicit */val<signed char>) ((((/* implicit */val<int>) min((((val<signed char>) var_2)), ((val<signed char>)-95)))) >= (((/* implicit */val<int>) (val<signed char>)-95))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

bool var_0 = (bool)0;
signed char var_1 = (signed char)7;
unsigned int var_2 = 2276206453U;
unsigned int var_5 = 2260674735U;
signed char var_9 = (signed char)125;
int zero = 0;
unsigned int var_12 = 516155479U;
unsigned int var_13 = 1130526624U;
signed char var_14 = (signed char)68;
signed char var_15 = (signed char)-103;
signed char var_16 = (signed char)-127;
void init() {
}

void checksum() {
    value_mismatch |= var_12 != 0U;
    value_mismatch |= var_13 != 1130526624U;
    value_mismatch |= var_14 != (signed char)69;
    value_mismatch |= var_15 != (signed char)125;
    value_mismatch |= var_16 != (signed char)1;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_2, var_5, var_9, zero, &var_12, &var_13, &var_14, &var_15, &var_16);
  checksum();
  assert(!value_mismatch);
}
