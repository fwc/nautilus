/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 5568
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=5568
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
void test(val<unsigned int> var_0, val<unsigned char> var_8, val<unsigned short> var_10, val<bool> var_12, val<int> zero, val<signed char*> var_14, val<unsigned long long int*> var_15) {
    *var_14 = ((val<signed char>) var_8);
    *var_15 = ((/* implicit */val<unsigned long long int>) max((*var_15), (((/* implicit */val<unsigned long long int>) (-(min((((var_0) + (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_12))))), (((/* implicit */val<unsigned int>) (~(((/* implicit */val<int>) var_10))))))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3887229304U;
unsigned char var_8 = (unsigned char)118;
unsigned short var_10 = (unsigned short)43965;
bool var_12 = (bool)1;
int zero = 0;
signed char var_14 = (signed char)44;
unsigned long long int var_15 = 7118104375411969368ULL;
void init() {
}

void checksum() {
    value_mismatch |= var_14 != (signed char)118;
    value_mismatch |= var_15 != 7118104375411969368ULL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_8, var_10, var_12, zero, &var_14, &var_15);
  checksum();
}
