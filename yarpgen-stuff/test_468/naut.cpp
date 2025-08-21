/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 468
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --seed=468
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
void test(val<int> var_2, val<unsigned long long int> var_4, val<unsigned short> var_9, val<unsigned long long int> var_10, val<int> zero, val<int*> var_16, val<signed char*> var_17, val<unsigned int*> var_18) {
    *var_16 += ((/* implicit */val<int>) var_10);
    *var_17 = ((/* implicit */val<signed char>) (~(min((((((/* implicit */val<bool>) var_2)) ? (var_4) : (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_9))))), (((/* implicit */val<unsigned long long int>) var_2))))));
    *var_18 &= ((/* implicit */val<unsigned int>) ((((/* implicit */val<bool>) (~(((((/* implicit */val<bool>) var_10)) ? (var_4) : (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_9)))))))) ? (((/* implicit */val<long long int>) ((((/* implicit */val<int>) ((var_10) <= (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) (val<signed char>)-105)))))) * (((/* implicit */val<int>) var_9))))) : (11LL)));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -1544091807;
unsigned long long int var_4 = 8992105130065434381ULL;
unsigned short var_9 = (unsigned short)57815;
unsigned long long int var_10 = 2943239704044841448ULL;
int zero = 0;
int var_16 = 1676212583;
signed char var_17 = (signed char)42;
unsigned int var_18 = 1608479958U;
void init() {
}

void checksum() {
    value_mismatch |= var_16 != 475276111;
    value_mismatch |= var_17 != (signed char)-14;
    value_mismatch |= var_18 != 24790U;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_2, var_4, var_9, var_10, zero, &var_16, &var_17, &var_18);
  checksum();
  assert(!value_mismatch);
}
