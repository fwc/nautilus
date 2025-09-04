/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 5318
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=5318
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
void test(val<unsigned long long int> var_5, val<unsigned long long int> var_13, val<int> zero, val<long long int*> var_15, val<signed char*> var_16) {
    *var_15 &= ((/* implicit */val<long long int>) (!(((/* implicit */val<bool>) ((val<unsigned long long int>) var_5)))));
    *var_16 = ((/* implicit */val<signed char>) (!(((/* implicit */val<bool>) ((((var_13) << (((((/* implicit */val<int>) (val<unsigned short>)24919)) - (24867))))) & ((-(var_13))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_5 = 11329923247831334622ULL;
unsigned long long int var_13 = 16149507395830647451ULL;
int zero = 0;
long long int var_15 = -2765979121478649455LL;
signed char var_16 = (signed char)-125;
void init() {
}

void checksum() {
    value_mismatch |= var_15 != 0LL;
    value_mismatch |= var_16 != (signed char)0;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_5, var_13, zero, &var_15, &var_16);
  checksum();
  assert(!value_mismatch);
}
