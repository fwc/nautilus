/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 4302
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=4302
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
void test(val<int> zero, val<signed char*> var_14, val<int*> var_15) {
    *var_14 = ((/* implicit */val<signed char>) (+(((/* implicit */val<int>) ((((((/* implicit */val<int>) (val<unsigned short>)13)) >> (((((/* implicit */val<int>) (val<short>)32765)) - (32745))))) != (((/* implicit */val<int>) ((((/* implicit */val<int>) (val<signed char>)-125)) <= (((/* implicit */val<int>) (val<signed char>)-125))))))))));
    *var_15 = ((/* implicit */val<int>) ((5ULL) ^ (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) ((((/* implicit */val<int>) (val<signed char>)-1)) >= (((((((/* implicit */val<int>) (val<signed char>)-125)) + (2147483647))) << (((((((/* implicit */val<int>) (val<signed char>)-106)) + (117))) - (11)))))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int zero = 0;
signed char var_14 = (signed char)-13;
int var_15 = 1436734566;
void init() {
}

void checksum() {
    value_mismatch |= var_14 != (signed char)1;
    value_mismatch |= var_15 != 5;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(zero, &var_14, &var_15);
  checksum();
  assert(!value_mismatch);
}
