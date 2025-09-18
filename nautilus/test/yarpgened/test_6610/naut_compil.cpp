/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 6610
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=6610
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
void test(val<int> var_1, val<int> zero, val<unsigned long long int*> var_14, val<short*> var_15) {
    *var_14 = min((((/* implicit */val<unsigned long long int>) (val<unsigned short>)58002)), (1219700413472786818ULL));
    *var_15 |= ((/* implicit */val<short>) var_1);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 638219958;
int zero = 0;
unsigned long long int var_14 = 18306731267570972629ULL;
short var_15 = (short)-15299;
void init() {
}

void checksum() {
    value_mismatch |= var_14 != 58002ULL;
    value_mismatch |= var_15 != (short)-2369;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, zero, &var_14, &var_15);
  checksum();
}
