/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 1398
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=1398
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
void test(val<unsigned char> var_7, val<unsigned int> var_11, val<signed char> var_19, val<int> zero, val<bool*> var_20, val<short*> var_21) {
    *var_20 = ((/* implicit */val<bool>) (~(var_11)));
    *var_21 = ((/* implicit */val<short>) ((((/* implicit */val<bool>) var_19)) ? (((/* implicit */val<int>) var_7)) : ((-(((val<int>) (val<short>)-32759))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_7 = (unsigned char)61;
unsigned int var_11 = 3172947793U;
signed char var_19 = (signed char)79;
int zero = 0;
bool var_20 = (bool)1;
short var_21 = (short)-18437;
void init() {
}

void checksum() {
    value_mismatch |= var_20 != (bool)1;
    value_mismatch |= var_21 != (short)61;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_7, var_11, var_19, zero, &var_20, &var_21);
  checksum();
  assert(!value_mismatch);
}
