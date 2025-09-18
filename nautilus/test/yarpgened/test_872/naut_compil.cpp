/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 872
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=872
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
void test(val<int> zero, val<long long int*> var_13, val<unsigned char*> var_14) {
    *var_13 = ((/* implicit */val<long long int>) ((val<unsigned long long int>) (-9223372036854775807LL - 1LL)));
    *var_14 = ((/* implicit */val<unsigned char>) min((*var_14), (((/* implicit */val<unsigned char>) (val<bool>)1))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int zero = 0;
long long int var_13 = -6822880754113152757LL;
unsigned char var_14 = (unsigned char)215;
void init() {
}

void checksum() {
    value_mismatch |= var_13 != (-9223372036854775807LL - 1LL);
    value_mismatch |= var_14 != (unsigned char)1;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(zero, &var_13, &var_14);
  checksum();
}
