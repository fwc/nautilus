/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 7352
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=7352
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
void test(val<unsigned long long int> var_3, val<unsigned int> var_5, val<int> zero, val<signed char*> var_10, val<unsigned short*> var_11) {
    *var_10 = ((/* implicit */val<signed char>) var_5);
    *var_11 = ((/* implicit */val<unsigned short>) ((((/* implicit */val<unsigned int>) ((/* implicit */val<int>) (((~(var_3))) <= (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) ((val<bool>) (val<unsigned char>)237)))))))) > (var_5)));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 17463137556721680089ULL;
unsigned int var_5 = 38378380U;
int zero = 0;
signed char var_10 = (signed char)-17;
unsigned short var_11 = (unsigned short)27642;
void init() {
}

void checksum() {
    value_mismatch |= var_10 != (signed char)-116;
    value_mismatch |= var_11 != (unsigned short)0;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_3, var_5, zero, &var_10, &var_11);
  checksum();
  assert(!value_mismatch);
}
