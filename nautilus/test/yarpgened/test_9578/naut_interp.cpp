/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 9578
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=9578
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
void test(val<int> var_3, val<unsigned int> var_4, val<int> zero, val<unsigned char*> var_17, val<long long int*> var_18, val<bool*> var_19) {
    *var_17 -= ((/* implicit */val<unsigned char>) var_4);
    *var_18 = ((/* implicit */val<long long int>) ((val<unsigned short>) var_3));
    *var_19 = ((((/* implicit */val<int>) ((val<unsigned char>) (val<short>)-9833))) != ((+(((/* implicit */val<int>) (val<short>)-9859)))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = 592985828;
unsigned int var_4 = 924610266U;
int zero = 0;
unsigned char var_17 = (unsigned char)182;
long long int var_18 = -2224583919014213042LL;
bool var_19 = (bool)0;
void init() {
}

void checksum() {
    value_mismatch |= var_17 != (unsigned char)220;
    value_mismatch |= var_18 != 16100LL;
    value_mismatch |= var_19 != (bool)1;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_3, var_4, zero, &var_17, &var_18, &var_19);
  checksum();
  assert(!value_mismatch);
}
