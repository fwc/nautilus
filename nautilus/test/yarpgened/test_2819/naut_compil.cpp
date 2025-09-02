/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 2819
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=2819
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
void test(val<bool> var_7, val<unsigned long long int> var_11, val<unsigned short> var_15, val<int> zero, val<short*> var_19, val<bool*> var_20, val<int*> var_21, val<unsigned int*> var_22) {
    *var_19 = ((/* implicit */val<short>) var_15);
    *var_20 = ((/* implicit */val<bool>) var_11);
    *var_21 = ((/* implicit */val<int>) var_7);
    *var_22 = ((/* implicit */val<unsigned int>) ((val<int>) 442278783U));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

bool var_7 = (bool)0;
unsigned long long int var_11 = 8394342360020436366ULL;
unsigned short var_15 = (unsigned short)56051;
int zero = 0;
short var_19 = (short)16468;
bool var_20 = (bool)1;
int var_21 = 2049094762;
unsigned int var_22 = 1066901149U;
void init() {
}

void checksum() {
    value_mismatch |= var_19 != (short)-9485;
    value_mismatch |= var_20 != (bool)1;
    value_mismatch |= var_21 != 0;
    value_mismatch |= var_22 != 442278783U;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_7, var_11, var_15, zero, &var_19, &var_20, &var_21, &var_22);
  checksum();
  assert(!value_mismatch);
}
