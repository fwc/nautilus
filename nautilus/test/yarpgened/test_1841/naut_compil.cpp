/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 1841
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=1841
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
void test(val<bool> var_3, val<unsigned long long int> var_7, val<unsigned int> var_10, val<int> zero, val<unsigned long long int*> var_19, val<int*> var_20, val<signed char*> var_21) {
    *var_19 = ((/* implicit */val<unsigned long long int>) max((((/* implicit */val<unsigned int>) (val<unsigned char>)44)), (var_10)));
    *var_20 = ((/* implicit */val<int>) var_3);
    *var_21 = ((/* implicit */val<signed char>) max((*var_21), (((/* implicit */val<signed char>) ((val<unsigned long long int>) max((var_7), (((/* implicit */val<unsigned long long int>) (-(26295536))))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

bool var_3 = (bool)0;
unsigned long long int var_7 = 16443966594952959024ULL;
unsigned int var_10 = 2207576971U;
int zero = 0;
unsigned long long int var_19 = 15742622463512012041ULL;
int var_20 = -28025768;
signed char var_21 = (signed char)3;
void init() {
}

void checksum() {
    value_mismatch |= var_19 != 2207576971ULL;
    value_mismatch |= var_20 != 0;
    value_mismatch |= var_21 != (signed char)16;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_3, var_7, var_10, zero, &var_19, &var_20, &var_21);
  checksum();
}
