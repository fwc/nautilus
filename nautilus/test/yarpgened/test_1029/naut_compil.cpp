/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 1029
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=1029
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
void test(val<signed char> var_0, val<unsigned short> var_4, val<int> var_9, val<unsigned long long int> var_11, val<int> zero, val<short*> var_14, val<bool*> var_15) {
    *var_14 *= ((/* implicit */val<short>) (!(((/* implicit */val<bool>) ((((/* implicit */val<bool>) ((((/* implicit */val<bool>) (val<unsigned short>)49152)) ? (((/* implicit */val<int>) var_4)) : (((/* implicit */val<int>) (val<bool>)0))))) ? (((/* implicit */val<int>) max((var_0), (((/* implicit */val<signed char>) (val<bool>)0))))) : (var_9))))));
    *var_15 = ((/* implicit */val<bool>) max((*var_15), (((/* implicit */val<bool>) ((((/* implicit */val<bool>) ((var_11) >> (((/* implicit */val<int>) (val<bool>)0))))) ? (((val<unsigned long long int>) (val<bool>)0)) : (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_0))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)40;
unsigned short var_4 = (unsigned short)27519;
int var_9 = -1989745730;
unsigned long long int var_11 = 5329415071588041047ULL;
int zero = 0;
short var_14 = (short)-588;
bool var_15 = (bool)1;
void init() {
}

void checksum() {
    value_mismatch |= var_14 != (short)0;
    value_mismatch |= var_15 != (bool)1;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_4, var_9, var_11, zero, &var_14, &var_15);
  checksum();
  assert(!value_mismatch);
}
