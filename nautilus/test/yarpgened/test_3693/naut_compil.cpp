/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 3693
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=3693
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
void test(val<long long int> var_1, val<long long int> var_16, val<int> zero, val<bool*> var_19, val<unsigned long long int*> var_20) {
    *var_19 = ((((/* implicit */val<bool>) 7987031491154589858LL)) && ((!(((/* implicit */val<bool>) ((val<short>) var_16))))));
    *var_20 = ((/* implicit */val<unsigned long long int>) var_1);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 722362246213705825LL;
long long int var_16 = 8942846056457308000LL;
int zero = 0;
bool var_19 = (bool)1;
unsigned long long int var_20 = 8691221574163448851ULL;
void init() {
}

void checksum() {
    value_mismatch |= var_19 != (bool)0;
    value_mismatch |= var_20 != 722362246213705825ULL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_16, zero, &var_19, &var_20);
  checksum();
}
