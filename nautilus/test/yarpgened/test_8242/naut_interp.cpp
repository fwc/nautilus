/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 8242
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=8242
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
void test(val<bool> var_5, val<unsigned char> var_7, val<int> zero, val<bool*> var_13, val<bool*> var_14) {
    *var_13 = ((/* implicit */val<bool>) ((((/* implicit */val<bool>) max((((/* implicit */val<unsigned long long int>) ((1757669482) == (((/* implicit */val<int>) (val<bool>)1))))), (11074632981364733784ULL)))) ? (((((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) ((1052073914U) != (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_5))))))) + (1152921504590069760ULL))) : (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_7)))));
    *var_14 += ((((/* implicit */val<long long int>) ((/* implicit */val<int>) (val<bool>)1))) <= ((-9223372036854775807LL - 1LL)));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

bool var_5 = (bool)1;
unsigned char var_7 = (unsigned char)19;
int zero = 0;
bool var_13 = (bool)0;
bool var_14 = (bool)1;
void init() {
}

void checksum() {
    value_mismatch |= var_13 != (bool)1;
    value_mismatch |= var_14 != (bool)1;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_5, var_7, zero, &var_13, &var_14);
  checksum();
  assert(!value_mismatch);
}
