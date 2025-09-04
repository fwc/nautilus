/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 6289
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=6289
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
void test(val<int> var_4, val<signed char> var_5, val<int> var_7, val<unsigned int> var_9, val<int> zero, val<signed char*> var_10, val<bool*> var_11, val<long long int*> var_12) {
    *var_10 = ((/* implicit */val<signed char>) ((((((/* implicit */val<bool>) var_9)) ? (((/* implicit */val<unsigned int>) ((((/* implicit */val<bool>) var_9)) ? (((/* implicit */val<int>) (val<short>)4261)) : (var_4)))) : (max((((/* implicit */val<unsigned int>) (val<signed char>)61)), (4074524063U))))) + (((/* implicit */val<unsigned int>) (((((val<bool>)0) && (((/* implicit */val<bool>) 2643891918721492938ULL)))) ? (min((var_7), (((/* implicit */val<int>) (val<bool>)1)))) : (((/* implicit */val<int>) (!(((/* implicit */val<bool>) var_5))))))))));
    *var_11 = ((/* implicit */val<bool>) var_4);
    *var_12 = ((/* implicit */val<long long int>) ((val<int>) var_9));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_4 = -223596792;
signed char var_5 = (signed char)121;
int var_7 = -65148966;
unsigned int var_9 = 2119622226U;
int zero = 0;
signed char var_10 = (signed char)124;
bool var_11 = (bool)1;
long long int var_12 = -7944978413914155449LL;
void init() {
}

void checksum() {
    value_mismatch |= var_10 != (signed char)-91;
    value_mismatch |= var_11 != (bool)1;
    value_mismatch |= var_12 != 2119622226LL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_4, var_5, var_7, var_9, zero, &var_10, &var_11, &var_12);
  checksum();
  assert(!value_mismatch);
}
