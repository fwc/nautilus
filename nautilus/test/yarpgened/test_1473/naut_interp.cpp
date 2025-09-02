/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 1473
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=1473
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
void test(val<signed char> var_1, val<unsigned char> var_2, val<signed char> var_5, val<unsigned char> var_7, val<unsigned int> var_11, val<int> zero, val<long long int*> var_12, val<bool*> var_13) {
    *var_12 = ((/* implicit */val<long long int>) (~(((/* implicit */val<int>) var_7))));
    *var_13 = ((/* implicit */val<bool>) ((((/* implicit */val<bool>) var_11)) ? (((((/* implicit */val<bool>) ((var_11) - (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_1)))))) ? ((+(135361638))) : (((((/* implicit */val<int>) var_5)) - (((/* implicit */val<int>) var_1)))))) : (((/* implicit */val<int>) var_2))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-4;
unsigned char var_2 = (unsigned char)124;
signed char var_5 = (signed char)-59;
unsigned char var_7 = (unsigned char)159;
unsigned int var_11 = 2210436575U;
int zero = 0;
long long int var_12 = 5908731617613140492LL;
bool var_13 = (bool)0;
void init() {
}

void checksum() {
    value_mismatch |= var_12 != -160LL;
    value_mismatch |= var_13 != (bool)1;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_2, var_5, var_7, var_11, zero, &var_12, &var_13);
  checksum();
  assert(!value_mismatch);
}
