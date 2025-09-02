/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 6150
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=6150
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
void test(val<unsigned long long int> var_2, val<int> zero, val<bool*> var_18, val<unsigned int*> var_19) {
    *var_18 = ((/* implicit */val<bool>) (+(((((/* implicit */val<int>) max(((val<unsigned char>)133), ((val<unsigned char>)14)))) + (((/* implicit */val<int>) (val<unsigned char>)242))))));
    *var_19 = ((/* implicit */val<unsigned int>) max((*var_19), (((/* implicit */val<unsigned int>) ((((((/* implicit */val<bool>) var_2)) ? (max((((/* implicit */val<unsigned int>) (val<unsigned char>)71)), (4084476238U))) : (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) (!(((/* implicit */val<bool>) (val<unsigned char>)71)))))))) <= (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) (val<bool>)1))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 13251782024810896781ULL;
int zero = 0;
bool var_18 = (bool)0;
unsigned int var_19 = 1398786669U;
void init() {
}

void checksum() {
    value_mismatch |= var_18 != (bool)1;
    value_mismatch |= var_19 != 1398786669U;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_2, zero, &var_18, &var_19);
  checksum();
  assert(!value_mismatch);
}
