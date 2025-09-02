/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 721
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=721
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
void test(val<bool> var_5, val<short> var_7, val<int> zero, val<bool*> var_12, val<unsigned short*> var_13) {
    *var_12 = var_5;
    *var_13 += ((/* implicit */val<unsigned short>) (~((((!(((/* implicit */val<bool>) (-2147483647 - 1))))) ? (((/* implicit */val<int>) var_7)) : (((/* implicit */val<int>) (val<unsigned char>)65))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

bool var_5 = (bool)1;
short var_7 = (short)-26266;
int zero = 0;
bool var_12 = (bool)0;
unsigned short var_13 = (unsigned short)44548;
void init() {
}

void checksum() {
    value_mismatch |= var_12 != (bool)1;
    value_mismatch |= var_13 != (unsigned short)44482;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_5, var_7, zero, &var_12, &var_13);
  checksum();
  assert(!value_mismatch);
}
