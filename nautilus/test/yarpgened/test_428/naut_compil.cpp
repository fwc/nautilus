/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 428
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=428
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
void test(val<unsigned short> var_0, val<signed char> var_12, val<int> zero, val<unsigned long long int*> var_13, val<unsigned long long int*> var_14) {
    *var_13 = ((/* implicit */val<unsigned long long int>) var_0);
    *var_14 = ((/* implicit */val<unsigned long long int>) var_12);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)4141;
signed char var_12 = (signed char)16;
int zero = 0;
unsigned long long int var_13 = 4050633462620484460ULL;
unsigned long long int var_14 = 17785943088177990190ULL;
void init() {
}

void checksum() {
    value_mismatch |= var_13 != 4141ULL;
    value_mismatch |= var_14 != 16ULL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_12, zero, &var_13, &var_14);
  checksum();
}
