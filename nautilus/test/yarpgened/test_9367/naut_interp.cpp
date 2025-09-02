/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 9367
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=9367
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
void test(val<signed char> var_4, val<bool> var_7, val<short> var_8, val<int> zero, val<unsigned int*> var_12, val<unsigned char*> var_13) {
    *var_12 = ((/* implicit */val<unsigned int>) min((*var_12), (((/* implicit */val<unsigned int>) (((~(((/* implicit */val<int>) var_7)))) * (min((((((/* implicit */val<int>) var_7)) - (((/* implicit */val<int>) var_4)))), (((/* implicit */val<int>) var_8)))))))));
    *var_13 = ((/* implicit */val<unsigned char>) ((((/* implicit */val<bool>) ((((/* implicit */val<bool>) (val<unsigned char>)1)) ? (((/* implicit */val<int>) (val<bool>)1)) : (((/* implicit */val<int>) (val<bool>)1))))) ? ((-(((/* implicit */val<int>) (val<bool>)1)))) : (((/* implicit */val<int>) (val<bool>)1))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_4 = (signed char)82;
bool var_7 = (bool)0;
short var_8 = (short)6228;
int zero = 0;
unsigned int var_12 = 3606432652U;
unsigned char var_13 = (unsigned char)135;
void init() {
}

void checksum() {
    value_mismatch |= var_12 != 82U;
    value_mismatch |= var_13 != (unsigned char)255;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_4, var_7, var_8, zero, &var_12, &var_13);
  checksum();
  assert(!value_mismatch);
}
