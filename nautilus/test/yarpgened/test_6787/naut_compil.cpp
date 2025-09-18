/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 6787
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=6787
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
void test(val<int> var_3, val<int> zero, val<long long int*> var_19, val<unsigned char*> var_20) {
    *var_19 = min((((/* implicit */val<long long int>) (val<unsigned char>)173)), ((-9223372036854775807LL - 1LL)));
    *var_20 = ((/* implicit */val<unsigned char>) var_3);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = 1539721957;
int zero = 0;
long long int var_19 = 8440034343459275860LL;
unsigned char var_20 = (unsigned char)151;
void init() {
}

void checksum() {
    value_mismatch |= var_19 != (-9223372036854775807LL - 1LL);
    value_mismatch |= var_20 != (unsigned char)229;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_3, zero, &var_19, &var_20);
  checksum();
}
