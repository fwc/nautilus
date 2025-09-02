/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 1103
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=1103
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
void test(val<long long int> var_5, val<unsigned short> var_11, val<int> zero, val<unsigned long long int*> var_12, val<bool*> var_13) {
    *var_12 = ((/* implicit */val<unsigned long long int>) var_5);
    *var_13 = ((/* implicit */val<bool>) (~(((/* implicit */val<int>) var_11))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_5 = -8630183524419768107LL;
unsigned short var_11 = (unsigned short)25167;
int zero = 0;
unsigned long long int var_12 = 1732917582629764714ULL;
bool var_13 = (bool)0;
void init() {
}

void checksum() {
    value_mismatch |= var_12 != 9816560549289783509ULL;
    value_mismatch |= var_13 != (bool)1;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_5, var_11, zero, &var_12, &var_13);
  checksum();
  assert(!value_mismatch);
}
