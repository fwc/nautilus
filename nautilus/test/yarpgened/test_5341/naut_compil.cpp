/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 5341
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=5341
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
void test(val<int> var_3, val<unsigned long long int> var_4, val<unsigned char> var_9, val<int> zero, val<unsigned char*> var_10, val<signed char*> var_11, val<bool*> var_12) {
    *var_10 = ((/* implicit */val<unsigned char>) min((*var_10), (var_9)));
    *var_11 -= ((/* implicit */val<signed char>) var_3);
    *var_12 = ((/* implicit */val<bool>) ((((/* implicit */val<bool>) var_4)) ? (((/* implicit */val<int>) max((((val<signed char>) var_9)), ((val<signed char>)-82)))) : (((/* implicit */val<int>) var_9))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = 574748;
unsigned long long int var_4 = 6845504983852352089ULL;
unsigned char var_9 = (unsigned char)236;
int zero = 0;
unsigned char var_10 = (unsigned char)47;
signed char var_11 = (signed char)-91;
bool var_12 = (bool)1;
void init() {
}

void checksum() {
    value_mismatch |= var_10 != (unsigned char)47;
    value_mismatch |= var_11 != (signed char)-119;
    value_mismatch |= var_12 != (bool)1;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_3, var_4, var_9, zero, &var_10, &var_11, &var_12);
  checksum();
  assert(!value_mismatch);
}
