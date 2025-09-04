/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 4041
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=4041
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
void test(val<unsigned char> var_7, val<long long int> var_13, val<int> zero, val<unsigned long long int*> var_18, val<signed char*> var_19) {
    *var_18 = ((/* implicit */val<unsigned long long int>) 1356760216);
    *var_19 = ((/* implicit */val<signed char>) max((var_13), (((/* implicit */val<long long int>) var_7))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_7 = (unsigned char)174;
long long int var_13 = -8201958434283989180LL;
int zero = 0;
unsigned long long int var_18 = 15721660031042128483ULL;
signed char var_19 = (signed char)-42;
void init() {
}

void checksum() {
    value_mismatch |= var_18 != 1356760216ULL;
    value_mismatch |= var_19 != (signed char)-82;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_7, var_13, zero, &var_18, &var_19);
  checksum();
  assert(!value_mismatch);
}
