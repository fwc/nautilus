/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 8465
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=8465
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
void test(val<bool> var_7, val<unsigned int> var_9, val<bool> var_10, val<int> zero, val<short*> var_13, val<int*> var_14, val<unsigned short*> var_15) {
    *var_13 += ((/* implicit */val<short>) ((((val<long long int>) var_7)) == (((/* implicit */val<long long int>) ((/* implicit */val<int>) var_10)))));
    *var_14 = ((/* implicit */val<int>) var_9);
    *var_15 = ((/* implicit */val<unsigned short>) (+(0U)));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

bool var_7 = (bool)0;
unsigned int var_9 = 1088361194U;
bool var_10 = (bool)1;
int zero = 0;
short var_13 = (short)-4130;
int var_14 = 1271056526;
unsigned short var_15 = (unsigned short)24066;
void init() {
}

void checksum() {
    value_mismatch |= var_13 != (short)-4130;
    value_mismatch |= var_14 != 1088361194;
    value_mismatch |= var_15 != (unsigned short)0;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_7, var_9, var_10, zero, &var_13, &var_14, &var_15);
  checksum();
  assert(!value_mismatch);
}
