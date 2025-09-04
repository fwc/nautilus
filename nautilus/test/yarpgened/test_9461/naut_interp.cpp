/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 9461
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=9461
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
void test(val<unsigned long long int> var_2, val<short> var_15, val<int> zero, val<unsigned char*> var_19, val<unsigned long long int*> var_20, val<unsigned int*> var_21) {
    *var_19 = ((/* implicit */val<unsigned char>) var_15);
    *var_20 = ((/* implicit */val<unsigned long long int>) 1073676288);
    *var_21 &= ((/* implicit */val<unsigned int>) ((((((/* implicit */val<bool>) -1073676289)) && (((/* implicit */val<bool>) (val<unsigned char>)0)))) ? (((/* implicit */val<unsigned long long int>) min((((/* implicit */val<unsigned int>) (val<unsigned short>)18699)), (3700955308U)))) : (var_2)));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 6541125115425753035ULL;
short var_15 = (short)-17702;
int zero = 0;
unsigned char var_19 = (unsigned char)174;
unsigned long long int var_20 = 3077396688195917721ULL;
unsigned int var_21 = 364314835U;
void init() {
}

void checksum() {
    value_mismatch |= var_19 != (unsigned char)218;
    value_mismatch |= var_20 != 1073676288ULL;
    value_mismatch |= var_21 != 269877443U;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_2, var_15, zero, &var_19, &var_20, &var_21);
  checksum();
  assert(!value_mismatch);
}
