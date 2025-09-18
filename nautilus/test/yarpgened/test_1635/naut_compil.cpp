/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 1635
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=1635
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
void test(val<unsigned char> var_8, val<int> zero, val<unsigned long long int*> var_13, val<signed char*> var_14) {
    *var_13 += ((/* implicit */val<unsigned long long int>) ((((/* implicit */val<bool>) ((val<unsigned int>) (val<signed char>)7))) ? (((/* implicit */val<int>) (val<unsigned char>)25)) : ((+(((/* implicit */val<int>) var_8))))));
    *var_14 = ((/* implicit */val<signed char>) 503316480U);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_8 = (unsigned char)14;
int zero = 0;
unsigned long long int var_13 = 17114911572429451527ULL;
signed char var_14 = (signed char)-47;
void init() {
}

void checksum() {
    value_mismatch |= var_13 != 17114911572429451552ULL;
    value_mismatch |= var_14 != (signed char)0;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_8, zero, &var_13, &var_14);
  checksum();
}
