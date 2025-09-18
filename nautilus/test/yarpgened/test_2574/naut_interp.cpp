/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 2574
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=2574
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
void test(val<int> var_3, val<long long int> var_14, val<int> zero, val<short*> var_18, val<unsigned char*> var_19) {
    *var_18 = ((/* implicit */val<short>) var_3);
    *var_19 = ((/* implicit */val<unsigned char>) var_14);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = 2041255328;
long long int var_14 = 6292997382885615163LL;
int zero = 0;
short var_18 = (short)-26506;
unsigned char var_19 = (unsigned char)228;
void init() {
}

void checksum() {
    value_mismatch |= var_18 != (short)5536;
    value_mismatch |= var_19 != (unsigned char)59;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_3, var_14, zero, &var_18, &var_19);
  checksum();
}
