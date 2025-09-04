/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 5203
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=5203
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
void test(val<signed char> var_8, val<unsigned short> var_9, val<unsigned long long int> var_12, val<int> zero, val<unsigned int*> var_19, val<unsigned long long int*> var_20, val<bool*> var_21) {
    *var_19 = ((/* implicit */val<unsigned int>) var_8);
    *var_20 ^= (~(var_12));
    *var_21 = ((/* implicit */val<bool>) var_9);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_8 = (signed char)-71;
unsigned short var_9 = (unsigned short)38651;
unsigned long long int var_12 = 1460861389084131388ULL;
int zero = 0;
unsigned int var_19 = 2714465213U;
unsigned long long int var_20 = 2162401151135299766ULL;
bool var_21 = (bool)1;
void init() {
}

void checksum() {
    value_mismatch |= var_19 != 4294967225U;
    value_mismatch |= var_20 != 17706920278847571829ULL;
    value_mismatch |= var_21 != (bool)1;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_8, var_9, var_12, zero, &var_19, &var_20, &var_21);
  checksum();
  assert(!value_mismatch);
}
