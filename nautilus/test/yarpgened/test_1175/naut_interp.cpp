/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 1175
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=1175
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
void test(val<unsigned char> var_1, val<long long int> var_3, val<int> var_5, val<int> zero, val<unsigned int*> var_16, val<signed char*> var_17) {
    *var_16 = ((/* implicit */val<unsigned int>) max((((val<long long int>) ((((/* implicit */val<int>) (val<unsigned char>)32)) > (var_5)))), (max((((var_3) ^ (((/* implicit */val<long long int>) ((/* implicit */val<int>) (val<unsigned char>)251))))), (((/* implicit */val<long long int>) (val<unsigned char>)192))))));
    *var_17 = ((/* implicit */val<signed char>) max((var_1), (((/* implicit */val<unsigned char>) (val<bool>)1))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)49;
long long int var_3 = 398875049482475280LL;
int var_5 = 1010984918;
int zero = 0;
unsigned int var_16 = 1978479083U;
signed char var_17 = (signed char)108;
void init() {
}

void checksum() {
    value_mismatch |= var_16 != 2183878635U;
    value_mismatch |= var_17 != (signed char)49;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_3, var_5, zero, &var_16, &var_17);
  checksum();
}
