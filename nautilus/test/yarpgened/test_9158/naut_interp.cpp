/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 9158
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=9158
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
void test(val<unsigned short> var_0, val<unsigned int> var_4, val<unsigned long long int> var_8, val<unsigned int> var_9, val<int> zero, val<bool*> var_10, val<unsigned long long int*> var_11, val<unsigned int*> var_12) {
    *var_10 = ((/* implicit */val<bool>) max((*var_10), (((/* implicit */val<bool>) ((((((/* implicit */val<bool>) ((((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_0))) - (var_9)))) ? (min((1028893451U), (((/* implicit */val<unsigned int>) var_0)))) : (var_9))) + (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) ((val<signed char>) ((((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) (val<short>)-16384))) >= (var_8)))))))))));
    *var_11 = ((/* implicit */val<unsigned long long int>) (val<bool>)0);
    *var_12 = var_4;
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)49908;
unsigned int var_4 = 633886499U;
unsigned long long int var_8 = 16578700596104199350ULL;
unsigned int var_9 = 3585446845U;
int zero = 0;
bool var_10 = (bool)1;
unsigned long long int var_11 = 16310973269264976645ULL;
unsigned int var_12 = 4285288705U;
void init() {
}

void checksum() {
    value_mismatch |= var_10 != (bool)1;
    value_mismatch |= var_11 != 0ULL;
    value_mismatch |= var_12 != 633886499U;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_4, var_8, var_9, zero, &var_10, &var_11, &var_12);
  checksum();
  assert(!value_mismatch);
}
