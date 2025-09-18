/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 4647
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=4647
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
void test(val<unsigned int> var_1, val<signed char> var_3, val<int> zero, val<signed char*> var_11, val<unsigned char*> var_12) {
    *var_11 = ((/* implicit */val<signed char>) max(((~(((((/* implicit */val<bool>) var_1)) ? (1183479303U) : (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) (val<signed char>)39))))))), (max((((/* implicit */val<unsigned int>) var_3)), ((~(436188966U)))))));
    *var_12 = ((/* implicit */val<unsigned char>) var_3);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1891266156U;
signed char var_3 = (signed char)108;
int zero = 0;
signed char var_11 = (signed char)35;
unsigned char var_12 = (unsigned char)226;
void init() {
}

void checksum() {
    value_mismatch |= var_11 != (signed char)-39;
    value_mismatch |= var_12 != (unsigned char)108;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_3, zero, &var_11, &var_12);
  checksum();
}
