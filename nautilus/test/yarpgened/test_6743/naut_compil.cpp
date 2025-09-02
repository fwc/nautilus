/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 6743
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=6743
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
void test(val<short> var_3, val<unsigned long long int> var_4, val<unsigned long long int> var_8, val<unsigned short> var_9, val<int> zero, val<bool*> var_10, val<unsigned long long int*> var_11) {
    *var_10 = ((/* implicit */val<bool>) var_4);
    *var_11 += ((/* implicit */val<unsigned long long int>) ((((/* implicit */val<int>) var_9)) * (((/* implicit */val<int>) max((var_3), (((/* implicit */val<short>) (!(((/* implicit */val<bool>) var_8))))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)2989;
unsigned long long int var_4 = 17212012810238657624ULL;
unsigned long long int var_8 = 1975479902971597603ULL;
unsigned short var_9 = (unsigned short)47230;
int zero = 0;
bool var_10 = (bool)0;
unsigned long long int var_11 = 1737598195004284788ULL;
void init() {
}

void checksum() {
    value_mismatch |= var_10 != (bool)1;
    value_mismatch |= var_11 != 1737598195145455258ULL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_3, var_4, var_8, var_9, zero, &var_10, &var_11);
  checksum();
  assert(!value_mismatch);
}
