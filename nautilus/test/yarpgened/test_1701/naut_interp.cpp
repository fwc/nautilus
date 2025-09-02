/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 1701
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=1701
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
void test(val<signed char> var_3, val<signed char> var_8, val<bool> var_9, val<int> zero, val<signed char*> var_10, val<unsigned int*> var_11) {
    *var_10 = ((/* implicit */val<signed char>) ((val<unsigned char>) ((((((/* implicit */val<bool>) (val<unsigned short>)44086)) ? (((/* implicit */val<int>) var_3)) : (((/* implicit */val<int>) var_8)))) + (((/* implicit */val<int>) var_9)))));
    *var_11 = (+(((((/* implicit */val<bool>) 2147483646)) ? (1557173730U) : (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) (val<short>)14573))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)-45;
signed char var_8 = (signed char)4;
bool var_9 = (bool)1;
int zero = 0;
signed char var_10 = (signed char)-58;
unsigned int var_11 = 1188648858U;
void init() {
}

void checksum() {
    value_mismatch |= var_10 != (signed char)-44;
    value_mismatch |= var_11 != 1557173730U;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_3, var_8, var_9, zero, &var_10, &var_11);
  checksum();
  assert(!value_mismatch);
}
