/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 4104
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=4104
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
void test(val<signed char> var_1, val<int> var_10, val<int> zero, val<short*> var_18, val<int*> var_19) {
    *var_18 &= ((/* implicit */val<short>) ((var_10) & (((/* implicit */val<int>) (val<unsigned char>)24))));
    *var_19 = ((/* implicit */val<int>) var_1);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)34;
int var_10 = -4161122;
int zero = 0;
short var_18 = (short)-20482;
int var_19 = -1952355757;
void init() {
}

void checksum() {
    value_mismatch |= var_18 != (short)24;
    value_mismatch |= var_19 != 34;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_10, zero, &var_18, &var_19);
  checksum();
  assert(!value_mismatch);
}
