/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 7274
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=7274
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
void test(val<bool> var_2, val<bool> var_9, val<unsigned char> var_12, val<bool> var_14, val<int> zero, val<bool*> var_15, val<int*> var_16, val<int*> var_17) {
    *var_15 = var_2;
    *var_16 = ((/* implicit */val<int>) var_14);
    *var_17 = min(((-(((/* implicit */val<int>) ((((/* implicit */val<int>) var_9)) > (((/* implicit */val<int>) var_12))))))), (((/* implicit */val<int>) ((val<unsigned char>) min((((/* implicit */val<unsigned long long int>) (val<unsigned char>)61)), (0ULL))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

bool var_2 = (bool)0;
bool var_9 = (bool)1;
unsigned char var_12 = (unsigned char)125;
bool var_14 = (bool)0;
int zero = 0;
bool var_15 = (bool)1;
int var_16 = 349682724;
int var_17 = 1549415042;
void init() {
}

void checksum() {
    value_mismatch |= var_15 != (bool)0;
    value_mismatch |= var_16 != 0;
    value_mismatch |= var_17 != 0;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_2, var_9, var_12, var_14, zero, &var_15, &var_16, &var_17);
  checksum();
  assert(!value_mismatch);
}
